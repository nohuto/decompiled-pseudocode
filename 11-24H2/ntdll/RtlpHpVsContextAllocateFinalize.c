/*
 * XREFs of RtlpHpVsContextAllocateFinalize @ 0x180119DA4
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x1800E80AC (RtlpHpVsContextAllocate.c)
 * Callees:
 *     RtlpHpVsChunkSetUnusedBytes @ 0x1800DAD70 (RtlpHpVsChunkSetUnusedBytes.c)
 *     RtlHeapZero @ 0x1801653C0 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpVsContextAllocateFinalize(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // rdi
  unsigned int v7; // ebx

  v4 = a2 + 16;
  v7 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(a2) ^ *(unsigned __int16 *)(a2 + 2)) - 16;
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && ((a2 + 32) & 0xFFF) == 0 )
  {
    v4 = a2 + 32;
    v7 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(a2) ^ *(unsigned __int16 *)(a2 + 2)) - 32;
  }
  if ( (a4 & 2) != 0 )
    RtlHeapZero(v4, v7);
  if ( a3 < v7 )
  {
    *(_DWORD *)(a2 + 8) |= 0x100u;
    RtlpHpVsChunkSetUnusedBytes(v4, v7, v7 - a3);
  }
  return v4;
}
