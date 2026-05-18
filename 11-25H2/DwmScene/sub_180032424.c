/*
 * XREFs of sub_180032424 @ 0x180032424
 * Callers:
 *     sub_180012940 @ 0x180012940 (sub_180012940.c)
 *     sub_180014D20 @ 0x180014D20 (sub_180014D20.c)
 *     sub_180017BA0 @ 0x180017BA0 (sub_180017BA0.c)
 *     sub_1800321B0 @ 0x1800321B0 (sub_1800321B0.c)
 *     sub_180032290 @ 0x180032290 (sub_180032290.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180032424(__int64 a1, _QWORD *a2)
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
    sub_180068508((unsigned int)pExceptionObject, v6, v7, (unsigned int)v9, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  unknown_libname_81(a2, v3);
  return v4;
}
