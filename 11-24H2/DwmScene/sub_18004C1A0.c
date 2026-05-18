/*
 * XREFs of sub_18004C1A0 @ 0x18004C1A0
 * Callers:
 *     sub_180032DD4 @ 0x180032DD4 (sub_180032DD4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_18001B5A8 @ 0x18001B5A8 (sub_18001B5A8.c)
 *     sub_18001B6DC @ 0x18001B6DC (sub_18001B6DC.c)
 *     sub_18001D5E0 @ 0x18001D5E0 (sub_18001D5E0.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_18004A558 @ 0x18004A558 (sub_18004A558.c)
 *     sub_18004B1D4 @ 0x18004B1D4 (sub_18004B1D4.c)
 *     sub_18004B8E4 @ 0x18004B8E4 (sub_18004B8E4.c)
 *     sub_18004D670 @ 0x18004D670 (sub_18004D670.c)
 *     sub_18004D690 @ 0x18004D690 (sub_18004D690.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18004C1A0(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 *v9; // rsi
  __int64 *v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // r8
  _QWORD *v16; // rax
  _QWORD v18[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19[4]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v20[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD pExceptionObject[2]; // [rsp+90h] [rbp-70h] BYREF
  int v22; // [rsp+A0h] [rbp-60h]
  __int128 v23; // [rsp+A8h] [rbp-58h]
  _QWORD v24[7]; // [rsp+C8h] [rbp-38h] BYREF

  v18[3] = a2;
  v18[2] = a4;
  if ( !*(_QWORD *)(a2 + 16) )
  {
    std::string::string(
      v20,
      "ShaderManager::AddShaderProgram() -- shader program cannot be registered with an empty name");
    v7 = std::string::string(
           v19,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v7, v8, (__int64)v20, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v9 = (__int64 *)(a1 + 18576);
  if ( *(_QWORD *)sub_18004D690(a1 + 18576, v18, a2) != *(_QWORD *)(a1 + 18576) )
  {
    v10 = sub_18001B6DC(v19, (__int64)"ShaderManager::AddShaderProgram() -- shader program for name '", a2);
    v11 = sub_18001B5A8((__int64)pExceptionObject, (__int64)v10, (__int64)"' is already added");
    v12 = std::string::string(
            v20,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_180038BB8(v24, (__int64)v12, v13, v11, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v24;
  }
  if ( (unsigned __int8)sub_18004D670(a4) )
  {
    std::string::string(
      v19,
      "ShaderManager::AddShaderProgram() -- shader program cannot be registered with zero-length program buffer");
    v14 = std::string::string(
            v20,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_180038BB8(v24, (__int64)v14, v15, (__int64)v19, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v24;
  }
  v16 = sub_18004B1D4(v18, a4);
  pExceptionObject[0] = *v16;
  pExceptionObject[1] = v16[1];
  *v16 = 0LL;
  v16[1] = 0LL;
  v22 = a3;
  v23 = 0LL;
  sub_18004A558(v9, (__int64)v19, a2, (__int64)pExceptionObject);
  sub_18004B8E4((__int64)pExceptionObject);
  sub_180011B5C(a2);
  return sub_18001D5E0((__int64)a4);
}
