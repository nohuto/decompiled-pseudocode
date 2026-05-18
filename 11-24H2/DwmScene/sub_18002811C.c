/*
 * XREFs of sub_18002811C @ 0x18002811C
 * Callers:
 *     sub_1800252D0 @ 0x1800252D0 (sub_1800252D0.c)
 *     sub_180025B00 @ 0x180025B00 (sub_180025B00.c)
 *     sub_18002611C @ 0x18002611C (sub_18002611C.c)
 *     sub_18002845C @ 0x18002845C (sub_18002845C.c)
 *     sub_180030FA4 @ 0x180030FA4 (sub_180030FA4.c)
 *     sub_1800951E4 @ 0x1800951E4 (sub_1800951E4.c)
 *     sub_180095280 @ 0x180095280 (sub_180095280.c)
 *     sub_180095B34 @ 0x180095B34 (sub_180095B34.c)
 *     sub_180095C3C @ 0x180095C3C (sub_180095C3C.c)
 *     sub_180095DB0 @ 0x180095DB0 (sub_180095DB0.c)
 *     sub_180095E68 @ 0x180095E68 (sub_180095E68.c)
 *     sub_180095EF4 @ 0x180095EF4 (sub_180095EF4.c)
 *     sub_180096038 @ 0x180096038 (sub_180096038.c)
 *     sub_1800960D0 @ 0x1800960D0 (sub_1800960D0.c)
 *     sub_180096188 @ 0x180096188 (sub_180096188.c)
 *     sub_180096260 @ 0x180096260 (sub_180096260.c)
 *     sub_18009723C @ 0x18009723C (sub_18009723C.c)
 *     sub_180097A40 @ 0x180097A40 (sub_180097A40.c)
 *     sub_180098374 @ 0x180098374 (sub_180098374.c)
 *     sub_180098454 @ 0x180098454 (sub_180098454.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180027FB0 @ 0x180027FB0 (sub_180027FB0.c)
 *     sub_180027FD8 @ 0x180027FD8 (sub_180027FD8.c)
 *     sub_1800284B0 @ 0x1800284B0 (sub_1800284B0.c)
 *     sub_180028774 @ 0x180028774 (sub_180028774.c)
 *     sub_180028A24 @ 0x180028A24 (sub_180028A24.c)
 *     sub_1800D2798 @ 0x1800D2798 (sub_1800D2798.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_18002811C(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rax
  char *v5; // rdx
  char v7[8]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v8; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v9[4]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v10[4]; // [rsp+60h] [rbp-9h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp+17h] BYREF

  v7[0] = 1;
  if ( (unsigned __int8)sub_180028A24() )
  {
    std::string::string(
      v10,
      "Mutex::doLock() -- detected recursive lock attempt on non-recursive mutex -- throwing exception to avoid deadlock");
    v2 = std::string::string(
           v9,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\concurrency.cpp");
    sub_1800284B0(pExceptionObject, v2, v3, v10);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  sub_1800D2798(a1);
  v4 = sub_180028774();
  v8 = a1;
  v5 = *(char **)(v4 + 8);
  if ( v5 == *(char **)(v4 + 16) )
    return sub_180027FD8(v4, v5, (__int64)&v8, (__int64)v7);
  else
    return sub_180027FB0(v4, &v8, v7);
}
