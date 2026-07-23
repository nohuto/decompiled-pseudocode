/*
 * XREFs of RtlClearAllBitsEx @ 0x14046DD90
 * Callers:
 *     MiIdentifyPatchImageDataPages @ 0x1407E3160 (MiIdentifyPatchImageDataPages.c)
 *     MiCopyToCfgBitMap @ 0x14090603C (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1409417A8 (MiUpdateCfgSystemWideBitmapWorker.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __cdecl RtlClearAllBitsEx(PRTL_BITMAP_EX BitMapHeader)
{
  memset_0(
    BitMapHeader->Buffer,
    0,
    4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
