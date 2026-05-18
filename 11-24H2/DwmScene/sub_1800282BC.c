/*
 * XREFs of sub_1800282BC @ 0x1800282BC
 * Callers:
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_180017658 @ 0x180017658 (sub_180017658.c)
 *     sub_180024694 @ 0x180024694 (sub_180024694.c)
 *     sub_1800252D0 @ 0x1800252D0 (sub_1800252D0.c)
 *     sub_180025B00 @ 0x180025B00 (sub_180025B00.c)
 *     sub_1800261B0 @ 0x1800261B0 (sub_1800261B0.c)
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
 *     sub_1800284B0 @ 0x1800284B0 (sub_1800284B0.c)
 *     sub_1800285D8 @ 0x1800285D8 (sub_1800285D8.c)
 *     sub_180028774 @ 0x180028774 (sub_180028774.c)
 *     sub_1800289EC @ 0x1800289EC (sub_1800289EC.c)
 *     sub_180028A24 @ 0x180028A24 (sub_180028A24.c)
 *     sub_1800D2878 @ 0x1800D2878 (sub_1800D2878.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800282BC(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 v5; // r8
  _QWORD *v6; // rax
  _BYTE v8[8]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v9[8]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v10[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v11[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp-48h] BYREF

  if ( !(unsigned __int8)sub_180028A24() )
  {
    std::string::string(v11, "Mutex::doUnlock() -- detected attempt to unlock a mutex that is not owned by this thread");
    v2 = std::string::string(
           v10,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\concurrency.cpp");
    sub_1800284B0(pExceptionObject, v2, v3, v11);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  v4 = sub_180028774();
  LOBYTE(v5) = 1;
  v6 = (_QWORD *)sub_1800285D8(a1, v8, v5);
  sub_1800289EC(v4, v9, *v6);
  return sub_1800D2878(a1);
}
