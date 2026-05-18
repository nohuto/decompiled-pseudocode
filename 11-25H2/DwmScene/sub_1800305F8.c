/*
 * XREFs of sub_1800305F8 @ 0x1800305F8
 * Callers:
 *     sub_180035094 @ 0x180035094 (sub_180035094.c)
 *     sub_1800532B0 @ 0x1800532B0 (sub_1800532B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800305F8(__int64 a1, __int128 *a2)
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
