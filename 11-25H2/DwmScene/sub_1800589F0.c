/*
 * XREFs of sub_1800589F0 @ 0x1800589F0
 * Callers:
 *     sub_180064748 @ 0x180064748 (sub_180064748.c)
 *     sub_180083420 @ 0x180083420 (sub_180083420.c)
 *     sub_180083990 @ 0x180083990 (sub_180083990.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800589F0(__int64 a1, int a2, char a3)
{
  __int64 v3; // r9
  __int64 result; // rax
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD v7[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v8[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  if ( a2 < 0 || (v3 = *(_QWORD *)(a1 + 104), a2 >= (int)(-1431655765 * ((*(_QWORD *)(a1 + 112) - v3) >> 4))) )
  {
    std::string::string(v8, "Camera::SetRenderPassEnabled() -- illegal render pass index");
    v5 = std::string::string(
           v7,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\camera.cpp");
    sub_180038A58(pExceptionObject, (__int64)v5, v6, (__int64)v8, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  result = a2;
  *(_BYTE *)(v3 + 48LL * a2) = a3;
  return result;
}
