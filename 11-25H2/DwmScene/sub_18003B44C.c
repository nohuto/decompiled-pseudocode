/*
 * XREFs of sub_18003B44C @ 0x18003B44C
 * Callers:
 *     sub_180012870 @ 0x180012870 (sub_180012870.c)
 *     sub_180014C20 @ 0x180014C20 (sub_180014C20.c)
 *     sub_1800187C0 @ 0x1800187C0 (sub_1800187C0.c)
 *     GsDriverEntry @ 0x18003AED0 (GsDriverEntry.c)
 * Callees:
 *     sub_18003A7B4 @ 0x18003A7B4 (sub_18003A7B4.c)
 *     sub_18003B3B8 @ 0x18003B3B8 (sub_18003B3B8.c)
 *     sub_18003BD1C @ 0x18003BD1C (sub_18003BD1C.c)
 */

char __fastcall sub_18003B44C(__int64 a1, __int32 *a2)
{
  __int128 v4; // xmm2
  __int128 v5; // xmm3
  __int128 v6; // xmm0
  unsigned __int64 v8; // [rsp+20h] [rbp-40h] BYREF
  int v9; // [rsp+28h] [rbp-38h]
  unsigned __int64 v10; // [rsp+30h] [rbp-30h]
  int v11; // [rsp+38h] [rbp-28h]
  unsigned __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  int v13; // [rsp+48h] [rbp-18h]
  __int128 v14; // [rsp+50h] [rbp-10h] BYREF

  sub_18003BD1C();
  v10 = 0LL;
  v11 = 0;
  v8 = 0LL;
  v9 = 0;
  v14 = xmmword_18018C5D0;
  if ( !sub_18003A7B4(a2, &v8, &v14) )
    return 0;
  v12 = v8;
  v13 = v9;
  v9 = v11;
  v8 = v10;
  sub_18003B3B8(a1, (__int64)&v8, &v14, (__int64)&v12);
  v4 = *((_OWORD *)a2 + 2);
  v5 = *((_OWORD *)a2 + 3);
  v6 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 240) = *((_OWORD *)a2 + 1);
  *(_OWORD *)(a1 + 224) = v6;
  *(_OWORD *)(a1 + 256) = v4;
  *(_OWORD *)(a1 + 272) = v5;
  *(_QWORD *)(a1 + 352) = *(_QWORD *)(a1 + 208);
  return 1;
}
