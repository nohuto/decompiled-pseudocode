/*
 * XREFs of PpmCheckRun @ 0x1402ADDF0
 * Callers:
 *     PpmCheckStart @ 0x14044C244 (PpmCheckStart.c)
 * Callees:
 *     PpmCheckAcquireProcessorPerformance @ 0x1402ADEA0 (PpmCheckAcquireProcessorPerformance.c)
 *     PpmCheckMakeupSkippedChecks @ 0x1402ADF00 (PpmCheckMakeupSkippedChecks.c)
 *     PpmPerfReadFeedback @ 0x1402AE030 (PpmPerfReadFeedback.c)
 *     PpmEventTracePerfCheckStop @ 0x1402AE07C (PpmEventTracePerfCheckStop.c)
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmCheckRun(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // r8
  __int64 result; // rax

  while ( 1 )
  {
    v2 = *(__int64 (**)(void))(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex);
    if ( !v2 )
      break;
    ++PpmCheckPipelineIndex;
    if ( v2 == PpmCheckAcquireProcessorPerformance )
    {
      result = PpmCheckAcquireProcessorPerformance();
    }
    else if ( v2 == PpmCheckMakeupSkippedChecks )
    {
      result = PpmCheckMakeupSkippedChecks();
    }
    else if ( v2 == PpmPerfReadFeedback )
    {
      result = PpmPerfReadFeedback();
    }
    else
    {
      result = guard_dispatch_icall_no_overrides(PpmCheckPipeline, a2);
    }
    if ( !(_BYTE)result )
      return result;
  }
  PpmReleaseLock(&PpmPerfPolicyLock);
  return PpmEventTracePerfCheckStop();
}
