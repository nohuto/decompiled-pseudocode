/*
 * XREFs of sub_1800361C8 @ 0x1800361C8
 * Callers:
 *     sub_18002C640 @ 0x18002C640 (sub_18002C640.c)
 *     sub_1800731A4 @ 0x1800731A4 (sub_1800731A4.c)
 * Callees:
 *     sub_18001CC04 @ 0x18001CC04 (sub_18001CC04.c)
 */

__int64 __fastcall sub_1800361C8(__int64 a1)
{
  __int64 result; // rax

  result = 0x2AAAAAAAAAAAAAALL;
  if ( *(_QWORD *)(a1 + 8) == 0x2AAAAAAAAAAAAAALL )
    sub_18001CC04();
  return result;
}
