/*
 * XREFs of RtlCaptureStackBackTrace @ 0x18001C980
 * Callers:
 *     RtlpHeapTrkTrackStack @ 0x18001C780 (RtlpHeapTrkTrackStack.c)
 *     RtlActivateActivationContext @ 0x18001DEA0 (RtlActivateActivationContext.c)
 *     RtlActivateActivationContextEx @ 0x18001E010 (RtlActivateActivationContextEx.c)
 *     RtlStdLogStackTrace @ 0x180030E50 (RtlStdLogStackTrace.c)
 *     RtlReleaseActivationContext @ 0x1800740B0 (RtlReleaseActivationContext.c)
 *     RtlpHpStackTraceAddStack @ 0x1800DA400 (RtlpHpStackTraceAddStack.c)
 *     RtlpStackTraceDatabaseLogPrefix @ 0x1800F27A0 (RtlpStackTraceDatabaseLogPrefix.c)
 *     RtlGetCallersAddress @ 0x18010F0C0 (RtlGetCallersAddress.c)
 *     RtlpHpHeapHandleError @ 0x18011BAF0 (RtlpHpHeapHandleError.c)
 *     LdrpCgLogFailure @ 0x18015DFC0 (LdrpCgLogFailure.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x18001CA20 (RtlWalkFrameChain.c)
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
