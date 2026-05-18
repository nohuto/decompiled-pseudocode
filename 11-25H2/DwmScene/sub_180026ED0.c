/*
 * XREFs of sub_180026ED0 @ 0x180026ED0
 * Callers:
 *     sub_180026B60 @ 0x180026B60 (sub_180026B60.c)
 *     sub_180083990 @ 0x180083990 (sub_180083990.c)
 *     sub_180091DB0 @ 0x180091DB0 (sub_180091DB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180026ED0(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  unsigned int *v3; // rcx

  v1 = *(_QWORD *)(a1 + 136);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(unsigned int **)(v1 + 128);
    if ( v3 )
      return *v3;
  }
  return result;
}
