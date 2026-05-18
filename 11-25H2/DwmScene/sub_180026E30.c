/*
 * XREFs of sub_180026E30 @ 0x180026E30
 * Callers:
 *     sub_180026B60 @ 0x180026B60 (sub_180026B60.c)
 *     sub_180083990 @ 0x180083990 (sub_180083990.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180026E30(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 136);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 128);
    if ( v3 )
      return *(unsigned int *)(v3 + 16);
  }
  return result;
}
