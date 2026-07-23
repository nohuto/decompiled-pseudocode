/*
 * XREFs of RtlGetExtendedFeaturesMask @ 0x1800DB4E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLocateXStateChunk @ 0x1800DB500 (RtlpLocateXStateChunk.c)
 */

ULONG64 __cdecl RtlGetExtendedFeaturesMask(PCONTEXT_EX ContextEx)
{
  return *(_QWORD *)RtlpLocateXStateChunk(ContextEx) & 0xFFFFFFFFFFFFFFFCuLL;
}
