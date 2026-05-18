/*
 * XREFs of sub_180073530 @ 0x180073530
 * Callers:
 *     sub_180073304 @ 0x180073304 (sub_180073304.c)
 * Callees:
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 */

__int64 __fastcall sub_180073530(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180011B5C(v2 + 32);
  return sub_18002FB60(a1);
}
