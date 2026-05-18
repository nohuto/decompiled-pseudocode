/*
 * XREFs of sub_18007A830 @ 0x18007A830
 * Callers:
 *     sub_180043CA4 @ 0x180043CA4 (sub_180043CA4.c)
 *     sub_18007A544 @ 0x18007A544 (sub_18007A544.c)
 * Callees:
 *     sub_1800790A4 @ 0x1800790A4 (sub_1800790A4.c)
 */

_DWORD *__fastcall sub_18007A830(__int64 a1, unsigned __int16 a2, _DWORD *a3)
{
  _DWORD *result; // rax

  result = (_DWORD *)sub_1800790A4(a1, a2);
  *result = *a3;
  result[1] = a3[1];
  result[2] = a3[2];
  result[3] = a3[3];
  return result;
}
