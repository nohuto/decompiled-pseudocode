/*
 * XREFs of sub_18002FBDC @ 0x18002FBDC
 * Callers:
 *     sub_18002C640 @ 0x18002C640 (sub_18002C640.c)
 * Callees:
 *     sub_18002FE00 @ 0x18002FE00 (sub_18002FE00.c)
 */

__int64 __fastcall sub_18002FBDC(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_18002FE00(v2 + 32);
  return sub_18002FA00(a1);
}
