/*
 * XREFs of sub_180069F6C @ 0x180069F6C
 * Callers:
 *     sub_180025310 @ 0x180025310 (sub_180025310.c)
 *     sub_180025ADC @ 0x180025ADC (sub_180025ADC.c)
 *     sub_180033120 @ 0x180033120 (sub_180033120.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18003C83C @ 0x18003C83C (sub_18003C83C.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180069F6C(__int64 a1, int a2, int a3, int a4)
{
  _QWORD *v4; // rdx
  int v5; // r9d
  int v6; // r9d
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD v10[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v11[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  v4 = (_QWORD *)(a1 + 32 * (a3 + 5LL * a2));
  if ( !a4 )
    return sub_18003C83C((__int64)v4);
  v5 = a4 - 1;
  if ( !v5 )
    return v4[1];
  v6 = v5 - 1;
  if ( !v6 )
    return v4[3];
  if ( v6 != 1 )
  {
    std::string::string(v11, "Unsupported value");
    v7 = std::string::string(
           v10,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\performancemanager.cpp");
    sub_180068508(pExceptionObject, (__int64)v7, v8, (__int64)v11, 1);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  return v4[2];
}
