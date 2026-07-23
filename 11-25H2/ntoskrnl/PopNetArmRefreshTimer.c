/*
 * XREFs of PopNetArmRefreshTimer @ 0x14074FD7C
 * Callers:
 *     PopNetRefreshTimerWorkerCallback @ 0x1407500C0 (PopNetRefreshTimerWorkerCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140A36900 (PopNetWnfLowPowerEpochCallback.c)
 * Callees:
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 *     PopTraceNetRefreshTimerArmed @ 0x14074C7E4 (PopTraceNetRefreshTimerArmed.c)
 */

void __fastcall PopNetArmRefreshTimer(__int64 a1, char a2)
{
  LARGE_INTEGER v4; // rdx
  unsigned __int64 v5; // rcx

  v4.QuadPart = -a1;
  if ( a2 )
    v4.QuadPart = a1;
  KeSetTimer2((__int64)&PopNetRefreshTimer, v4, 0LL, 0LL);
  v5 = a1;
  if ( a2 )
  {
    v5 = a1 - MEMORY[0xFFFFF78000000014];
    if ( MEMORY[0xFFFFF78000000014] >= a1 )
      v5 = 0LL;
  }
  PopTraceNetRefreshTimerArmed(v5);
}
