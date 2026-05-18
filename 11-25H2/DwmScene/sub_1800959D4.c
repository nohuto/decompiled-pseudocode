/*
 * XREFs of sub_1800959D4 @ 0x1800959D4
 * Callers:
 *     sub_180029F30 @ 0x180029F30 (sub_180029F30.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180027FBC @ 0x180027FBC (sub_180027FBC.c)
 *     sub_18002815C @ 0x18002815C (sub_18002815C.c)
 *     sub_180095E8C @ 0x180095E8C (sub_180095E8C.c)
 *     sub_1800973E4 @ 0x1800973E4 (sub_1800973E4.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_1800959D4(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_180027FBC((__int64)a1);
  sub_180095E8C(a1, v12, a3);
  if ( LOBYTE(v12[0]) || (v6 = a1[5]) == 0 )
  {
    sub_18002815C((__int64)a1);
    v11 = a2[1];
    if ( v11 )
      sub_18001050C(v11);
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
    sub_1800973E4(v8, a3, v12);
    sub_18002815C((__int64)a1);
    v9 = a2[1];
    if ( v9 )
      sub_18001050C(v9);
    return 1;
  }
}
