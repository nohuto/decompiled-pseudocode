/*
 * XREFs of RtlWalkFrameChain @ 0x14027DB70
 * Callers:
 *     SepGetStackTraceHash @ 0x14027BF90 (SepGetStackTraceHash.c)
 *     EtwpExpandedStackWalk @ 0x14027C190 (EtwpExpandedStackWalk.c)
 *     RtlCaptureStackBackTrace @ 0x14027C690 (RtlCaptureStackBackTrace.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x14027D7A0 (KeExpandKernelStackAndCalloutInternal.c)
 *     SepCreateTokenEx @ 0x1403645F4 (SepCreateTokenEx.c)
 *     EtwpExpandStackAndWalkFrameChain @ 0x1403ED390 (EtwpExpandStackAndWalkFrameChain.c)
 *     EtwpTraceStackWalk @ 0x1403EDBD0 (EtwpTraceStackWalk.c)
 *     KiDpcWatchdogCaptureStack @ 0x140447624 (KiDpcWatchdogCaptureStack.c)
 *     CmpThreadInfoLogStack @ 0x1404BECC0 (CmpThreadInfoLogStack.c)
 *     EtwpCovSampCaptureKernelStack @ 0x140651A48 (EtwpCovSampCaptureKernelStack.c)
 *     ExpUpdateDebugInfo @ 0x14084D2F4 (ExpUpdateDebugInfo.c)
 *     SepDuplicateToken @ 0x140856520 (SepDuplicateToken.c)
 *     EtwpCovSampCaptureUserStack @ 0x140900880 (EtwpCovSampCaptureUserStack.c)
 *     PoDiagCaptureUsermodeStack @ 0x1409B2070 (PoDiagCaptureUsermodeStack.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140AA26E8 (EtwTimLogRedirectionTrustPolicy.c)
 *     SepFilterToken @ 0x140AD2664 (SepFilterToken.c)
 * Callees:
 *     MmCanThreadFault @ 0x14027DC40 (MmCanThreadFault.c)
 *     RtlpWalkFrameChain @ 0x14027E270 (RtlpWalkFrameChain.c)
 *     RtlpGetStackLimits @ 0x14027FEF0 (RtlpGetStackLimits.c)
 *     KeGetCurrentStackPointer @ 0x1406AA390 (KeGetCurrentStackPointer.c)
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
  if ( !(unsigned int)MmCanThreadFault(Callers) && (v4 & 1) != 0 )
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
