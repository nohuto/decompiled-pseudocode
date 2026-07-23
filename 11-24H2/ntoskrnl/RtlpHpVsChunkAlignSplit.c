/*
 * XREFs of RtlpHpVsChunkAlignSplit @ 0x140368020
 * Callers:
 *     RtlpHpVsSlotAllocate @ 0x140367A10 (RtlpHpVsSlotAllocate.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpHpVsChunkAlignSplit(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  unsigned int v8; // eax
  unsigned __int64 v9; // r8

  v4 = WORD1(RtlpHpHeapGlobals) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2);
  if ( ((a3 + 4111) & 0xFFFFFFFFFFFFF000uLL) - a3 >= 16 * (unsigned __int64)v4 )
    return 0LL;
  v6 = ((a3 + 4111) & 0xFFFFFFFFFFFFF000uLL) - 32;
  v7 = (__int64)(v6 - a3) >> 4;
  v8 = v4 - v7;
  *(_WORD *)(a3 + 2) = WORD1(RtlpHpHeapGlobals) ^ v7 ^ WORD1(a3);
  *(_OWORD *)v6 = 0LL;
  *(_OWORD *)(v6 + 16) = 0LL;
  *(_WORD *)(v6 + 2) = v8;
  *(_WORD *)(v6 + 4) = v7;
  *(_QWORD *)v6 ^= v6 ^ RtlpHpHeapGlobals;
  v9 = v6 + 16LL * v8;
  if ( v9 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
    *(_WORD *)(v9 + 4) = WORD2(v9) ^ v8 ^ WORD2(RtlpHpHeapGlobals);
  return v6;
}
