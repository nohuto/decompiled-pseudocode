/*
 * XREFs of ExpHeapInitPhase1 @ 0x14064E480
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140C2F788 (ExpInitSystemPhase1.c)
 * Callees:
 *     ExAllocateTimer @ 0x14036F160 (ExAllocateTimer.c)
 *     ExpHpEnumerateHeaps @ 0x140487E44 (ExpHpEnumerateHeaps.c)
 */

char ExpHeapInitPhase1()
{
  char v0; // bl

  v0 = 0;
  if ( (int)ExpHpEnumerateHeaps(1) >= 0 && (int)ExpHpEnumerateHeaps(0) >= 0 )
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
  return v0;
}
