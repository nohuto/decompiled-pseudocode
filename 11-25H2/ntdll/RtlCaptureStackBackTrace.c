/*
 * XREFs of RtlCaptureStackBackTrace @ 0x1800900F0
 * Callers:
 *     RtlReleaseActivationContext @ 0x18001A130 (RtlReleaseActivationContext.c)
 *     RtlStdLogStackTrace @ 0x180025840 (RtlStdLogStackTrace.c)
 *     RtlpHeapTrkTrackStack @ 0x18008FEF0 (RtlpHeapTrkTrackStack.c)
 *     RtlActivateActivationContext @ 0x180091610 (RtlActivateActivationContext.c)
 *     RtlActivateActivationContextEx @ 0x180091780 (RtlActivateActivationContextEx.c)
 *     RtlpHpStackTraceAddStack @ 0x1800DCD90 (RtlpHpStackTraceAddStack.c)
 *     RtlpStackTraceDatabaseLogPrefix @ 0x1800F97C0 (RtlpStackTraceDatabaseLogPrefix.c)
 *     RtlGetCallersAddress @ 0x180116AB0 (RtlGetCallersAddress.c)
 *     RtlpHpHeapHandleError @ 0x18011F190 (RtlpHpHeapHandleError.c)
 *     LdrpCgLogFailure @ 0x180161150 (LdrpCgLogFailure.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x180090190 (RtlWalkFrameChain.c)
 */

USHORT __stdcall RtlCaptureStackBackTrace(
        ULONG FramesToSkip,
        ULONG FramesToCapture,
        PVOID *BackTrace,
        PULONG BackTraceHash)
{
  ULONG v4; // esi
  ULONG v7; // edi
  ULONG i; // eax
  unsigned int v9; // r8d
  ULONG v10; // edx
  __int64 v11; // rcx

  v4 = 0xFFFF;
  if ( FramesToCapture <= 0xFFFF )
    v4 = FramesToCapture;
  if ( FramesToSkip > 0xFE
    || (v7 = FramesToSkip + 1, i = RtlWalkFrameChain(BackTrace, v4 + v7, v7 << 8), v9 = i, i <= v7) )
  {
    LOWORD(i) = 0;
  }
  else if ( BackTraceHash )
  {
    v10 = 0;
    for ( i = 0; i < v4; v10 += LODWORD(BackTrace[v11]) )
    {
      if ( i + v7 >= v9 )
        break;
      v11 = i++;
    }
    *BackTraceHash = v10;
  }
  else
  {
    LOWORD(i) = i - v7;
  }
  return i;
}
