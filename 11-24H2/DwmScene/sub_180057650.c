/*
 * XREFs of sub_180057650 @ 0x180057650
 * Callers:
 *     sub_180059750 @ 0x180059750 (sub_180059750.c)
 *     sub_180068E40 @ 0x180068E40 (sub_180068E40.c)
 *     sub_180083AF0 @ 0x180083AF0 (sub_180083AF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180057650(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  unsigned int *v3; // rcx

  v1 = *(_QWORD *)(a1 + 112);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(unsigned int **)(v1 + 128);
    if ( v3 )
      return *v3;
  }
  return result;
}
