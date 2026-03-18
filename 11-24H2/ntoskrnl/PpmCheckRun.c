/*
 * XREFs of PpmCheckRun @ 0x14029FA80
 * Callers:
 *     PpmCheckStart @ 0x140457794 (PpmCheckStart.c)
 * Callees:
 *     PpmCheckAcquireProcessorPerformance @ 0x14029FB30 (PpmCheckAcquireProcessorPerformance.c)
 *     PpmCheckMakeupSkippedChecks @ 0x14029FB90 (PpmCheckMakeupSkippedChecks.c)
 *     PpmPerfReadFeedback @ 0x14029FCC0 (PpmPerfReadFeedback.c)
 *     PpmEventTracePerfCheckStop @ 0x14029FD0C (PpmEventTracePerfCheckStop.c)
 *     PpmReleaseLock @ 0x1402A1504 (PpmReleaseLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmCheckRun(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (*v4)(void); // r8
  __int64 result; // rax

  while ( 1 )
  {
    v4 = *(__int64 (**)(void))(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex);
    if ( !v4 )
      break;
    ++PpmCheckPipelineIndex;
    if ( v4 == PpmCheckAcquireProcessorPerformance )
    {
      result = PpmCheckAcquireProcessorPerformance();
    }
    else if ( v4 == PpmCheckMakeupSkippedChecks )
    {
      result = PpmCheckMakeupSkippedChecks();
    }
    else if ( v4 == PpmPerfReadFeedback )
    {
      result = PpmPerfReadFeedback();
    }
    else
    {
      result = guard_dispatch_icall_no_overrides(PpmCheckPipeline, a2, v4, a4);
    }
    if ( !(_BYTE)result )
      return result;
  }
  PpmReleaseLock(&PpmPerfPolicyLock);
  return PpmEventTracePerfCheckStop();
}
