/*
 * XREFs of sub_18003B5AC @ 0x18003B5AC
 * Callers:
 *     sub_180012970 @ 0x180012970 (sub_180012970.c)
 *     sub_180014D20 @ 0x180014D20 (sub_180014D20.c)
 *     sub_180018880 @ 0x180018880 (sub_180018880.c)
 *     GsDriverEntry @ 0x18003B030 (GsDriverEntry.c)
 * Callees:
 *     sub_18003A914 @ 0x18003A914 (sub_18003A914.c)
 *     sub_18003B518 @ 0x18003B518 (sub_18003B518.c)
 *     sub_18003BE7C @ 0x18003BE7C (sub_18003BE7C.c)
 */

char __fastcall sub_18003B5AC(__int64 a1, __int32 *a2)
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

  sub_18003BE7C();
  v10 = 0LL;
  v11 = 0;
  v8 = 0LL;
  v9 = 0;
  v14 = xmmword_18018D5C0;
  if ( !sub_18003A914(a2, &v8, &v14) )
    return 0;
  v12 = v8;
  v13 = v9;
  v9 = v11;
  v8 = v10;
  sub_18003B518(a1, (__int64)&v8, &v14, (__int64)&v12);
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
