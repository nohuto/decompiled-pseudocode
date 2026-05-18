/*
 * XREFs of sub_180078610 @ 0x180078610
 * Callers:
 *     sub_1800791C4 @ 0x1800791C4 (sub_1800791C4.c)
 *     sub_18007965C @ 0x18007965C (sub_18007965C.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_180078528 @ 0x180078528 (sub_180078528.c)
 *     sub_180078580 @ 0x180078580 (sub_180078580.c)
 *     sub_180078A84 @ 0x180078A84 (sub_180078A84.c)
 *     sub_180078B58 @ 0x180078B58 (sub_180078B58.c)
 */

__int64 __fastcall sub_180078610(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  unsigned __int64 v6; // rdx
  __int64 v8; // rbp
  __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 result; // rax
  unsigned __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2 - *a1;
  v6 = 0x492492492492492LL;
  v8 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 3);
  v9 = v4 / 56;
  if ( v8 == 0x492492492492492LL )
    std::_Xlength_error("vector too long");
  v10 = v8 + 1;
  v11 = 0x6DB6DB6DB6DB6DB7LL * ((a1[2] - *a1) >> 3);
  v12 = v11 >> 1;
  if ( v11 <= 0x492492492492492LL - (v11 >> 1) )
  {
    v6 = v12 + v11;
    if ( v12 + v11 < v10 )
      v6 = v10;
  }
  v20 = v6;
  v13 = sub_180078528(v11, &v20);
  v14 = v13 + 56 * v9;
  sub_180078B58(v15, v14, a3);
  v16 = a1[1];
  v17 = v13;
  v18 = *a1;
  if ( a2 != v16 )
  {
    sub_180078A84(v18, a2, v13);
    v16 = a1[1];
    v17 = v14 + 56;
    v18 = a2;
  }
  sub_180078A84(v18, v16, v17);
  if ( *a1 )
  {
    sub_180078580(*a1, a1[1]);
    sub_180010134((void *)*a1, 8 * ((a1[2] - *a1) >> 3));
  }
  result = v14;
  *a1 = v13;
  a1[1] = v13 + 56 * v10;
  a1[2] = v13 + 56 * v20;
  return result;
}
