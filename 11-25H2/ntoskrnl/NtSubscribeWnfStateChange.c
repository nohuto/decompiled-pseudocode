/*
 * XREFs of NtSubscribeWnfStateChange @ 0x140A13A20
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ExRaiseAccessViolation @ 0x140936B90 (ExRaiseAccessViolation.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140A13B0C (ExpWnfSubscribeWnfStateChange.c)
 */

NTSTATUS __cdecl NtSubscribeWnfStateChange(
        PCWNF_STATE_NAME StateName,
        WNF_CHANGE_STAMP ChangeStamp,
        ULONG EventMask,
        PULONG64 SubscriptionId)
{
  struct _KTHREAD *CurrentThread; // rax
  PULONG64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  NTSTATUS v10; // edi
  unsigned __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = 0LL;
  if ( SubscriptionId )
  {
    v7 = SubscriptionId;
    v8 = (unsigned __int64)SubscriptionId + 7;
    if ( SubscriptionId >= (PULONG64)((char *)SubscriptionId + 7) || v8 >= 0x7FFFFFFF0000LL )
      ExRaiseAccessViolation();
    v9 = (v8 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    do
    {
      *(_BYTE *)v7 = *(_BYTE *)v7;
      v7 = (PULONG64)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000uLL) + 4096);
    }
    while ( v7 != (PULONG64)v9 );
    *SubscriptionId = 0LL;
  }
  v10 = ExpWnfSubscribeWnfStateChange((unsigned __int64)&v12 & -(__int64)(SubscriptionId != 0LL), 0LL, StateName);
  if ( v10 >= 0 && SubscriptionId )
    *SubscriptionId = v12;
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v10;
}
