/*
 * XREFs of sub_180096038 @ 0x180096038
 * Callers:
 *     sub_180025AD0 @ 0x180025AD0 (sub_180025AD0.c)
 * Callees:
 *     sub_18002811C @ 0x18002811C (sub_18002811C.c)
 *     sub_1800282BC @ 0x1800282BC (sub_1800282BC.c)
 *     sub_1800403F0 @ 0x1800403F0 (sub_1800403F0.c)
 *     sub_180095FEC @ 0x180095FEC (sub_180095FEC.c)
 *     sub_1800984C8 @ 0x1800984C8 (sub_1800984C8.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180096038(__int64 a1)
{
  char result; // al
  char v3; // si
  __int64 v4; // rbx
  _BYTE v5[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  result = sub_1800403F0(a1 + 184);
  v3 = 0;
  if ( result )
  {
    v4 = *(_QWORD *)(a1 + 192);
    sub_18002811C(a1);
    sub_180095FEC(a1, (__int64)v5, v4);
    if ( v5[0] )
    {
      sub_1800984C8(*(_QWORD *)(a1 + 16 * v6 + 64));
      sub_1800282BC(a1);
      return 1;
    }
    else
    {
      sub_1800282BC(a1);
    }
    return v3;
  }
  return result;
}
