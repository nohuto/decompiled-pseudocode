/*
 * XREFs of sub_18002FD3C @ 0x18002FD3C
 * Callers:
 *     sub_18002C7A0 @ 0x18002C7A0 (sub_18002C7A0.c)
 * Callees:
 *     sub_18002FF60 @ 0x18002FF60 (sub_18002FF60.c)
 */

__int64 __fastcall sub_18002FD3C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_18002FF60(v2 + 32);
  return sub_18002FB60(a1);
}
