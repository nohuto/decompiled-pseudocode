/*
 * XREFs of sub_18007A7FC @ 0x18007A7FC
 * Callers:
 *     sub_180043710 @ 0x180043710 (sub_180043710.c)
 *     sub_180076F14 @ 0x180076F14 (sub_180076F14.c)
 *     sub_18007A544 @ 0x18007A544 (sub_18007A544.c)
 * Callees:
 *     sub_1800790A4 @ 0x1800790A4 (sub_1800790A4.c)
 */

_DWORD *__fastcall sub_18007A7FC(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  _DWORD *result; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx

  result = (_DWORD *)sub_1800790A4(a1, a2);
  v5 = a3 - (_QWORD)result;
  v6 = 16LL;
  do
  {
    *result = *(_DWORD *)((char *)result + v5);
    ++result;
    --v6;
  }
  while ( v6 );
  return result;
}
