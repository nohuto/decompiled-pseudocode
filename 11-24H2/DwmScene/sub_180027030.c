/*
 * XREFs of sub_180027030 @ 0x180027030
 * Callers:
 *     sub_180026CC0 @ 0x180026CC0 (sub_180026CC0.c)
 *     sub_180083AF0 @ 0x180083AF0 (sub_180083AF0.c)
 *     sub_180091F10 @ 0x180091F10 (sub_180091F10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180027030(__int64 a1)
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
