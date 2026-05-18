/*
 * XREFs of sub_180078C6C @ 0x180078C6C
 * Callers:
 *     sub_180078B14 @ 0x180078B14 (sub_180078B14.c)
 *     sub_180079324 @ 0x180079324 (sub_180079324.c)
 *     sub_1800797BC @ 0x1800797BC (sub_1800797BC.c)
 *     sub_180079C38 @ 0x180079C38 (sub_180079C38.c)
 *     sub_18007BC84 @ 0x18007BC84 (sub_18007BC84.c)
 * Callees:
 *     sub_180078750 @ 0x180078750 (sub_180078750.c)
 */

__int64 __fastcall sub_180078C6C(__int64 a1, __int64 a2, __int64 a3)
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
      sub_180078750((__int64)&v5);
    while ( v3 != 1 );
    return v6;
  }
  return a1;
}
