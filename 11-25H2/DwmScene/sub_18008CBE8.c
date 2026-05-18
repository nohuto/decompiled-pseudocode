/*
 * XREFs of sub_18008CBE8 @ 0x18008CBE8
 * Callers:
 *     sub_18006A4AC @ 0x18006A4AC (sub_18006A4AC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800132F4 @ 0x1800132F4 (sub_1800132F4.c)
 *     sub_180023D04 @ 0x180023D04 (sub_180023D04.c)
 *     sub_180054B7C @ 0x180054B7C (sub_180054B7C.c)
 *     sub_180055748 @ 0x180055748 (sub_180055748.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_18008CBE8(__int64 *a1, _QWORD *a2)
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
  sub_180054B7C((__int64)a1, (__int64)v3);
  *a1 = (__int64)&Spectre::Engine::ImageProcessingCamera::`vftable';
  v4 = sub_180023D04(&v9);
  v6 = 0LL;
  v6 = *(_OWORD *)v4;
  *v4 = 0LL;
  v4[1] = 0LL;
  sub_180055748(a1, 0LL, 0LL, &v6, 0LL);
  if ( v10 )
    sub_18001050C(v10);
  std::string::string(&v9, "ImageProcessingCamera");
  sub_1800132F4((__int64)(a1 + 3), (__int64)&v9);
  sub_180011A5C((__int64)&v9);
  return a1;
}
