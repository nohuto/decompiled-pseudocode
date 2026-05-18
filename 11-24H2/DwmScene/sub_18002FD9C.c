/*
 * XREFs of sub_18002FD9C @ 0x18002FD9C
 * Callers:
 *     sub_18002E2D8 @ 0x18002E2D8 (sub_18002E2D8.c)
 * Callees:
 *     sub_18002FFBC @ 0x18002FFBC (sub_18002FFBC.c)
 */

__int64 __fastcall sub_18002FD9C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_18002FFBC(v2 + 32);
  return sub_18001C308(a1);
}
