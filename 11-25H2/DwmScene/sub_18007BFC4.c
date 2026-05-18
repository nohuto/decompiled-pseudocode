/*
 * XREFs of sub_18007BFC4 @ 0x18007BFC4
 * Callers:
 *     sub_18007C170 @ 0x18007C170 (sub_18007C170.c)
 *     sub_18007C1A8 @ 0x18007C1A8 (sub_18007C1A8.c)
 *     sub_18007C23C @ 0x18007C23C (sub_18007C23C.c)
 *     sub_18007C274 @ 0x18007C274 (sub_18007C274.c)
 *     sub_18007C2F4 @ 0x18007C2F4 (sub_18007C2F4.c)
 *     sub_18007C3B8 @ 0x18007C3B8 (sub_18007C3B8.c)
 *     sub_18007C7FC @ 0x18007C7FC (sub_18007C7FC.c)
 *     sub_18007C858 @ 0x18007C858 (sub_18007C858.c)
 *     sub_180091DB0 @ 0x180091DB0 (sub_180091DB0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001B518 @ 0x18001B518 (sub_18001B518.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_18004C828 @ 0x18004C828 (sub_18004C828.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18007BFC4(__int64 a1, unsigned __int16 a2, int a3)
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
  _QWORD v17[4]; // [rsp+38h] [rbp-51h] BYREF
  _QWORD v18[4]; // [rsp+58h] [rbp-31h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-11h] BYREF
  _BYTE v20[32]; // [rsp+B0h] [rbp+27h] BYREF

  v4 = a2;
  v6 = *(_QWORD *)(a1 + 16);
  if ( *(_WORD *)(v6 + 2 * v4 + 128) == 0xFFFF )
  {
    v7 = (void *)sub_18004C828(*(_QWORD *)(v6 + 1152), (__int64)v18, v4);
    v8 = sub_18001B518((__int64)v20, (__int64)"Property not found in block: ", v7);
    v9 = std::string::string(
           v17,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertyblock.cpp");
    sub_180038A58(pExceptionObject, (__int64)v9, v10, v8, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v11 = (_DWORD *)(*(_QWORD *)(v6 + 56) + 56LL * *(unsigned __int16 *)(v6 + 2 * v4 + 128));
  if ( v11[9] != a3 )
  {
    std::string::string(v18, "Property is not of type the correct type");
    v12 = std::string::string(
            v17,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertyblock.cpp");
    sub_180038A58(pExceptionObject, (__int64)v12, v13, (__int64)v18, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( v11[12] == 2 )
  {
    std::string::string(v17, "Property is imported so cannot be modified");
    v14 = std::string::string(
            v18,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertyblock.cpp");
    sub_180038A58(pExceptionObject, (__int64)v14, v15, (__int64)v17, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(a1 + 32) + 4LL * (unsigned int)v11[10];
}
