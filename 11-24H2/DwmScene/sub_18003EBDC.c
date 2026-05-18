/*
 * XREFs of sub_18003EBDC @ 0x18003EBDC
 * Callers:
 *     sub_180012A40 @ 0x180012A40 (sub_180012A40.c)
 *     sub_180014E20 @ 0x180014E20 (sub_180014E20.c)
 *     sub_180017C60 @ 0x180017C60 (sub_180017C60.c)
 *     sub_18001B110 @ 0x18001B110 (sub_18001B110.c)
 *     sub_18003DEB4 @ 0x18003DEB4 (sub_18003DEB4.c)
 *     sub_180061060 @ 0x180061060 (sub_180061060.c)
 *     sub_180066E54 @ 0x180066E54 (sub_180066E54.c)
 *     sub_18006BAB4 @ 0x18006BAB4 (sub_18006BAB4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     sub_18001B5A8 @ 0x18001B5A8 (sub_18001B5A8.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_180028890 @ 0x180028890 (sub_180028890.c)
 *     sub_18002C0B4 @ 0x18002C0B4 (sub_18002C0B4.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_18003EA2C @ 0x18003EA2C (sub_18003EA2C.c)
 *     sub_18003ECF8 @ 0x18003ECF8 (sub_18003ECF8.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18003EBDC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  void *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h]
  _BYTE v15[32]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v16[5]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v18[32]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v19[32]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v20[32]; // [rsp+110h] [rbp+10h] BYREF

  v16[4] = a3;
  sub_180028890(a1 + 16);
  v6 = sub_180012444((__int64)v15, a3);
  sub_18003EA2C(a1, &v13, v6);
  if ( !v13 )
  {
    v8 = (void *)sub_18002C0B4((__int64)v18, a3);
    v9 = sub_18001B678((__int64)v19, (__int64)"Scene::GetRootNode() - layer ", v8);
    v10 = sub_18001B5A8((__int64)v20, v9, (__int64)" not found");
    v11 = std::string::string(
            v16,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v11, v12, v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_18003ECF8(v13, a2);
  if ( v14 )
    sub_18001060C(v14);
  sub_180013228(a3);
  return a2;
}
