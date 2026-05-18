/*
 * XREFs of sub_1800550D0 @ 0x1800550D0
 * Callers:
 *     sub_180054718 @ 0x180054718 (sub_180054718.c)
 * Callees:
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 */

__int64 __fastcall sub_1800550D0(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180011A5C(v2 + 40);
  return sub_180029ADC(a1);
}
