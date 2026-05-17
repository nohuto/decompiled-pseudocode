/*
 * XREFs of RtlWalkFrameChain @ 0x18003C7A0
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x18003B480 (EtwpWriteToPrivateBuffers.c)
 *     RtlCaptureStackBackTrace @ 0x18003C700 (RtlCaptureStackBackTrace.c)
 * Callees:
 *     RtlpWalkFrameChain @ 0x180016100 (RtlpWalkFrameChain.c)
 */

__int64 __fastcall RtlWalkFrameChain(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // r8
  int v4; // ecx
  __int64 result; // rax

  if ( (a3 & 0xFFFF00FF) != 0 )
    return 0LL;
  v3 = a3 >> 8;
  if ( (unsigned int)v3 > 0xFE || a2 == -1 )
    return 0LL;
  v4 = RtlpWalkFrameChain(a1, a2 + 1, v3, (int)v3 + 1);
  result = (unsigned int)(v4 - 1);
  if ( !v4 )
    return 0LL;
  return result;
}
