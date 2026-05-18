/*
 * XREFs of sub_18002FC3C @ 0x18002FC3C
 * Callers:
 *     sub_18002E178 @ 0x18002E178 (sub_18002E178.c)
 * Callees:
 *     sub_18002FE5C @ 0x18002FE5C (sub_18002FE5C.c)
 */

__int64 __fastcall sub_18002FC3C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_18002FE5C(v2 + 32);
  return sub_18001C1A8(a1);
}
