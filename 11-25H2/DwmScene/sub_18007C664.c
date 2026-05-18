/*
 * XREFs of sub_18007C664 @ 0x18007C664
 * Callers:
 *     sub_18007C5F8 @ 0x18007C5F8 (sub_18007C5F8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_18001B518 @ 0x18001B518 (sub_18001B518.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_18004C828 @ 0x18004C828 (sub_18004C828.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_18007C664(__int64 a1, unsigned __int16 a2, __int64 *a3)
{
  __int64 v4; // r8
  __int64 v6; // r9
  void *v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r8
  _DWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // r8
  _QWORD *result; // rax
  __int64 v17; // rcx
  _QWORD v18[4]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v19[4]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-9h] BYREF
  _BYTE v21[32]; // [rsp+B8h] [rbp+2Fh] BYREF

  v4 = a2;
  v6 = *(_QWORD *)(a1 + 16);
  if ( *(_WORD *)(v6 + 2 * v4 + 128) == 0xFFFF )
  {
    v7 = (void *)sub_18004C828(*(_QWORD *)(v6 + 1152), (__int64)v19, v4);
    v8 = sub_18001B518((__int64)v21, (__int64)"Property does not exist: ", v7);
    v9 = std::string::string(
           v18,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertyblock.cpp");
    sub_180038A58(pExceptionObject, (__int64)v9, v10, v8, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v11 = (_DWORD *)(*(_QWORD *)(v6 + 56) + 56LL * *(unsigned __int16 *)(v6 + 2 * v4 + 128));
  if ( v11[9] != 8 )
  {
    std::string::string(v19, "ShaderPropertyBlock::SetTexture() -- Property is not of type Texture");
    v12 = std::string::string(
            v18,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertyblock.cpp");
    sub_180038A58(pExceptionObject, (__int64)v12, v13, (__int64)v19, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( v11[12] == 2 )
  {
    std::string::string(v18, "ShaderPropertyBlock::SetTextureSampler() -- Cannot set the value of an imported property");
    v14 = std::string::string(
            v19,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertyblock.cpp");
    sub_180038A58(pExceptionObject, (__int64)v14, v15, (__int64)v18, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  result = sub_180011010((_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * (5LL * (unsigned int)v11[10] + 2)), a3);
  v17 = a3[1];
  if ( v17 )
    return (_QWORD *)sub_18001050C(v17);
  return result;
}
