/*
 * XREFs of NormBuffer__LastStartBasePair @ 0x18011DBD4
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x1800BD13C (Normalization__NormalizeCharacter.c)
 * Callees:
 *     Normalization__CanCombinableCharactersCombine @ 0x1800BE3FC (Normalization__CanCombinableCharactersCombine.c)
 *     NormBuffer__LastStartBase @ 0x18011E584 (NormBuffer__LastStartBase.c)
 *     Normalization__GetSecondDecomposedCharPlane0 @ 0x1801470A4 (Normalization__GetSecondDecomposedCharPlane0.c)
 */

__int64 __fastcall NormBuffer__LastStartBasePair(__int64 a1)
{
  __int64 result; // rax
  int SecondDecomposedCharPlane0; // ebx
  int StartBase; // eax

  result = *(unsigned int *)(a1 + 100);
  if ( !(_DWORD)result )
  {
    SecondDecomposedCharPlane0 = Normalization__GetSecondDecomposedCharPlane0(
                                   *(_QWORD *)(a1 + 112),
                                   *(unsigned int *)(a1 + 88));
    StartBase = NormBuffer__LastStartBase(a1);
    result = Normalization__CanCombinableCharactersCombine(*(_QWORD *)(a1 + 112), StartBase, SecondDecomposedCharPlane0);
    *(_DWORD *)(a1 + 100) = result;
  }
  return result;
}
