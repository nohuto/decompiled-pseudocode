/*
 * XREFs of sub_180041A88 @ 0x180041A88
 * Callers:
 *     sub_18001623C @ 0x18001623C (sub_18001623C.c)
 *     sub_180049AD0 @ 0x180049AD0 (sub_180049AD0.c)
 *     sub_180061060 @ 0x180061060 (sub_180061060.c)
 *     sub_1800626E4 @ 0x1800626E4 (sub_1800626E4.c)
 *     sub_18006BAB4 @ 0x18006BAB4 (sub_18006BAB4.c)
 *     sub_18008B3F0 @ 0x18008B3F0 (sub_18008B3F0.c)
 *     sub_1800908D0 @ 0x1800908D0 (sub_1800908D0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18002563C @ 0x18002563C (sub_18002563C.c)
 *     sub_180041B04 @ 0x180041B04 (sub_180041B04.c)
 *     sub_18004C624 @ 0x18004C624 (sub_18004C624.c)
 *     sub_18005BDF4 @ 0x18005BDF4 (sub_18005BDF4.c)
 */

__int64 __fastcall sub_180041A88(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  _QWORD *v6; // rax
  __int64 v7; // r9
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  _BYTE v12[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h]

  result = sub_18002563C(a1, &v10);
  if ( v10 )
  {
    v6 = (_QWORD *)sub_18005BDF4(v10, v12);
    v8 = sub_18004C624(*v6, v7);
    LOBYTE(v9) = a3;
    result = sub_180041B04(a1, v8, v9);
    if ( v13 )
      result = sub_18001060C(v13);
  }
  if ( v11 )
    return sub_18001060C(v11);
  return result;
}
