/*
 * XREFs of PpmCheckStart @ 0x140203674
 * Callers:
 *     PpmCheckCustomRun @ 0x140202CF8 (PpmCheckCustomRun.c)
 *     PpmCheckPeriodicStart @ 0x1402035D0 (PpmCheckPeriodicStart.c)
 * Callees:
 *     PpmEventTracePerfCheckStart @ 0x140203744 (PpmEventTracePerfCheckStart.c)
 *     PpmCheckRun @ 0x140204960 (PpmCheckRun.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     PpmPerfSetAllDomainsToUpdate @ 0x14048810C (PpmPerfSetAllDomainsToUpdate.c)
 *     PpmHeteroHgsCheckContainmentDecision @ 0x1404AF124 (PpmHeteroHgsCheckContainmentDecision.c)
 */

__int64 __fastcall PpmCheckStart(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  int v4; // r8d
  int v5; // edx
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  PpmCheckCurrentPipelineId = a1;
  PpmCheckTime = RtlGetInterruptTimePrecise(&PerformanceCounter).QuadPart;
  PpmEventTracePerfCheckStart(PpmCheckLastEffectiveExecutionTime, (unsigned int)v1);
  v2 = 0LL;
  PpmCheckPipeline = *(_QWORD *)(PpmCheckPipelines + 8 * v1);
  if ( !PpmCheckPipeline )
    PpmCheckPipeline = *(_QWORD *)PpmCheckPipelines;
  PpmCheckPipelineIndex = 0;
  LOBYTE(v2) = (unsigned __int64)PpmPerfDeadlineBoostExpiration >= MEMORY[0xFFFFF78000000008];
  if ( __PAIR64__(PpmCheckLatencyBoostActive, PpmCheckDeadlineBoostActive) != __PAIR64__(
                                                                                (unsigned __int64)PpmPerfLatencyBoostExpiration >= MEMORY[0xFFFFF78000000008],
                                                                                v2) )
  {
    PpmPerfSetAllDomainsToUpdate(PpmPerfDeadlineBoostExpiration, v2);
    PpmCheckLatencyBoostActive = v4;
    PpmCheckDeadlineBoostActive = v5;
    PpmHeteroHgsCheckContainmentDecision();
  }
  return PpmCheckRun(0LL, 0LL, 0LL, 0LL);
}
