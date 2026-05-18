/*
 * XREFs of sub_18007BE88 @ 0x18007BE88
 * Callers:
 *     sub_180041D0C @ 0x180041D0C (sub_180041D0C.c)
 *     sub_18006B7DC @ 0x18006B7DC (sub_18006B7DC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001B518 @ 0x18001B518 (sub_18001B518.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_18004C828 @ 0x18004C828 (sub_18004C828.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18007BE88(__int64 a1, _QWORD *a2, unsigned __int16 a3)
{
  __int64 v4; // r10
  void *v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD v14[4]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v15[4]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-9h] BYREF
  _BYTE v17[32]; // [rsp+B8h] [rbp+2Fh] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  if ( *(_WORD *)(v4 + 2LL * a3 + 128) == 0xFFFF )
  {
    v5 = (void *)sub_18004C828(*(_QWORD *)(v4 + 1152), (__int64)v15, a3);
    v6 = sub_18001B518((__int64)v17, (__int64)"Property does not exist: ", v5);
    v7 = std::string::string(
           v14,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertyblock.cpp");
    sub_180038A58(pExceptionObject, (__int64)v7, v8, v6, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v9 = *(_QWORD *)(v4 + 56) + 56LL * *(unsigned __int16 *)(v4 + 2LL * a3 + 128);
  if ( *(_DWORD *)(v9 + 36) != 8 )
  {
    std::string::string(v15, "ShaderPropertyBlock::GetTexture() -- Property is not of type Texture");
    v10 = std::string::string(
            v14,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertyblock.cpp");
    sub_180038A58(pExceptionObject, (__int64)v10, v11, (__int64)v15, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  unknown_libname_81(a2, (_QWORD *)(*(_QWORD *)(a1 + 56) + 40LL * *(unsigned int *)(v9 + 40)));
  return v12;
}
