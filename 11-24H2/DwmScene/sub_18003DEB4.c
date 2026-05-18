/*
 * XREFs of sub_18003DEB4 @ 0x18003DEB4
 * Callers:
 *     sub_180030E70 @ 0x180030E70 (sub_180030E70.c)
 *     sub_18005F890 @ 0x18005F890 (sub_18005F890.c)
 *     sub_180060630 @ 0x180060630 (sub_180060630.c)
 *     sub_18006BAB4 @ 0x18006BAB4 (sub_18006BAB4.c)
 *     sub_18006CEF0 @ 0x18006CEF0 (sub_18006CEF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     sub_18003DD58 @ 0x18003DD58 (sub_18003DD58.c)
 *     sub_18003EBDC @ 0x18003EBDC (sub_18003EBDC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18003DEB4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v11; // [rsp+28h] [rbp-80h] BYREF
  __int64 v12; // [rsp+38h] [rbp-70h] BYREF
  __int64 v13; // [rsp+40h] [rbp-68h]
  _BYTE v14[32]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v15; // [rsp+68h] [rbp-40h]

  v15 = a4;
  v8 = sub_180012444((__int64)v14, a4);
  sub_18003EBDC(a1, &v12, v8);
  v9 = unknown_libname_81(&v11, &v12);
  sub_18003DD58(a1, a2, a3, v9);
  if ( v13 )
    sub_18001060C(v13);
  sub_180013228(a4);
  return a2;
}
