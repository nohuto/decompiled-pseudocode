/*
 * XREFs of sub_140007430 @ 0x140007430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_140007430(__int64 a1, unsigned int **a2)
{
  char v2; // r8
  unsigned int *v3; // r10
  unsigned int i; // r9d
  unsigned int *v5; // rax

  v2 = 0;
  *a2 = 0LL;
  v3 = *(unsigned int **)(a1 + 536);
  if ( v3 && *v3 )
  {
    for ( i = 0; i < *v3; ++i )
    {
      v5 = &v3[26 * i + 2];
      if ( *((_BYTE *)v5 + 80) == 127 && *(_QWORD *)(v5 + 21) == 3215LL && *((_BYTE *)v5 + 82) == 32 )
      {
        *a2 = v5;
        return 1;
      }
    }
  }
  return v2;
}
