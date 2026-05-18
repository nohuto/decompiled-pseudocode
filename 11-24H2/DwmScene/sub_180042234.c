/*
 * XREFs of sub_180042234 @ 0x180042234
 * Callers:
 *     sub_180043314 @ 0x180043314 (sub_180043314.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_180041FE4 @ 0x180041FE4 (sub_180041FE4.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180042234(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  _DWORD v7[4]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v8; // [rsp+40h] [rbp-A8h]
  _QWORD v9[5]; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v10[4]; // [rsp+78h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-50h] BYREF

  v8 = a1;
  v9[4] = a2;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  *(_DWORD *)(a1 + 32) = 1;
  v7[0] = 0;
  sub_180041FE4((_QWORD *)(a1 + 40), a2, v7);
  if ( (int)**(float **)(a1 + 40) )
  {
    std::string::string(
      v10,
      "Shader integer has default value is outside the currently supported range (must be exactly representable as float).");
    v4 = std::string::string(
           v9,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\Inc\\NativeRenderer\\Re"
           "sources\\ShaderDefinitions.h");
    sub_180038BB8(pExceptionObject, (__int64)v4, v5, (__int64)v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_180011B5C(a2);
  return a1;
}
