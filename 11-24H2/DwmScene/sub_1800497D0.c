/*
 * XREFs of sub_1800497D0 @ 0x1800497D0
 * Callers:
 *     sub_180049390 @ 0x180049390 (sub_180049390.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180013E0C @ 0x180013E0C (sub_180013E0C.c)
 *     sub_180027ADC @ 0x180027ADC (sub_180027ADC.c)
 *     sub_180032C28 @ 0x180032C28 (sub_180032C28.c)
 *     sub_180040888 @ 0x180040888 (sub_180040888.c)
 *     sub_1800473C4 @ 0x1800473C4 (sub_1800473C4.c)
 *     sub_180078578 @ 0x180078578 (sub_180078578.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall sub_1800497D0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
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
    v7 = sub_180040888(a1, &v11);
    result = (__int64)sub_180013E0C(*v7, &v9);
    if ( v12 )
      result = sub_18001060C(v12);
    v8 = v9;
    if ( v9 )
    {
      sub_180027ADC((__int64)v13, 12LL, 8LL, sub_180010340);
      sub_1800473C4((unsigned __int64 *)(v8 + 88), (__int64)v13);
      sub_180078578(a1);
      sub_180032C28();
    }
    if ( v10 )
      return sub_18001060C(v10);
  }
  return result;
}
