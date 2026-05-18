/*
 * XREFs of sub_1800733D0 @ 0x1800733D0
 * Callers:
 *     sub_1800731A4 @ 0x1800731A4 (sub_1800731A4.c)
 * Callees:
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 */

__int64 __fastcall sub_1800733D0(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180011A5C(v2 + 32);
  return sub_18002FA00(a1);
}
