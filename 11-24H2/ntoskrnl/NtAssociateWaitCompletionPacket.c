/*
 * XREFs of NtAssociateWaitCompletionPacket @ 0x1404DC340
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeRegisterObjectNotification @ 0x14032D090 (KeRegisterObjectNotification.c)
 *     ObGetAssociatedWaitObject @ 0x14041B310 (ObGetAssociatedWaitObject.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtAssociateWaitCompletionPacket(
        HANDLE WaitCompletionPacketHandle,
        HANDLE IoCompletionHandle,
        HANDLE TargetObjectHandle,
        PVOID KeyContext,
        PVOID ApcContext,
        NTSTATUS IoStatus,
        ULONG_PTR IoStatusInformation,
        PBOOLEAN AlreadySignaled)
{
  KIRQL v8; // r14
  char v9; // r13
  PVOID v10; // r12
  PVOID v11; // r15
  int v12; // ebx
  KSPIN_LOCK *v13; // rsi
  __int16 *AssociatedWaitObject; // rax
  _QWORD *v15; // r8
  PVOID v16; // rdx
  BOOLEAN v17; // si
  __int64 v18; // rcx
  volatile signed __int64 *v19; // rcx
  KPROCESSOR_MODE PreviousMode; // [rsp+30h] [rbp-68h]
  PVOID Object; // [rsp+38h] [rbp-60h] BYREF
  PVOID v23; // [rsp+40h] [rbp-58h] BYREF
  PVOID v24; // [rsp+48h] [rbp-50h] BYREF
  __int16 *v25; // [rsp+50h] [rbp-48h]
  PKSPIN_LOCK SpinLock; // [rsp+58h] [rbp-40h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]

  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(
          WaitCompletionPacketHandle,
          1u,
          IopWaitCompletionPacketObjectType,
          PreviousMode,
          &Object,
          0LL);
  v13 = (KSPIN_LOCK *)Object;
  if ( v12 >= 0 )
  {
    v24 = 0LL;
    v12 = ObReferenceObjectByHandle(IoCompletionHandle, 2u, IoCompletionObjectType, PreviousMode, &v24, 0LL);
    v10 = v24;
    if ( v12 >= 0 )
    {
      v23 = 0LL;
      v12 = ObReferenceObjectByHandle(TargetObjectHandle, 0x100000u, 0LL, PreviousMode, &v23, 0LL);
      v11 = v23;
      if ( v12 >= 0 )
      {
        AssociatedWaitObject = ObGetAssociatedWaitObject((__int64)v23);
        v25 = AssociatedWaitObject;
        if ( AssociatedWaitObject && (((*(_BYTE *)AssociatedWaitObject & 0x7F) - 2) & 0xFD) != 0 )
        {
          v9 = 1;
          SpinLock = v13 + 12;
          v8 = KeAcquireSpinLockRaiseToDpc(v13 + 12);
          if ( *((_BYTE *)v13 + 104) )
          {
            v12 = -1073741585;
          }
          else
          {
            v15 = Object;
            if ( *((_BYTE *)Object + 105) )
            {
              v12 = -1073700861;
            }
            else
            {
              *((_BYTE *)Object + 104) = 1;
              v15[6] = KeyContext;
              v15[7] = ApcContext;
              *((_DWORD *)v15 + 18) = IoStatus;
              v15[8] = IoStatusInformation;
              v15[10] = v23;
              v16 = v24;
              v15[11] = v24;
              v17 = KeRegisterObjectNotification((__int64)v25, (__int64)v16, (__int64)v15);
              KeReleaseSpinLock(SpinLock, v8);
              v9 = 0;
              if ( AlreadySignaled )
              {
                if ( PreviousMode )
                {
                  v18 = 0x7FFFFFFF0000LL;
                  if ( (unsigned __int64)AlreadySignaled < 0x7FFFFFFF0000LL )
                    v18 = (__int64)AlreadySignaled;
                  *(_BYTE *)v18 = *(_BYTE *)v18;
                }
                *AlreadySignaled = v17;
              }
              v10 = 0LL;
              v11 = 0LL;
              v13 = 0LL;
            }
          }
        }
        else
        {
          v12 = -1073741583;
        }
      }
    }
  }
  if ( v9 )
  {
    v19 = (volatile signed __int64 *)(v13 + 12);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64(v19, 0LL);
    else
      KiReleaseSpinLockInstrumented(v19, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
    __writecr8(v8);
  }
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x746C6644u);
  if ( v11 )
    ObfDereferenceObjectWithTag(v11, 0x746C6644u);
  if ( v13 )
    ObfDereferenceObjectWithTag(v13, 0x746C6644u);
  return v12;
}
