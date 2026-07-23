/*
 * XREFs of RtlWalkFrameChain @ 0x140233100
 * Callers:
 *     SepGetStackTraceHash @ 0x140231520 (SepGetStackTraceHash.c)
 *     EtwpExpandedStackWalk @ 0x140231720 (EtwpExpandedStackWalk.c)
 *     RtlCaptureStackBackTrace @ 0x140231C20 (RtlCaptureStackBackTrace.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x140232D30 (KeExpandKernelStackAndCalloutInternal.c)
 *     EtwpExpandStackAndWalkFrameChain @ 0x1403DD360 (EtwpExpandStackAndWalkFrameChain.c)
 *     EtwpTraceStackWalk @ 0x1403DDBA0 (EtwpTraceStackWalk.c)
 *     SepCreateTokenEx @ 0x1403E9CAC (SepCreateTokenEx.c)
 *     KiDpcWatchdogCaptureStack @ 0x14043FD44 (KiDpcWatchdogCaptureStack.c)
 *     CmpThreadInfoLogStack @ 0x1404B9E80 (CmpThreadInfoLogStack.c)
 *     EtwpCovSampCaptureKernelStack @ 0x140650148 (EtwpCovSampCaptureKernelStack.c)
 *     ExpUpdateDebugInfo @ 0x1408495B4 (ExpUpdateDebugInfo.c)
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     EtwpCovSampCaptureUserStack @ 0x140923160 (EtwpCovSampCaptureUserStack.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 *     PoDiagCaptureUsermodeStack @ 0x1409A93C0 (PoDiagCaptureUsermodeStack.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140A9DA78 (EtwTimLogRedirectionTrustPolicy.c)
 * Callees:
 *     MmCanThreadFault @ 0x1402331D0 (MmCanThreadFault.c)
 *     RtlpWalkFrameChain @ 0x140233800 (RtlpWalkFrameChain.c)
 *     RtlpGetStackLimits @ 0x140235480 (RtlpGetStackLimits.c)
 *     KeGetCurrentStackPointer @ 0x1406AB330 (KeGetCurrentStackPointer.c)
 */

ULONG __stdcall RtlWalkFrameChain(PVOID *Callers, ULONG Count, ULONG Flags)
{
  ULONG v4; // edi
  BOOL v5; // ebx
  ULONG v6; // esi
  ULONG v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 CurrentStackPointer; // rax
  unsigned int v11; // ecx
  ULONG result; // eax
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  if ( (Flags & 0xFFFF00FC) != 0 )
    return 0;
  v4 = Flags & 3;
  if ( Flags >> 8 > 0xFE )
    return 0;
  if ( Count == -1 )
    return 0;
  v5 = (Flags & 2) == 0;
  v6 = v5 + (Flags >> 8);
  v7 = v5 + Count;
  if ( !(unsigned int)MmCanThreadFault() && (v4 & 1) != 0 )
    return 0;
  v13[0] = 0LL;
  v14 = 0LL;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v14, v13) )
    return 0;
  CurrentStackPointer = KeGetCurrentStackPointer(v9, v8);
  if ( (unsigned __int64)(CurrentStackPointer - v14) < 0xE30 )
    return 0;
  v11 = RtlpWalkFrameChain(Callers, v7, v4, v6);
  result = (__PAIR64__(v11, v4 & 2) - 1) >> 32;
  if ( !v11 )
    return 0;
  return result;
}
