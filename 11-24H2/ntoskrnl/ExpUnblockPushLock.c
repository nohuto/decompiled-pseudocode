/*
 * XREFs of ExpUnblockPushLock @ 0x1402BC2BC
 * Callers:
 *     RtlReleaseSwapReference @ 0x14021E4BC (RtlReleaseSwapReference.c)
 *     CmpWaitForLateUnloadWorker @ 0x1402B98A0 (CmpWaitForLateUnloadWorker.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x1402BA854 (CmpDecrementAppHiveUnloadCount.c)
 *     CmpTryToRundownHive @ 0x1402BB3C0 (CmpTryToRundownHive.c)
 *     ExBlockOnAddressPushLock @ 0x1402BB7C0 (ExBlockOnAddressPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1402BB8D0 (ExTimedWaitForUnblockPushLock.c)
 *     MiUnlockImageSection @ 0x1402BBCB0 (MiUnlockImageSection.c)
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     PspHandleTableWalker @ 0x1402BC1C0 (PspHandleTableWalker.c)
 *     ExUnblockOnAddressPushLockEx @ 0x1402BC220 (ExUnblockOnAddressPushLockEx.c)
 *     ExUnblockPushLockEx @ 0x1402BC270 (ExUnblockPushLockEx.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x140451E3C (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x140452274 (RtlpCSparseBitmapWaitOnAddress.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1402BB8D0 (ExTimedWaitForUnblockPushLock.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

LONG __fastcall ExpUnblockPushLock(volatile __int64 *a1, void *a2, char a3)
{
  char v3; // bp
  __int64 v4; // rbx
  LONG result; // eax
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
