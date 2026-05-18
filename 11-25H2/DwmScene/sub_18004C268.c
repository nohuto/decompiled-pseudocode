/*
 * XREFs of sub_18004C268 @ 0x18004C268
 * Callers:
 *     sub_1800759D0 @ 0x1800759D0 (sub_1800759D0.c)
 *     sub_1800764D0 @ 0x1800764D0 (sub_1800764D0.c)
 *     sub_180076860 @ 0x180076860 (sub_180076860.c)
 *     sub_180077900 @ 0x180077900 (sub_180077900.c)
 *     sub_18008FC10 @ 0x18008FC10 (sub_18008FC10.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18001B448 @ 0x18001B448 (sub_18001B448.c)
 *     sub_18001B57C @ 0x18001B57C (sub_18001B57C.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_1800407EC @ 0x1800407EC (sub_1800407EC.c)
 *     sub_18004A808 @ 0x18004A808 (sub_18004A808.c)
 *     sub_18004AF88 @ 0x18004AF88 (sub_18004AF88.c)
 *     sub_18004CEDC @ 0x18004CEDC (sub_18004CEDC.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall sub_18004C268(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
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
    sub_180038A58(pExceptionObject, (__int64)v8, v9, (__int64)v24, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v10 = sub_180016F54((__int64)v24, a3);
  if ( (unsigned __int8)sub_18004CEDC(a1, v10) )
  {
    v11 = sub_18001B57C(v27, (__int64)"ShaderManager::CreateShaderFamily() -- shader family with name '", a3);
    v12 = sub_18001B448((__int64)pExceptionObject, (__int64)v11, (__int64)"' already exists");
    v13 = std::string::string(
            v23,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_180038A58(v26, (__int64)v13, v14, v12, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v26;
  }
  v15 = sub_1800407EC(a1, &v19);
  sub_18004AF88(a2, a3, (__int64)v15, a4);
  if ( v20 )
    sub_18001050C(v20);
  v16 = sub_18004A808((__int64 *)(a1 + 18560), (__int64)&v19, a3);
  sub_18001244C((__int64 *)(*(_QWORD *)v16 + 64LL), a2);
  sub_180011A5C(a3);
  v17 = a4[1];
  if ( v17 )
    sub_18001050C(v17);
  return a2;
}
