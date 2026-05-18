/*
 * XREFs of sub_180030758 @ 0x180030758
 * Callers:
 *     sub_1800351F4 @ 0x1800351F4 (sub_1800351F4.c)
 *     sub_180053410 @ 0x180053410 (sub_180053410.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180030758(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm1
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 8) )
  {
    o_abort();
    __debugbreak();
  }
  v2 = *a2;
  result = a1;
  *a2 = 0LL;
  *(_OWORD *)a1 = v2;
  return result;
}
