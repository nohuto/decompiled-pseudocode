/*
 * XREFs of Normalization__CanCombinableCharactersCombine @ 0x14078560C
 * Callers:
 *     NormBuffer__LastStartBasePair @ 0x1405ECF20 (NormBuffer__LastStartBasePair.c)
 *     NormBuffer__RecheckStartCombinations @ 0x1405ECF70 (NormBuffer__RecheckStartCombinations.c)
 *     Normalization__CanCombineWithStartBase @ 0x140785778 (Normalization__CanCombineWithStartBase.c)
 *     Normalization__CanCombineWithStartFirstPair @ 0x1407857C4 (Normalization__CanCombineWithStartFirstPair.c)
 *     Normalization__IsNormalized @ 0x140785BB0 (Normalization__IsNormalized.c)
 *     Normalization__NormalizeCharacter @ 0x140786414 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Normalization__CanCombinableCharactersCombine(__int64 a1, int a2, int a3)
{
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int16 i; // r8
  __int64 v9; // r9
  int v10; // edi

  if ( ((a2 & 0x1F0000) == 0) == ((a3 & 0x1F0000) == 0) )
  {
    v5 = *(_DWORD *)(a1 + 88);
    if ( v5 )
    {
      v6 = *(_QWORD *)(a1 + 96);
      v7 = (unsigned __int16)((a2 + 12541 * a3) % v5);
      for ( i = *(_WORD *)(v6 + 2 * v7); i < *(_WORD *)(v6 + 2 * v7 + 2); i += 3 )
      {
        v9 = *(_QWORD *)(a1 + 104);
        v10 = *(unsigned __int16 *)(v9 + 2LL * i);
        if ( a2 == v10 && a3 == *(unsigned __int16 *)(v9 + 2LL * i + 2) )
          return *(unsigned __int16 *)(v9 + 2LL * i + 4);
        if ( (unsigned __int16)(v10 + 10240) <= 0x7FFu )
        {
          if ( a2 > 0xFFFF
            && (_WORD)v10 == (unsigned __int16)((a2 - 0x10000) / 1024) - 10240
            && *(_WORD *)(v9 + 2LL * i + 2) == (unsigned __int16)((a2 - 0x10000) % 1024) - 9216
            && *(_WORD *)(v9 + 2LL * i + 4) == (unsigned __int16)((a3 - 0x10000) / 1024) - 10240
            && *(_WORD *)(v9 + 2LL * i + 6) == (unsigned __int16)((a3 - 0x10000) % 1024) - 9216 )
          {
            return *(unsigned __int16 *)(v9 + 2LL * i + 10)
                 + (((unsigned int)*(unsigned __int16 *)(v9 + 2LL * i + 8) - 55287) << 10);
          }
          i += 3;
        }
      }
    }
  }
  return 0LL;
}
