/*
 * XREFs of sub_18008CD48 @ 0x18008CD48
 * Callers:
 *     sub_18006A60C @ 0x18006A60C (sub_18006A60C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_1800133F4 @ 0x1800133F4 (sub_1800133F4.c)
 *     sub_180023E64 @ 0x180023E64 (sub_180023E64.c)
 *     sub_180054CDC @ 0x180054CDC (sub_180054CDC.c)
 *     sub_1800558A8 @ 0x1800558A8 (sub_1800558A8.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_18008CD48(__int64 *a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int128 v6; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h] BYREF
  __int64 v9; // [rsp+58h] [rbp-28h] BYREF
  __int64 v10; // [rsp+60h] [rbp-20h]

  v7 = a1;
  v3 = unknown_libname_81(&v8, a2);
  sub_180054CDC((__int64)a1, (__int64)v3);
  *a1 = (__int64)&Spectre::Engine::ImageProcessingCamera::`vftable';
  v4 = sub_180023E64(&v9);
  v6 = 0LL;
  v6 = *(_OWORD *)v4;
  *v4 = 0LL;
  v4[1] = 0LL;
  sub_1800558A8(a1, 0LL, 0LL, &v6, 0LL);
  if ( v10 )
    sub_18001060C(v10);
  std::string::string(&v9, "ImageProcessingCamera");
  sub_1800133F4((__int64)(a1 + 3), (__int64)&v9);
  sub_180011B5C((__int64)&v9);
  return a1;
}
