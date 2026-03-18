/*
 * XREFs of KeRundownPriQueue @ 0x1405C4E08
 * Callers:
 *     ExpWorkQueueDestroy @ 0x1407B0908 (ExpWorkQueueDestroy.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KeRundownQueueCommon @ 0x14041E8C4 (KeRundownQueueCommon.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x14041ECE0 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
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
  KiExitDispatcher(KeGetCurrentPrcb(), 0LL, 1u, 0, CurrentIrql);
}
