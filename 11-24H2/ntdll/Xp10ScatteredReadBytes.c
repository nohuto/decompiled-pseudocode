/*
 * XREFs of Xp10ScatteredReadBytes @ 0x1801085D8
 * Callers:
 *     Xp10ExecuteHuffmanDecode @ 0x18010746C (Xp10ExecuteHuffmanDecode.c)
 *     Xp10ReadAndDecodeHuffmanTables @ 0x180107BDC (Xp10ReadAndDecodeHuffmanTables.c)
 *     RtlDecompressBuffer2Xp10 @ 0x180108388 (RtlDecompressBuffer2Xp10.c)
 *     Xp10ReadMtfHeader @ 0x18010893C (Xp10ReadMtfHeader.c)
 *     Xp10ScatteredBitBufferReadBytes @ 0x18011EB08 (Xp10ScatteredBitBufferReadBytes.c)
 *     Xp10Compute2Crc32 @ 0x18014ED1C (Xp10Compute2Crc32.c)
 *     Xp10Compute2Crc64 @ 0x18014EE24 (Xp10Compute2Crc64.c)
 * Callees:
 *     Xp10ScatteredNextBuffer @ 0x18011FCFC (Xp10ScatteredNextBuffer.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall Xp10ScatteredReadBytes(__int64 a1, char *a2, int a3)
{
  unsigned int v6; // edi
  size_t v7; // rbx

  v6 = 0;
  do
  {
    v7 = a3 - v6;
    if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 <= v7 )
      v7 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
    memmove(a2, *(const void **)a1, v7);
    *(_QWORD *)a1 += v7;
    v6 += v7;
    a2 += v7;
  }
  while ( v6 != a3 && (unsigned int)Xp10ScatteredNextBuffer(a1) );
  return v6;
}
