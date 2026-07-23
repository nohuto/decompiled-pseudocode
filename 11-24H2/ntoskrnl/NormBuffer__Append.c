/*
 * XREFs of NormBuffer__Append @ 0x1405ECB98
 * Callers:
 *     NormBuffer__AppendEx @ 0x1405ECC58 (NormBuffer__AppendEx.c)
 *     Normalization__Normalize @ 0x140786250 (Normalization__Normalize.c)
 *     Normalization__NormalizeCharacter @ 0x140786414 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

char __fastcall NormBuffer__Append(__int64 a1, int a2)
{
  _WORD **v2; // r8
  _WORD *v3; // r9
  int v4; // kr00_4
  _WORD *v5; // rax

  v2 = (_WORD **)(a1 + 40);
  if ( a2 >= 0x10000 )
  {
    v3 = *v2;
    if ( (unsigned __int64)*v2 >= *(_QWORD *)(a1 + 32) )
      return 0;
    v4 = a2 - 0x10000;
    a2 = (a2 - 0x10000) >> 31;
    *v3 = __SPAIR64__(a2, v4) / 1024 - 10240;
    *v2 = v3 + 1;
    LOWORD(a2) = __SPAIR64__(a2, v4) % 1024 - 9216;
  }
  v5 = *v2;
  if ( (unsigned __int64)*v2 >= *(_QWORD *)(a1 + 32) )
    return 0;
  *v5 = a2;
  *v2 = v5 + 1;
  return 1;
}
