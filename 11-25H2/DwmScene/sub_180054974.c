/*
 * XREFs of sub_180054974 @ 0x180054974
 * Callers:
 *     sub_180054718 @ 0x180054718 (sub_180054718.c)
 * Callees:
 *     sub_180054B50 @ 0x180054B50 (sub_180054B50.c)
 */

__int64 __fastcall sub_180054974(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax

  sub_180054B50(a2, *a4);
  result = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  return result;
}
