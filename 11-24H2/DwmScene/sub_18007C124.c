/*
 * XREFs of sub_18007C124 @ 0x18007C124
 * Callers:
 *     sub_18007C2D0 @ 0x18007C2D0 (sub_18007C2D0.c)
 *     sub_18007C308 @ 0x18007C308 (sub_18007C308.c)
 *     sub_18007C39C @ 0x18007C39C (sub_18007C39C.c)
 *     sub_18007C3D4 @ 0x18007C3D4 (sub_18007C3D4.c)
 *     sub_18007C454 @ 0x18007C454 (sub_18007C454.c)
 *     sub_18007C518 @ 0x18007C518 (sub_18007C518.c)
 *     sub_18007C95C @ 0x18007C95C (sub_18007C95C.c)
 *     sub_18007C9B8 @ 0x18007C9B8 (sub_18007C9B8.c)
 *     sub_180091F10 @ 0x180091F10 (sub_180091F10.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_18004C988 @ 0x18004C988 (sub_18004C988.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18007C124(__int64 a1, unsigned __int16 a2, int a3)
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
    v7 = (void *)sub_18004C988(*(_QWORD *)(v6 + 1152), (__int64)v18, v4);
    v8 = sub_18001B678((__int64)v20, (__int64)"Property not found in block: ", v7);
    v9 = std::string::string(
           v17,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertyblock.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v9, v10, v8, 0);
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
    sub_180038BB8(pExceptionObject, (__int64)v12, v13, (__int64)v18, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( v11[12] == 2 )
  {
    std::string::string(v17, "Property is imported so cannot be modified");
    v14 = std::string::string(
            v18,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertyblock.cpp");
    sub_180038BB8(pExceptionObject, (__int64)v14, v15, (__int64)v17, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(a1 + 32) + 4LL * (unsigned int)v11[10];
}
