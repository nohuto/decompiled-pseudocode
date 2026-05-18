/*
 * XREFs of sub_18005AD0C @ 0x18005AD0C
 * Callers:
 *     sub_18005A1D0 @ 0x18005A1D0 (sub_18005A1D0.c)
 * Callees:
 *     sub_180030C00 @ 0x180030C00 (sub_180030C00.c)
 */

__int64 __fastcall sub_18005AD0C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180030C00(v2 + 16);
  return sub_18002FB3C(a1);
}
