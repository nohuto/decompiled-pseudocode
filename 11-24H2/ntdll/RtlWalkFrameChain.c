/*
 * XREFs of RtlWalkFrameChain @ 0x18001CA20
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x18001B700 (EtwpWriteToPrivateBuffers.c)
 *     RtlCaptureStackBackTrace @ 0x18001C980 (RtlCaptureStackBackTrace.c)
 * Callees:
 *     RtlpWalkFrameChain @ 0x180042B00 (RtlpWalkFrameChain.c)
 */

ULONG __cdecl RtlWalkFrameChain(PVOID *Callers, ULONG Count, ULONG Flags)
{
  __int64 v3; // r8
  int v4; // ecx
  ULONG result; // eax

  if ( (Flags & 0xFFFF00FF) != 0 )
    return 0;
  v3 = Flags >> 8;
  if ( (unsigned int)v3 > 0xFE || Count == -1 )
    return 0;
  v4 = RtlpWalkFrameChain(Callers, Count + 1, v3, (unsigned int)(v3 + 1));
  result = v4 - 1;
  if ( !v4 )
    return 0;
  return result;
}
