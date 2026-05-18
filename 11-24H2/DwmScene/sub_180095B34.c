/*
 * XREFs of sub_180095B34 @ 0x180095B34
 * Callers:
 *     sub_18002A090 @ 0x18002A090 (sub_18002A090.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18002811C @ 0x18002811C (sub_18002811C.c)
 *     sub_1800282BC @ 0x1800282BC (sub_1800282BC.c)
 *     sub_180095FEC @ 0x180095FEC (sub_180095FEC.c)
 *     sub_180097544 @ 0x180097544 (sub_180097544.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_180095B34(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_18002811C((__int64)a1);
  sub_180095FEC(a1, v12, a3);
  if ( LOBYTE(v12[0]) || (v6 = a1[5]) == 0 )
  {
    sub_1800282BC((__int64)a1);
    v11 = a2[1];
    if ( v11 )
      sub_18001060C(v11);
    return 0;
  }
  else
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1[2] + 8 * ((a1[4] >> 1) & (a1[3] - 1LL))) + 8 * (a1[4] & 1LL));
    a1[5] = v6 - 1;
    if ( v6 == 1 )
      a1[4] = 0LL;
    else
      ++a1[4];
    a1[v7 + 18] = a3;
    v8 = a1[2 * v7 + 8];
    v12[0] = *a2;
    v12[1] = a2[1];
    *a2 = 0LL;
    a2[1] = 0LL;
    sub_180097544(v8, a3, v12);
    sub_1800282BC((__int64)a1);
    v9 = a2[1];
    if ( v9 )
      sub_18001060C(v9);
    return 1;
  }
}
