/*
 * XREFs of sub_180078770 @ 0x180078770
 * Callers:
 *     sub_180079324 @ 0x180079324 (sub_180079324.c)
 *     sub_1800797BC @ 0x1800797BC (sub_1800797BC.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_180078688 @ 0x180078688 (sub_180078688.c)
 *     sub_1800786E0 @ 0x1800786E0 (sub_1800786E0.c)
 *     sub_180078BE4 @ 0x180078BE4 (sub_180078BE4.c)
 *     sub_180078CB8 @ 0x180078CB8 (sub_180078CB8.c)
 */

__int64 __fastcall sub_180078770(__int64 *a1, __int64 a2, __int64 a3)
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
  v13 = sub_180078688(v11, &v20);
  v14 = v13 + 56 * v9;
  sub_180078CB8(v15, v14, a3);
  v16 = a1[1];
  v17 = v13;
  v18 = *a1;
  if ( a2 != v16 )
  {
    sub_180078BE4(v18, a2, v13);
    v16 = a1[1];
    v17 = v14 + 56;
    v18 = a2;
  }
  sub_180078BE4(v18, v16, v17);
  if ( *a1 )
  {
    sub_1800786E0(*a1, a1[1]);
    sub_180010234((void *)*a1, 8 * ((a1[2] - *a1) >> 3));
  }
  result = v14;
  *a1 = v13;
  a1[1] = v13 + 56 * v10;
  a1[2] = v13 + 56 * v20;
  return result;
}
