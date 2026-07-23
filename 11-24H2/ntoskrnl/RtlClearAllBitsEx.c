/*
 * XREFs of RtlClearAllBitsEx @ 0x140467110
 * Callers:
 *     MiIdentifyPatchImageDataPages @ 0x1407F361C (MiIdentifyPatchImageDataPages.c)
 *     MiCopyToCfgBitMap @ 0x14091C9CC (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140974760 (MiUpdateCfgSystemWideBitmapWorker.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __cdecl RtlClearAllBitsEx(PRTL_BITMAP_EX BitMapHeader)
{
  memset_0(
    BitMapHeader->Buffer,
    0,
    4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
