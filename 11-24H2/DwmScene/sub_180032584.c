/*
 * XREFs of sub_180032584 @ 0x180032584
 * Callers:
 *     sub_180012A40 @ 0x180012A40 (sub_180012A40.c)
 *     sub_180014E20 @ 0x180014E20 (sub_180014E20.c)
 *     sub_180017C60 @ 0x180017C60 (sub_180017C60.c)
 *     sub_180032310 @ 0x180032310 (sub_180032310.c)
 *     sub_1800323F0 @ 0x1800323F0 (sub_1800323F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180032584(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rdx
  __int64 v4; // r8
  unsigned int v6; // eax
  int v7; // r8d
  _QWORD v8[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v9[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp-48h] BYREF

  v3 = *(_QWORD **)(a1 + 704);
  if ( v3 == *(_QWORD **)(a1 + 712) )
  {
    std::string::string(v9, "Engine does not have default scene. Engine is probably not initialized.");
    v6 = (unsigned int)std::string::string(
                         v8,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\engine.cpp");
    sub_180068668((unsigned int)pExceptionObject, v6, v7, (unsigned int)v9, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  unknown_libname_81(a2, v3);
  return v4;
}
