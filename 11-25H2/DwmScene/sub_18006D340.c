/*
 * XREFs of sub_18006D340 @ 0x18006D340
 * Callers:
 *     sub_180029F30 @ 0x180029F30 (sub_180029F30.c)
 * Callees:
 *     sub_180032AC8 @ 0x180032AC8 (sub_180032AC8.c)
 */

__int64 __fastcall sub_18006D340(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = a3 & 0x7E;
  if ( (a3 & 1) != 0 || (a3 & 0x7E) != 0 )
    sub_180032AC8();
  return result;
}
