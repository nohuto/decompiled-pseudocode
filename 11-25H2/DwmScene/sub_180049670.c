/*
 * XREFs of sub_180049670 @ 0x180049670
 * Callers:
 *     sub_180049230 @ 0x180049230 (sub_180049230.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180013D0C @ 0x180013D0C (sub_180013D0C.c)
 *     sub_18002797C @ 0x18002797C (sub_18002797C.c)
 *     sub_180032AC8 @ 0x180032AC8 (sub_180032AC8.c)
 *     sub_180040728 @ 0x180040728 (sub_180040728.c)
 *     sub_180047264 @ 0x180047264 (sub_180047264.c)
 *     sub_180078418 @ 0x180078418 (sub_180078418.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall sub_180049670(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  int v6; // ecx
  __int64 *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // [rsp+20h] [rbp-98h] BYREF
  __int64 v10; // [rsp+28h] [rbp-90h]
  __int64 v11; // [rsp+30h] [rbp-88h] BYREF
  __int64 v12; // [rsp+38h] [rbp-80h]
  _BYTE v13[96]; // [rsp+40h] [rbp-78h] BYREF

  result = *a4;
  v6 = *(_DWORD *)(*a4 + 440);
  if ( (v6 & 0x10000) != 0 && (v6 & 0x800000) != 0 )
  {
    v7 = sub_180040728(a1, &v11);
    result = (__int64)sub_180013D0C(*v7, &v9);
    if ( v12 )
      result = sub_18001050C(v12);
    v8 = v9;
    if ( v9 )
    {
      sub_18002797C((__int64)v13, 12LL, 8LL, sub_180010240);
      sub_180047264((unsigned __int64 *)(v8 + 88), (__int64)v13);
      sub_180078418(a1);
      sub_180032AC8();
    }
    if ( v10 )
      return sub_18001050C(v10);
  }
  return result;
}
