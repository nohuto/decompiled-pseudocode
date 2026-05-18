/*
 * XREFs of sub_18003DD54 @ 0x18003DD54
 * Callers:
 *     sub_180030D10 @ 0x180030D10 (sub_180030D10.c)
 *     sub_18005F730 @ 0x18005F730 (sub_18005F730.c)
 *     sub_1800604D0 @ 0x1800604D0 (sub_1800604D0.c)
 *     sub_18006B954 @ 0x18006B954 (sub_18006B954.c)
 *     sub_18006CD90 @ 0x18006CD90 (sub_18006CD90.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     sub_18003DBF8 @ 0x18003DBF8 (sub_18003DBF8.c)
 *     sub_18003EA7C @ 0x18003EA7C (sub_18003EA7C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18003DD54(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v11; // [rsp+28h] [rbp-80h] BYREF
  __int64 v12; // [rsp+38h] [rbp-70h] BYREF
  __int64 v13; // [rsp+40h] [rbp-68h]
  _BYTE v14[32]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v15; // [rsp+68h] [rbp-40h]

  v15 = a4;
  v8 = sub_180012344((__int64)v14, a4);
  sub_18003EA7C(a1, &v12, v8);
  v9 = unknown_libname_81(&v11, &v12);
  sub_18003DBF8(a1, a2, a3, v9);
  if ( v13 )
    sub_18001050C(v13);
  sub_180013128(a4);
  return a2;
}
