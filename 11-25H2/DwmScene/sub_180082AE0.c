/*
 * XREFs of sub_180082AE0 @ 0x180082AE0
 * Callers:
 *     sub_180082B48 @ 0x180082B48 (sub_180082B48.c)
 * Callees:
 *     sub_1800827A0 @ 0x1800827A0 (sub_1800827A0.c)
 */

__int64 __fastcall sub_180082AE0(__int64 a1, __int64 a2, __int64 a3)
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
      sub_1800827A0((__int64)&v5);
    while ( v3 != 1 );
    return v6;
  }
  return a1;
}
