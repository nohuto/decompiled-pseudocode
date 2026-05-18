/*
 * XREFs of sub_18003E654 @ 0x18003E654
 * Callers:
 *     sub_18003B094 @ 0x18003B094 (sub_18003B094.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_18003CD80 @ 0x18003CD80 (sub_18003CD80.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18003E654(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // rcx
  _QWORD *v7; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v8[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v9[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-48h] BYREF

  v7 = a2;
  if ( !*a2 )
  {
    std::string::string(v9, "Scene::DeregisterNode() - node must not be null");
    v3 = std::string::string(
           v8,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v3, v4, (__int64)v9, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v7 = *(_QWORD **)(*a2 + 368LL);
  result = sub_18003CD80((_QWORD *)(a1 + 120), (__int64)&v7);
  v6 = a2[1];
  if ( v6 )
    return sub_18001060C(v6);
  return result;
}
