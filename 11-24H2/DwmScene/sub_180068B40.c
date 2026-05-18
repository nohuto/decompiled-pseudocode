/*
 * XREFs of sub_180068B40 @ 0x180068B40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180068AC8 @ 0x180068AC8 (sub_180068AC8.c)
 */

_QWORD *__fastcall sub_180068B40(_QWORD *lpMem, char a2)
{
  sub_180068AC8(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
