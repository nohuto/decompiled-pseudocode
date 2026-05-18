/*
 * XREFs of sub_18002FC0C @ 0x18002FC0C
 * Callers:
 *     sub_18002E084 @ 0x18002E084 (sub_18002E084.c)
 * Callees:
 *     sub_18002FE28 @ 0x18002FE28 (sub_18002FE28.c)
 */

__int64 __fastcall sub_18002FC0C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_18002FE28(v2 + 32);
  return sub_180024424(a1);
}
