/*
 * XREFs of NormBuffer__InsertAtBlockedLocation @ 0x1800B608C
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x1800B4EFC (Normalization__NormalizeCharacter.c)
 *     NormBuffer__AppendAndSortDecomposed @ 0x1800B6798 (NormBuffer__AppendAndSortDecomposed.c)
 * Callees:
 *     NormBuffer__AppendEx @ 0x1800B5788 (NormBuffer__AppendEx.c)
 */

char __fastcall NormBuffer__InsertAtBlockedLocation(__int64 a1, __int64 a2, char a3, char a4)
{
  if ( *(_QWORD *)(a1 + 104) == *(_QWORD *)(a1 + 40) )
    return NormBuffer__AppendEx(a1, a2, a3, a4);
  else
    return NormBuffer__Insert();
}
