/*
 * XREFs of sub_180047BC4 @ 0x180047BC4
 * Callers:
 *     sub_1800D8844 @ 0x1800D8844 (sub_1800D8844.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_1800475E0 @ 0x1800475E0 (sub_1800475E0.c)
 */

__int64 __fastcall sub_180047BC4(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_1800475E0((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010134(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
