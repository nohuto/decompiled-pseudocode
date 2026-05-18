/*
 * XREFs of sub_18003F0EC @ 0x18003F0EC
 * Callers:
 *     sub_18003AF34 @ 0x18003AF34 (sub_18003AF34.c)
 *     sub_18003E14C @ 0x18003E14C (sub_18003E14C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_18003D16C @ 0x18003D16C (sub_18003D16C.c)
 *     sub_18003D378 @ 0x18003D378 (sub_18003D378.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18003F0EC(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11[2]; // [rsp+30h] [rbp-69h] BYREF
  volatile signed __int32 *v12; // [rsp+40h] [rbp-59h]
  _QWORD *v13; // [rsp+50h] [rbp-49h]
  __int64 v14; // [rsp+58h] [rbp-41h] BYREF
  volatile signed __int32 *v15; // [rsp+60h] [rbp-39h]
  _QWORD v16[4]; // [rsp+78h] [rbp-21h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-1h] BYREF

  v13 = a2;
  v4 = *a2;
  if ( !*a2 )
  {
    std::string::string(&v14, "Scene::RegisterNode() - node must not be null");
    v5 = std::string::string(
           v11,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_180038A58(pExceptionObject, (__int64)v5, v6, (__int64)&v14, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *(_QWORD *)(v4 + 368) )
  {
    v16[0] = *(_QWORD *)(v4 + 368);
    if ( *sub_18003D378((_QWORD *)(a1 + 120), &v14, (__int64)v16) != *(_QWORD *)(a1 + 128) )
    {
      std::string::string(v16, "Scene::RegisterNode() - node id already exists");
      v7 = std::string::string(
             v11,
             "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
      sub_180038A58(pExceptionObject, (__int64)v7, v8, (__int64)v16, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
  }
  sub_180015174(&v14, a2);
  v11[0] = *(_QWORD *)(*a2 + 368LL);
  v11[1] = v14;
  v12 = v15;
  v14 = 0LL;
  v15 = 0LL;
  result = sub_18003D16C((float *)(a1 + 120), (__int64)v16, v11);
  if ( v12 )
    result = sub_180010544(v12);
  v10 = a2[1];
  if ( v10 )
    return sub_18001050C(v10);
  return result;
}
