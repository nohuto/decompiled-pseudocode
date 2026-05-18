/*
 * XREFs of sub_180054AD4 @ 0x180054AD4
 * Callers:
 *     sub_180054878 @ 0x180054878 (sub_180054878.c)
 * Callees:
 *     sub_180054CB0 @ 0x180054CB0 (sub_180054CB0.c)
 */

__int64 __fastcall sub_180054AD4(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax

  sub_180054CB0(a2, *a4);
  result = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  return result;
}
