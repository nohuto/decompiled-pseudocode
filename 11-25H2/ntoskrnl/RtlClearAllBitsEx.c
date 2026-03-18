/*
 * XREFs of RtlClearAllBitsEx @ 0x14046DD90
 * Callers:
 *     MiIdentifyPatchImageDataPages @ 0x1407E3160 (MiIdentifyPatchImageDataPages.c)
 *     MiCopyToCfgBitMap @ 0x14090603C (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1409417A8 (MiUpdateCfgSystemWideBitmapWorker.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void *__fastcall RtlClearAllBitsEx(__int64 a1)
{
  return memset_0(*(void **)(a1 + 8), 0, 4 * ((*(_QWORD *)a1 >> 5) + ((*(_QWORD *)a1 & 0x1F) != 0)));
}
