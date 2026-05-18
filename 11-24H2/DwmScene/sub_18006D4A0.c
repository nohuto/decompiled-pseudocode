/*
 * XREFs of sub_18006D4A0 @ 0x18006D4A0
 * Callers:
 *     sub_18002A090 @ 0x18002A090 (sub_18002A090.c)
 * Callees:
 *     sub_180032C28 @ 0x180032C28 (sub_180032C28.c)
 */

__int64 __fastcall sub_18006D4A0(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = a3 & 0x7E;
  if ( (a3 & 1) != 0 || (a3 & 0x7E) != 0 )
    sub_180032C28();
  return result;
}
