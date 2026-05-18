/*
 * XREFs of sub_1800261E8 @ 0x1800261E8
 * Callers:
 *     sub_1800275D0 @ 0x1800275D0 (sub_1800275D0.c)
 *     sub_18006D058 @ 0x18006D058 (sub_18006D058.c)
 *     sub_180085C64 @ 0x180085C64 (sub_180085C64.c)
 *     sub_1800BC210 @ 0x1800BC210 (sub_1800BC210.c)
 * Callees:
 *     sub_180010A84 @ 0x180010A84 (sub_180010A84.c)
 */

_QWORD *__fastcall sub_1800261E8(_QWORD *a1, _BYTE *a2, _BYTE *a3)
{
  *(_OWORD *)a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  if ( a2 == a3 )
  {
    a1[3] = 15LL;
    *(_BYTE *)a1 = 0;
  }
  else
  {
    sub_180010A84(a1, a2, a3 - a2);
  }
  return a1;
}
