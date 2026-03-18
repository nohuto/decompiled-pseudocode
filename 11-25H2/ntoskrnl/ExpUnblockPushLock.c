/*
 * XREFs of ExpUnblockPushLock @ 0x14036EB2C
 * Callers:
 *     RtlpCSparseBitmapPageDecommit @ 0x14035F208 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x14035F640 (RtlpCSparseBitmapWaitOnAddress.c)
 *     CmpWaitForLateUnloadWorker @ 0x14036D430 (CmpWaitForLateUnloadWorker.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x14036D618 (CmpDecrementAppHiveUnloadCount.c)
 *     CmpTryToRundownHive @ 0x14036DA50 (CmpTryToRundownHive.c)
 *     MiUnlockImageSection @ 0x14036E15C (MiUnlockImageSection.c)
 *     ExBlockOnAddressPushLock @ 0x14036E7C0 (ExBlockOnAddressPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x14036E8D0 (ExTimedWaitForUnblockPushLock.c)
 *     ExfUnblockPushLock @ 0x14036EA10 (ExfUnblockPushLock.c)
 *     PspHandleTableWalker @ 0x14036EA30 (PspHandleTableWalker.c)
 *     ExUnblockOnAddressPushLockEx @ 0x14036EA90 (ExUnblockOnAddressPushLockEx.c)
 *     ExUnblockPushLockEx @ 0x14036EAE0 (ExUnblockPushLockEx.c)
 *     RtlReleaseSwapReference @ 0x1403B8C2C (RtlReleaseSwapReference.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ExTimedWaitForUnblockPushLock @ 0x14036E8D0 (ExTimedWaitForUnblockPushLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
        LOBYTE(a1) = CurrentIrql;
        result = KiRaiseIrqlProcessIrqlFlags(a1);
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
