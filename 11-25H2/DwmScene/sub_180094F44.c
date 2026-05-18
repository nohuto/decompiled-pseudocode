/*
 * XREFs of sub_180094F44 @ 0x180094F44
 * Callers:
 *     sub_180094DCC @ 0x180094DCC (sub_180094DCC.c)
 * Callees:
 *     sub_18002C43C @ 0x18002C43C (sub_18002C43C.c)
 *     sub_180094F88 @ 0x180094F88 (sub_180094F88.c)
 */

__int64 __fastcall sub_180094F44(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 i; // r9
  __int64 v6; // r8

  v4 = a1;
  for ( i = a2; v4 != i; v4 = v6 + 56 )
  {
    sub_180094F88(a1, a3, v4, i);
    a3 += 56LL;
  }
  sub_18002C43C(a3, a3);
  return a3;
}
