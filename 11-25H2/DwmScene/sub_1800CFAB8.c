/*
 * XREFs of sub_1800CFAB8 @ 0x1800CFAB8
 * Callers:
 *     sub_1800CDCF0 @ 0x1800CDCF0 (sub_1800CDCF0.c)
 *     sub_1800D14A4 @ 0x1800D14A4 (sub_1800D14A4.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 */

_QWORD *__fastcall sub_1800CFAB8(_QWORD *a1)
{
  _QWORD *v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = (_QWORD *)sub_18001B098(176LL);
  *v2 = v2;
  v2[1] = v2;
  *a1 = v2;
  return a1;
}
