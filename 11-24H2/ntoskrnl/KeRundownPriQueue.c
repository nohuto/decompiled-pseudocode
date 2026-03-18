/*
 * XREFs of KeRundownPriQueue @ 0x1405C9434
 * Callers:
 *     ExpWorkQueueDestroy @ 0x1407C00D8 (ExpWorkQueueDestroy.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KeRundownQueueCommon @ 0x14041B8B8 (KeRundownQueueCommon.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x14041BCD0 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KeRundownPriQueue(unsigned __int64 SystemArgument1)
{
  unsigned __int8 CurrentIrql; // di

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)SystemArgument1);
  KeRundownQueueCommon(
    (volatile signed __int32 *)SystemArgument1,
    (volatile signed __int32 **)(SystemArgument1 + 672),
    (_DWORD *)(SystemArgument1 + 536),
    0x20u,
    1);
  _InterlockedAnd((volatile signed __int32 *)SystemArgument1, 0xFFFFFF7F);
  KiAcquireReleaseObjectRundownLockExclusive(SystemArgument1);
  KiExitDispatcher((unsigned __int64)KeGetCurrentPrcb(), 0LL, 1u, 0, CurrentIrql);
}
