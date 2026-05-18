/*
 * XREFs of sub_18007C7FC @ 0x18007C7FC
 * Callers:
 *     sub_180013500 @ 0x180013500 (sub_180013500.c)
 *     sub_18004D1D8 @ 0x18004D1D8 (sub_18004D1D8.c)
 *     sub_180062584 @ 0x180062584 (sub_180062584.c)
 *     sub_180063F0C @ 0x180063F0C (sub_180063F0C.c)
 *     sub_180064DAC @ 0x180064DAC (sub_180064DAC.c)
 *     sub_180065D00 @ 0x180065D00 (sub_180065D00.c)
 *     sub_1800751E0 @ 0x1800751E0 (sub_1800751E0.c)
 *     sub_18008FDA0 @ 0x18008FDA0 (sub_18008FDA0.c)
 *     sub_18008FEF0 @ 0x18008FEF0 (sub_18008FEF0.c)
 * Callees:
 *     sub_180079EB0 @ 0x180079EB0 (sub_180079EB0.c)
 *     sub_18007BFC4 @ 0x18007BFC4 (sub_18007BFC4.c)
 */

_QWORD *__fastcall sub_18007C7FC(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int16 v5; // ax
  _QWORD *result; // rax
  __int64 v7; // rdx

  v5 = sub_180079EB0(*(_QWORD *)(a1 + 16), a2);
  result = (_QWORD *)sub_18007BFC4(a1, v5, 5);
  v7 = *result - *a3;
  if ( *result == *a3 )
    v7 = result[1] - a3[1];
  if ( v7 )
  {
    *(_OWORD *)result = *(_OWORD *)a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
