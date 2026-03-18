/*
 * XREFs of ExpHeapInitPhase1 @ 0x14065A310
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140C40A64 (ExpInitSystemPhase1.c)
 * Callees:
 *     ExAllocateTimer @ 0x1403BF2E0 (ExAllocateTimer.c)
 *     ExpHpEnumerateHeaps @ 0x140485A24 (ExpHpEnumerateHeaps.c)
 */

char __fastcall ExpHeapInitPhase1(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // bl

  v6 = 0;
  if ( (int)ExpHpEnumerateHeaps(1, (__int64)ExpHeapInitLfhStartCallback, a3, a4) >= 0
    && (int)ExpHpEnumerateHeaps(0, (__int64)ExpHeapInitLfhStartCallback, v4, v5) >= 0 )
  {
    ExpHpGCTimerPaged = ExAllocateTimer((__int64)ExpHpGCTimerCallback, 0LL, 8u);
    if ( ExpHpGCTimerPaged )
    {
      ExpHpGCTimerNonPaged = ExAllocateTimer((__int64)ExpHpGCTimerCallback, 1LL, 8u);
      if ( ExpHpGCTimerNonPaged )
      {
        ExpHpGCScheduledNonPaged = 0;
        ExpHpGCScheduledPaged = 0;
        ExpHpGCInitialized = 1;
        return 1;
      }
    }
  }
  return v6;
}
