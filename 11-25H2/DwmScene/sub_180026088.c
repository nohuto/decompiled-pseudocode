/*
 * XREFs of sub_180026088 @ 0x180026088
 * Callers:
 *     sub_180027470 @ 0x180027470 (sub_180027470.c)
 *     sub_18006CEF8 @ 0x18006CEF8 (sub_18006CEF8.c)
 *     sub_180085B04 @ 0x180085B04 (sub_180085B04.c)
 *     sub_1800BC0B0 @ 0x1800BC0B0 (sub_1800BC0B0.c)
 * Callees:
 *     sub_180010984 @ 0x180010984 (sub_180010984.c)
 */

_QWORD *__fastcall sub_180026088(_QWORD *a1, _BYTE *a2, _BYTE *a3)
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
    sub_180010984(a1, a2, a3 - a2);
  }
  return a1;
}
