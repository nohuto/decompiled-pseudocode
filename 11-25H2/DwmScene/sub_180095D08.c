/*
 * XREFs of sub_180095D08 @ 0x180095D08
 * Callers:
 *     sub_18002A1B0 @ 0x18002A1B0 (sub_18002A1B0.c)
 * Callees:
 *     sub_180027FBC @ 0x180027FBC (sub_180027FBC.c)
 *     sub_18002815C @ 0x18002815C (sub_18002815C.c)
 *     sub_1800955A8 @ 0x1800955A8 (sub_1800955A8.c)
 *     sub_180095E8C @ 0x180095E8C (sub_180095E8C.c)
 *     sub_1800977BC @ 0x1800977BC (sub_1800977BC.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180095D08(__int64 a1, __int64 a2)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h]

  v8 = a1;
  sub_180027FBC(a1);
  sub_180095E8C(a1, v5, a2);
  if ( v5[0] )
  {
    v7 = v6;
    sub_1800955A8((__int64 *)(a1 + 48), (__int64)v5, &v7);
    sub_1800977BC(*(_QWORD *)(a1 + 16 * v7 + 64));
    sub_18002815C(a1);
    return 1;
  }
  else
  {
    sub_18002815C(a1);
    return 0;
  }
}
