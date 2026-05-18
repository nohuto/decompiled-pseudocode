/*
 * XREFs of sub_180095E68 @ 0x180095E68
 * Callers:
 *     sub_18002A310 @ 0x18002A310 (sub_18002A310.c)
 * Callees:
 *     sub_18002811C @ 0x18002811C (sub_18002811C.c)
 *     sub_1800282BC @ 0x1800282BC (sub_1800282BC.c)
 *     sub_180095708 @ 0x180095708 (sub_180095708.c)
 *     sub_180095FEC @ 0x180095FEC (sub_180095FEC.c)
 *     sub_18009791C @ 0x18009791C (sub_18009791C.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180095E68(__int64 a1, __int64 a2)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h]

  v8 = a1;
  sub_18002811C(a1);
  sub_180095FEC(a1, v5, a2);
  if ( v5[0] )
  {
    v7 = v6;
    sub_180095708((__int64 *)(a1 + 48), (__int64)v5, &v7);
    sub_18009791C(*(_QWORD *)(a1 + 16 * v7 + 64));
    sub_1800282BC(a1);
    return 1;
  }
  else
  {
    sub_1800282BC(a1);
    return 0;
  }
}
