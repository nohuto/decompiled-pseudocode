/*
 * XREFs of ExpUnblockPushLock @ 0x1402C793C
 * Callers:
 *     CmpTryToRundownHive @ 0x1402C6840 (CmpTryToRundownHive.c)
 *     ExBlockOnAddressPushLock @ 0x1402C6C40 (ExBlockOnAddressPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1402C6D50 (ExTimedWaitForUnblockPushLock.c)
 *     MiUnlockImageSection @ 0x1402C7130 (MiUnlockImageSection.c)
 *     ExfUnblockPushLock @ 0x1402C7820 (ExfUnblockPushLock.c)
 *     PspHandleTableWalker @ 0x1402C7840 (PspHandleTableWalker.c)
 *     ExUnblockOnAddressPushLockEx @ 0x1402C78A0 (ExUnblockOnAddressPushLockEx.c)
 *     ExUnblockPushLockEx @ 0x1402C78F0 (ExUnblockPushLockEx.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x1402C8200 (CmpDecrementAppHiveUnloadCount.c)
 *     CmpWaitForLateUnloadWorker @ 0x1402C8600 (CmpWaitForLateUnloadWorker.c)
 *     RtlReleaseSwapReference @ 0x1403A500C (RtlReleaseSwapReference.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x14045CD70 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x14045D1A8 (RtlpCSparseBitmapWaitOnAddress.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1402C6D50 (ExTimedWaitForUnblockPushLock.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

NTSTATUS __fastcall ExpUnblockPushLock(volatile __int64 *a1, void *a2, char a3)
{
  char v3; // bp
  __int64 v4; // rbx
  NTSTATUS result; // eax
  char v6; // r12
  void *v7; // rsi
  __int64 v8; // r15
  unsigned __int8 CurrentIrql; // di
  __int64 v10; // r14

  v3 = 0;
  v4 = _InterlockedExchange64(a1, 0LL);
  result = 2;
  v6 = a3;
  v7 = a2;
  v8 = (__int64)a1;
  CurrentIrql = 2;
  if ( v4 )
  {
    if ( *(_QWORD *)(v4 + 24) )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 2;
        LOBYTE(a1) = CurrentIrql;
        result = KiRaiseIrqlProcessIrqlFlags(a1, a2);
      }
    }
    do
    {
      v10 = *(_QWORD *)(v4 + 24);
      if ( (void *)v4 == v7 )
        v3 = 1;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)(v4 + 52), 1u) )
        result = KeSetEvent((PRKEVENT)v4, 1, 0);
      v4 = v10;
    }
    while ( v10 );
    v6 = a3;
    if ( CurrentIrql != 2 )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  if ( v7 && !v3 )
  {
    if ( v6 )
      return KeWaitForSingleObject(v7, WrPushLock, 0, 0, 0LL);
    else
      return ExTimedWaitForUnblockPushLock(v8, (char *)v7, 0LL);
  }
  return result;
}
