/*
 * XREFs of RtlClearAllBitsEx @ 0x14046C570
 * Callers:
 *     MiIdentifyPatchImageDataPages @ 0x1407F2FE8 (MiIdentifyPatchImageDataPages.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1408F6F24 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiCopyToCfgBitMap @ 0x1408FA0F0 (MiCopyToCfgBitMap.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void *__fastcall RtlClearAllBitsEx(__int64 a1)
{
  return memset_0(*(void **)(a1 + 8), 0, 4 * ((*(_QWORD *)a1 >> 5) + ((*(_QWORD *)a1 & 0x1F) != 0)));
}
