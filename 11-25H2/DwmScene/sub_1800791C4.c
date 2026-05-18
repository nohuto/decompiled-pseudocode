/*
 * XREFs of sub_1800791C4 @ 0x1800791C4
 * Callers:
 *     sub_180043710 @ 0x180043710 (sub_180043710.c)
 *     sub_180043C14 @ 0x180043C14 (sub_180043C14.c)
 *     sub_1800759D0 @ 0x1800759D0 (sub_1800759D0.c)
 *     sub_180076F14 @ 0x180076F14 (sub_180076F14.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18001B448 @ 0x18001B448 (sub_18001B448.c)
 *     sub_18001B57C @ 0x18001B57C (sub_18001B57C.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_18004BEFC @ 0x18004BEFC (sub_18004BEFC.c)
 *     sub_180078610 @ 0x180078610 (sub_180078610.c)
 *     sub_1800789B4 @ 0x1800789B4 (sub_1800789B4.c)
 *     sub_180078B0C @ 0x180078B0C (sub_180078B0C.c)
 *     sub_180078B58 @ 0x180078B58 (sub_180078B58.c)
 *     sub_180079AD8 @ 0x180079AD8 (sub_180079AD8.c)
 *     sub_18007A1E0 @ 0x18007A1E0 (sub_18007A1E0.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800791C4(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 *v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r12
  __int64 *v14; // rax
  __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // r8
  _QWORD *v18; // rax
  __int64 v19; // r8
  _QWORD *v20; // rax
  __int64 v21; // r8
  int v22; // eax
  int v23; // edx
  _QWORD *v24; // rax
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r14
  __int64 v29; // r8
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  _QWORD *v33; // rax
  __int64 v34; // r8
  __int64 v35; // [rsp+30h] [rbp-D0h]
  unsigned int v36; // [rsp+38h] [rbp-C8h]
  _QWORD v37[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v38[4]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v39[32]; // [rsp+80h] [rbp-80h] BYREF
  __int16 v40; // [rsp+A0h] [rbp-60h]
  __int16 v41; // [rsp+A2h] [rbp-5Eh]
  unsigned int v42; // [rsp+A4h] [rbp-5Ch]
  int v43; // [rsp+A8h] [rbp-58h]
  unsigned int v44; // [rsp+ACh] [rbp-54h]
  int v45; // [rsp+B0h] [rbp-50h]
  int v46; // [rsp+B4h] [rbp-4Ch]
  _QWORD v47[7]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+F0h] [rbp-10h] BYREF

  if ( *(_DWORD *)(a1 + 1168) )
  {
    std::string::string(
      v37,
      "ShaderPropertyLayout::AddArrayProperty() -- properties can only be added during declaration phase before EndDeclaration()");
    v8 = std::string::string(
           v38,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_180038A58(pExceptionObject, (__int64)v8, v9, (__int64)v37, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( !*(_QWORD *)(a2 + 16) )
  {
    std::string::string(v38, "ShaderPropertyLayout::AddArrayProperty() -- property cannot have an empty name");
    v33 = std::string::string(
            v37,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_180038A58(v47, (__int64)v33, v34, (__int64)v38, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v47;
  }
  v10 = (__int64 *)(a1 + 56);
  if ( *(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56) == 28672LL )
  {
    std::string::string(
      v38,
      "ShaderPropertyLayout::AddArrayProperty() -- property block already has maximum number of properties");
    v11 = std::string::string(
            v37,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_180038A58(pExceptionObject, (__int64)v11, v12, (__int64)v38, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v13 = (unsigned __int16)sub_18004BEFC(*(_QWORD *)(a1 + 1152), a2);
  if ( *(_WORD *)(a1 + 2 * v13 + 128) != 0xFFFF )
  {
    v14 = sub_18001B57C(v38, (__int64)"ShaderPropertyLayout::AddArrayProperty() -- variable '", a2);
    v15 = sub_18001B448((__int64)pExceptionObject, (__int64)v14, (__int64)"' is already defined");
    v16 = std::string::string(
            v37,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_180038A58(v47, (__int64)v16, v17, v15, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v47;
  }
  if ( a3 != 5 && a3 != 7 )
  {
    std::string::string(
      v38,
      "ShaderPropertyLayout::AddArrayProperty() -- Only Vector4 and Matrix arrays are currently supported");
    v18 = std::string::string(
            v37,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_180038A58(v47, (__int64)v18, v19, (__int64)v38, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v47;
  }
  if ( a4 <= 1 )
  {
    std::string::string(
      v38,
      "ShaderPropertyLayout::AddArrayProperty() -- Array size must be more than 1. For arrays of size 1 use AddProperty instead");
    v20 = std::string::string(
            v37,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_180038A58(v47, (__int64)v20, v21, (__int64)v38, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v47;
  }
  sub_180079AD8(a1);
  v35 = (__int64)(*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80)) >> 2;
  v22 = sub_18007A1E0(a3);
  v36 = v23 + a4 * v22;
  if ( v36 > 0x4064 )
  {
    std::string::string(
      v38,
      "ShaderPropertyLayout::AddArrayProperty() -- Array extends property block past maximum capacity");
    v24 = std::string::string(
            v37,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_180038A58(v47, (__int64)v24, v25, (__int64)v38, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v47;
  }
  sub_180016F54((__int64)v39, a2);
  v40 = v13;
  v41 = 0;
  v42 = a3;
  v43 = v35;
  v44 = a4;
  v45 = 0;
  v46 = 0;
  v27 = v10[1];
  v28 = 0x6DB6DB6DB6DB6DB7LL * ((v27 - *v10) >> 3);
  if ( v27 == v10[2] )
  {
    sub_180078610(v10, v27, (__int64)v39);
  }
  else
  {
    sub_180078B58(v26, v27, (__int64)v39);
    v10[1] += 56LL;
  }
  *(_WORD *)(a1 + 2 * v13 + 128) = v28;
  v29 = *(_QWORD *)(a1 + 80);
  v30 = (*(_QWORD *)(a1 + 88) - v29) >> 2;
  if ( v36 < v30 )
  {
    v31 = v29 + 4LL * v36;
LABEL_24:
    *(_QWORD *)(a1 + 88) = v31;
    goto LABEL_25;
  }
  if ( v36 > v30 )
  {
    if ( v36 <= (unsigned __int64)((*(_QWORD *)(a1 + 96) - v29) >> 2) )
    {
      v31 = sub_180078B0C(*(_QWORD *)(a1 + 88), v36 - v30, a1 + 80);
      goto LABEL_24;
    }
    sub_1800789B4((const void **)(a1 + 80), v36, v29);
  }
LABEL_25:
  sub_180011A5C((__int64)v39);
  return (unsigned __int16)v13;
}
