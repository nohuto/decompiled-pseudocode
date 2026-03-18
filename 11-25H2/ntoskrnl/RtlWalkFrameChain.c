/*
 * XREFs of RtlWalkFrameChain @ 0x140348060
 * Callers:
 *     CmpThreadInfoLogStack @ 0x14020704C (CmpThreadInfoLogStack.c)
 *     EtwpTraceStackWalk @ 0x140309D40 (EtwpTraceStackWalk.c)
 *     EtwpExpandedStackWalk @ 0x140347B90 (EtwpExpandedStackWalk.c)
 *     RtlCaptureStackBackTrace @ 0x140347BC0 (RtlCaptureStackBackTrace.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x140347C90 (KeExpandKernelStackAndCalloutInternal.c)
 *     EtwpExpandStackAndWalkFrameChain @ 0x140348E10 (EtwpExpandStackAndWalkFrameChain.c)
 *     SepCreateTokenEx @ 0x14036B744 (SepCreateTokenEx.c)
 *     KiDpcWatchdogCaptureStack @ 0x14044A01C (KiDpcWatchdogCaptureStack.c)
 *     SepGetStackTraceHash @ 0x14048CD74 (SepGetStackTraceHash.c)
 *     EtwpCovSampCaptureKernelStack @ 0x140645A98 (EtwpCovSampCaptureKernelStack.c)
 *     ExpUpdateDebugInfo @ 0x140851530 (ExpUpdateDebugInfo.c)
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 *     EtwpCovSampCaptureUserStack @ 0x14090C920 (EtwpCovSampCaptureUserStack.c)
 *     SepFilterToken @ 0x140997EFC (SepFilterToken.c)
 *     PoDiagCaptureUsermodeStack @ 0x1409CCDD0 (PoDiagCaptureUsermodeStack.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140A9CEE8 (EtwTimLogRedirectionTrustPolicy.c)
 * Callees:
 *     RtlpWalkFrameChain @ 0x140257BE0 (RtlpWalkFrameChain.c)
 *     RtlpGetStackLimits @ 0x140258FB0 (RtlpGetStackLimits.c)
 *     MmCanThreadFault @ 0x140348130 (MmCanThreadFault.c)
 *     KeGetCurrentStackPointer @ 0x14069F0C0 (KeGetCurrentStackPointer.c)
 */

ULONG __stdcall RtlWalkFrameChain(PVOID *Callers, ULONG Count, ULONG Flags)
{
  char v4; // di
  BOOL v5; // ebx
  unsigned int v6; // esi
  unsigned int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 CurrentStackPointer; // rax
  unsigned int v11; // ecx
  ULONG result; // eax
  unsigned __int64 v13[5]; // [rsp+20h] [rbp-28h] BYREF
  char *v14; // [rsp+68h] [rbp+20h] BYREF

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
  if ( !RtlpGetStackLimits(&v14, v13) )
    return 0;
  CurrentStackPointer = KeGetCurrentStackPointer(v9, v8);
  if ( (unsigned __int64)(CurrentStackPointer - (_QWORD)v14) < 0xE30 )
    return 0;
  v11 = RtlpWalkFrameChain((__int64)Callers, v7, v4, v6);
  result = (__PAIR64__(v11, v4 & 2) - 1) >> 32;
  if ( !v11 )
    return 0;
  return result;
}
