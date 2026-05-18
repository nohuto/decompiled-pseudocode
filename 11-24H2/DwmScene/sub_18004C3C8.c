/*
 * XREFs of sub_18004C3C8 @ 0x18004C3C8
 * Callers:
 *     sub_180075B30 @ 0x180075B30 (sub_180075B30.c)
 *     sub_180076630 @ 0x180076630 (sub_180076630.c)
 *     sub_1800769C0 @ 0x1800769C0 (sub_1800769C0.c)
 *     sub_180077A60 @ 0x180077A60 (sub_180077A60.c)
 *     sub_18008FD70 @ 0x18008FD70 (sub_18008FD70.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18001B5A8 @ 0x18001B5A8 (sub_18001B5A8.c)
 *     sub_18001B6DC @ 0x18001B6DC (sub_18001B6DC.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_18004094C @ 0x18004094C (sub_18004094C.c)
 *     sub_18004A968 @ 0x18004A968 (sub_18004A968.c)
 *     sub_18004B0E8 @ 0x18004B0E8 (sub_18004B0E8.c)
 *     sub_18004D03C @ 0x18004D03C (sub_18004D03C.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall sub_18004C3C8(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h]
  _QWORD *v21; // [rsp+48h] [rbp-B8h]
  _QWORD *v22; // [rsp+50h] [rbp-B0h]
  _QWORD v23[5]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v24[4]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v26[7]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v27[4]; // [rsp+110h] [rbp+10h] BYREF

  v21 = a2;
  v23[4] = a3;
  v22 = a4;
  if ( !*(_QWORD *)(a3 + 16) )
  {
    std::string::string(v24, "ShaderManager::CreateShaderFamily() -- shader family must have a non-empty name");
    v8 = std::string::string(
           v23,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v8, v9, (__int64)v24, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v10 = sub_180017054((__int64)v24, a3);
  if ( (unsigned __int8)sub_18004D03C(a1, v10) )
  {
    v11 = sub_18001B6DC(v27, (__int64)"ShaderManager::CreateShaderFamily() -- shader family with name '", a3);
    v12 = sub_18001B5A8((__int64)pExceptionObject, (__int64)v11, (__int64)"' already exists");
    v13 = std::string::string(
            v23,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_180038BB8(v26, (__int64)v13, v14, v12, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v26;
  }
  v15 = sub_18004094C(a1, &v19);
  sub_18004B0E8(a2, a3, (__int64)v15, a4);
  if ( v20 )
    sub_18001060C(v20);
  v16 = sub_18004A968((__int64 *)(a1 + 18560), (__int64)&v19, a3);
  sub_18001254C((__int64 *)(*(_QWORD *)v16 + 64LL), a2);
  sub_180011B5C(a3);
  v17 = a4[1];
  if ( v17 )
    sub_18001060C(v17);
  return a2;
}
