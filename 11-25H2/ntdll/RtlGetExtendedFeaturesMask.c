/*
 * XREFs of RtlGetExtendedFeaturesMask @ 0x1800DD680
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLocateXStateChunk @ 0x1800DD6A0 (RtlpLocateXStateChunk.c)
 */

ULONG64 __cdecl RtlGetExtendedFeaturesMask(PCONTEXT_EX ContextEx)
{
  return *(_QWORD *)RtlpLocateXStateChunk(ContextEx) & 0xFFFFFFFFFFFFFFFCuLL;
}
