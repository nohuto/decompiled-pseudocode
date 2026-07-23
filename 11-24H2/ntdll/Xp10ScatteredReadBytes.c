/*
 * XREFs of Xp10ScatteredReadBytes @ 0x180103508
 * Callers:
 *     Xp10ExecuteHuffmanDecode @ 0x18010239C (Xp10ExecuteHuffmanDecode.c)
 *     Xp10ReadAndDecodeHuffmanTables @ 0x180102B0C (Xp10ReadAndDecodeHuffmanTables.c)
 *     RtlDecompressBuffer2Xp10 @ 0x1801032B8 (RtlDecompressBuffer2Xp10.c)
 *     Xp10ReadMtfHeader @ 0x18010386C (Xp10ReadMtfHeader.c)
 *     Xp10ScatteredBitBufferReadBytes @ 0x18011CD38 (Xp10ScatteredBitBufferReadBytes.c)
 *     Xp10Compute2Crc32 @ 0x18014D0DC (Xp10Compute2Crc32.c)
 *     Xp10Compute2Crc64 @ 0x18014D1E4 (Xp10Compute2Crc64.c)
 * Callees:
 *     Xp10ScatteredNextBuffer @ 0x18011DF2C (Xp10ScatteredNextBuffer.c)
 *     memmove @ 0x1801657C0 (memmove.c)
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
