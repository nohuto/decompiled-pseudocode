/*
 * XREFs of RtlGetExtendedFeaturesMask @ 0x1800E03E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLocateXStateChunk @ 0x1800E0400 (RtlpLocateXStateChunk.c)
 */

unsigned __int64 RtlGetExtendedFeaturesMask()
{
  return *(_QWORD *)RtlpLocateXStateChunk() & 0xFFFFFFFFFFFFFFFCuLL;
}
