/*
 * XREFs of sub_180078B0C @ 0x180078B0C
 * Callers:
 *     sub_1800789B4 @ 0x1800789B4 (sub_1800789B4.c)
 *     sub_1800791C4 @ 0x1800791C4 (sub_1800791C4.c)
 *     sub_18007965C @ 0x18007965C (sub_18007965C.c)
 *     sub_180079AD8 @ 0x180079AD8 (sub_180079AD8.c)
 *     sub_18007BB24 @ 0x18007BB24 (sub_18007BB24.c)
 * Callees:
 *     sub_1800785F0 @ 0x1800785F0 (sub_1800785F0.c)
 */

__int64 __fastcall sub_180078B0C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  v5 = a1;
  v6 = a1;
  v7 = a3;
  if ( a2 )
  {
    do
      sub_1800785F0((__int64)&v5);
    while ( v3 != 1 );
    return v6;
  }
  return a1;
}
