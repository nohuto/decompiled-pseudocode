/*
 * XREFs of NtGetCompleteWnfStateSubscription @ 0x1408E2AC0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1408E2CA0 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1408E3088 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExRaiseAccessViolation @ 0x140936B90 (ExRaiseAccessViolation.c)
 */

NTSTATUS __cdecl NtGetCompleteWnfStateSubscription(
        PWNF_STATE_NAME OldDescriptorStateName,
        ULONG64 *OldSubscriptionId,
        ULONG OldDescriptorEventMask,
        ULONG OldDescriptorStatus,
        PWNF_DELIVERY_DESCRIPTOR NewDeliveryDescriptor,
        ULONG DescriptorSize)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v8; // ebx
  __int64 v9; // r12
  PWNF_DELIVERY_DESCRIPTOR v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  _QWORD v16[3]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v17; // [rsp+50h] [rbp-38h] BYREF

  v17 = 0LL;
  v16[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = -1073741811;
  v9 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[3].BasePriority;
  if ( v9 )
  {
    if ( !OldDescriptorStateName || !OldSubscriptionId )
      goto LABEL_3;
    if ( OldDescriptorEventMask && (!OldDescriptorStatus || OldDescriptorStatus == -1073741267) )
    {
      v14 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)OldDescriptorStateName < 0x7FFFFFFF0000LL )
        v14 = (__int64)OldDescriptorStateName;
      RtlCopyVolatileMemory(&v17, (const void *)v14, 8uLL);
      v15 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)OldSubscriptionId < 0x7FFFFFFF0000LL )
        v15 = (__int64)OldSubscriptionId;
      RtlCopyVolatileMemory(v16, (const void *)v15, 8uLL);
      v8 = ExpWnfCompleteThreadSubscriptions(v9, &v17, v16[0]);
      if ( v8 >= 0 )
      {
LABEL_3:
        if ( DescriptorSize )
        {
          if ( DescriptorSize < 0x1030 )
          {
            v8 = -1073741789;
          }
          else
          {
            v10 = NewDeliveryDescriptor;
            if ( ((unsigned __int8)NewDeliveryDescriptor & 7) != 0 )
              ExRaiseDatatypeMisalignment();
            v11 = (unsigned __int64)&NewDeliveryDescriptor[-1].StateDataOffset + DescriptorSize + 3;
            if ( v11 >= 0x7FFFFFFF0000LL || (unsigned __int64)NewDeliveryDescriptor > v11 )
              ExRaiseAccessViolation();
            v12 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
            do
            {
              LOBYTE(v10->SubscriptionId) = v10->SubscriptionId;
              v10 = (PWNF_DELIVERY_DESCRIPTOR)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFF000uLL) + 4096);
            }
            while ( v10 != (PWNF_DELIVERY_DESCRIPTOR)v12 );
            v8 = ExpWnfDeliverThreadNotifications(v9, NewDeliveryDescriptor);
          }
        }
      }
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v8;
}
