/*
 * XREFs of sub_18007A990 @ 0x18007A990
 * Callers:
 *     sub_180043E04 @ 0x180043E04 (sub_180043E04.c)
 *     sub_18007A6A4 @ 0x18007A6A4 (sub_18007A6A4.c)
 * Callees:
 *     sub_180079204 @ 0x180079204 (sub_180079204.c)
 */

_DWORD *__fastcall sub_18007A990(__int64 a1, unsigned __int16 a2, _DWORD *a3)
{
  _DWORD *result; // rax

  result = (_DWORD *)sub_180079204(a1, a2);
  *result = *a3;
  result[1] = a3[1];
  result[2] = a3[2];
  result[3] = a3[3];
  return result;
}
