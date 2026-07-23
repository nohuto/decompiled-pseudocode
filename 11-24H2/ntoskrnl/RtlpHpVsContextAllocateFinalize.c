/*
 * XREFs of RtlpHpVsContextAllocateFinalize @ 0x140368524
 * Callers:
 *     ExAllocateHeapPool @ 0x140277790 (ExAllocateHeapPool.c)
 * Callees:
 *     RtlHeapZero @ 0x1406B5ED0 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpVsContextAllocateFinalize(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rsi
  unsigned int v9; // ebx
  __int16 v10; // ax

  v4 = a2 + 16;
  v7 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(a2) ^ *(unsigned __int16 *)(a2 + 2)) - 16;
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && ((a2 + 32) & 0xFFF) == 0 )
  {
    v4 = a2 + 32;
    v7 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(a2) ^ *(unsigned __int16 *)(a2 + 2)) - 32;
  }
  v8 = v7;
  if ( (a4 & 2) != 0 )
    RtlHeapZero(v4, v7);
  if ( a3 < v7 )
  {
    *(_DWORD *)(a2 + 8) |= 0x100u;
    v9 = v7 - a3;
    *(_BYTE *)(v8 + v4 - 1) = 0;
    v10 = *(_WORD *)(v8 + v4 - 2);
    if ( v9 == 1 )
      *(_WORD *)(v8 + v4 - 2) = v10 | 0x8000;
    else
      *(_WORD *)(v8 + v4 - 2) = v10 ^ (v9 ^ v10) & 0x1FFF;
  }
  return v4;
}
