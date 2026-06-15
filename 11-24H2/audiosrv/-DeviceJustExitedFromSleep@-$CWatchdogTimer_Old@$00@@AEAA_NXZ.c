/*
 * XREFs of ?DeviceJustExitedFromSleep@?$CWatchdogTimer_Old@$00@@AEAA_NXZ @ 0x1800ADD3C
 * Callers:
 *     ?HangIsProbablyReal@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800AF5A4 (-HangIsProbablyReal@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 *     ?HangIsProbablyReal@?$CWatchdogTimer_Old@$00@@AEAA_NXZ @ 0x1800AF6D8 (-HangIsProbablyReal@-$CWatchdogTimer_Old@$00@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CWatchdogTimer_Old<1>::DeviceJustExitedFromSleep(LARGE_INTEGER a1)
{
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp+10h] BYREF

  Frequency = a1;
  if ( !g_timeLastExitFromLPE.QuadPart && !g_timeLastExitFromS3.QuadPart )
    return 0;
  Frequency.QuadPart = 0LL;
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  QueryPerformanceFrequency(&Frequency);
  if ( !Frequency.QuadPart )
    return 0;
  if ( (double)(PerformanceCount.LowPart - g_timeLastExitFromLPE.LowPart) / (double)(int)Frequency.LowPart < 5.0 )
    return 1;
  return (double)(PerformanceCount.LowPart - g_timeLastExitFromS3.LowPart) / (double)(int)Frequency.LowPart < 5.0;
}
