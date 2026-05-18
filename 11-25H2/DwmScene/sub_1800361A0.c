/*
 * XREFs of sub_1800361A0 @ 0x1800361A0
 * Callers:
 *     sub_18002C55C @ 0x18002C55C (sub_18002C55C.c)
 *     sub_18002DF98 @ 0x18002DF98 (sub_18002DF98.c)
 * Callees:
 *     sub_18001CC04 @ 0x18001CC04 (sub_18001CC04.c)
 */

__int64 __fastcall sub_1800361A0(__int64 a1)
{
  __int64 result; // rax

  result = 0x38E38E38E38E38ELL;
  if ( *(_QWORD *)(a1 + 8) == 0x38E38E38E38E38ELL )
    sub_18001CC04();
  return result;
}
