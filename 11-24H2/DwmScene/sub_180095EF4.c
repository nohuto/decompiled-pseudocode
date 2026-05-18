/*
 * XREFs of sub_180095EF4 @ 0x180095EF4
 * Callers:
 *     sub_18002A470 @ 0x18002A470 (sub_18002A470.c)
 * Callees:
 *     sub_18000B270 @ 0x18000B270 (sub_18000B270.c)
 *     sub_18002811C @ 0x18002811C (sub_18002811C.c)
 *     sub_1800282BC @ 0x1800282BC (sub_1800282BC.c)
 *     sub_180095FEC @ 0x180095FEC (sub_180095FEC.c)
 *     sub_180097BD0 @ 0x180097BD0 (sub_180097BD0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180095EF4(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  _BYTE v10[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  sub_18002811C(a1);
  sub_180095FEC(a1, v10, a2);
  if ( !v10[0] )
  {
    if ( a2 < sub_18000B270((const __m128i *)(a1 + 144), (const __m128i *)(a1 + 184), 0)->m128i_i64[0] )
    {
      sub_1800282BC(a1);
      return 2LL;
    }
    goto LABEL_12;
  }
  v6 = sub_180097BD0(*(_QWORD *)(a1 + 16 * v11 + 64), a3);
  if ( !v6 )
  {
LABEL_12:
    sub_1800282BC(a1);
    return 3LL;
  }
  v7 = v6 - 1;
  if ( v7 && (v8 = v7 - 1) != 0 )
  {
    if ( v8 == 1 )
    {
      sub_1800282BC(a1);
      return 0LL;
    }
    else
    {
      sub_1800282BC(a1);
      return 4LL;
    }
  }
  else
  {
    sub_1800282BC(a1);
    return 1LL;
  }
}
