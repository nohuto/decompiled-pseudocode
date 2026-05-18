/*
 * XREFs of sub_180039C00 @ 0x180039C00
 * Callers:
 *     sub_180039C3C @ 0x180039C3C (sub_180039C3C.c)
 *     sub_18003AB54 @ 0x18003AB54 (sub_18003AB54.c)
 * Callees:
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 */

_QWORD *__fastcall sub_180039C00(__int64 a1, _QWORD *a2)
{
  sub_18003BCDC(a1);
  sub_180011B04(a1 + 128, a2);
  return a2;
}
