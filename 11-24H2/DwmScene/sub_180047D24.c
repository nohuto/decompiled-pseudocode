/*
 * XREFs of sub_180047D24 @ 0x180047D24
 * Callers:
 *     sub_1800D89A4 @ 0x1800D89A4 (sub_1800D89A4.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_180047740 @ 0x180047740 (sub_180047740.c)
 */

__int64 __fastcall sub_180047D24(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_180047740((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_180010234(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
