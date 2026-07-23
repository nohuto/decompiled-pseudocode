/*
 * XREFs of NormBuffer__Append @ 0x1800B57E0
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x1800B4EFC (Normalization__NormalizeCharacter.c)
 *     NormBuffer__AppendEx @ 0x1800B5788 (NormBuffer__AppendEx.c)
 * Callees:
 *     <none>
 */

char __fastcall NormBuffer__Append(__int64 a1, int a2)
{
  _WORD **v2; // r8
  _QWORD *v3; // r9
  _WORD *v4; // rax
  _WORD *v6; // r10
  int v7; // kr00_4

  v2 = (_WORD **)(a1 + 40);
  v3 = (_QWORD *)(a1 + 32);
  if ( a2 >= 0x10000 )
  {
    v6 = *v2;
    if ( (unsigned __int64)*v2 >= *v3 )
      return 0;
    v7 = a2 - 0x10000;
    a2 = ((a2 - 0x10000) >> 31) & 0x3FF;
    *v6 = ((a2 + v7) >> 10) - 10240;
    LOWORD(a2) = ((a2 + v7) & 0x3FF) - a2 - 9216;
    *v2 = v6 + 1;
  }
  v4 = *v2;
  if ( (unsigned __int64)*v2 < *v3 )
  {
    *v4 = a2;
    *v2 = v4 + 1;
    return 1;
  }
  return 0;
}
