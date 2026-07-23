/*
 * XREFs of NormBuffer__ReplaceLastStartBasePair @ 0x1405ED13C
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x140786414 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__AppendAndSortDecomposed @ 0x1405ECBFC (NormBuffer__AppendAndSortDecomposed.c)
 *     Normalization__GetThirdAndLastDecomposedCharPlane0 @ 0x140785B14 (Normalization__GetThirdAndLastDecomposedCharPlane0.c)
 */

int __fastcall NormBuffer__ReplaceLastStartBasePair(__int64 a1, int a2, char a3, char a4)
{
  unsigned int ThirdAndLastDecomposedCharPlane0; // eax

  ThirdAndLastDecomposedCharPlane0 = Normalization__GetThirdAndLastDecomposedCharPlane0(
                                       *(_QWORD *)(a1 + 112),
                                       *(unsigned int *)(a1 + 88));
  *(_WORD *)(*(_QWORD *)(a1 + 80) - 2LL) = a2;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 88) = a2;
  *(_BYTE *)(a1 + 92) = a3;
  *(_BYTE *)(a1 + 93) = a4;
  if ( ThirdAndLastDecomposedCharPlane0 )
    return NormBuffer__AppendAndSortDecomposed(a1, ThirdAndLastDecomposedCharPlane0);
  else
    return 1;
}
