/*
 * XREFs of sub_18002FD6C @ 0x18002FD6C
 * Callers:
 *     sub_18002E1E4 @ 0x18002E1E4 (sub_18002E1E4.c)
 * Callees:
 *     sub_18002FF88 @ 0x18002FF88 (sub_18002FF88.c)
 */

__int64 __fastcall sub_18002FD6C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_18002FF88(v2 + 32);
  return sub_180024584(a1);
}
