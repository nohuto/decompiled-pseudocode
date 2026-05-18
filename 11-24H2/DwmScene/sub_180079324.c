/*
 * XREFs of sub_180079324 @ 0x180079324
 * Callers:
 *     sub_180043870 @ 0x180043870 (sub_180043870.c)
 *     sub_180043D74 @ 0x180043D74 (sub_180043D74.c)
 *     sub_180075B30 @ 0x180075B30 (sub_180075B30.c)
 *     sub_180077074 @ 0x180077074 (sub_180077074.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18001B5A8 @ 0x18001B5A8 (sub_18001B5A8.c)
 *     sub_18001B6DC @ 0x18001B6DC (sub_18001B6DC.c)
 *     sub_180038BB8 @ 0x180038BB8 (sub_180038BB8.c)
 *     sub_18004C05C @ 0x18004C05C (sub_18004C05C.c)
 *     sub_180078770 @ 0x180078770 (sub_180078770.c)
 *     sub_180078B14 @ 0x180078B14 (sub_180078B14.c)
 *     sub_180078C6C @ 0x180078C6C (sub_180078C6C.c)
 *     sub_180078CB8 @ 0x180078CB8 (sub_180078CB8.c)
 *     sub_180079C38 @ 0x180079C38 (sub_180079C38.c)
 *     sub_18007A340 @ 0x18007A340 (sub_18007A340.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180079324(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
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
    sub_180038BB8(pExceptionObject, (__int64)v8, v9, (__int64)v37, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( !*(_QWORD *)(a2 + 16) )
  {
    std::string::string(v38, "ShaderPropertyLayout::AddArrayProperty() -- property cannot have an empty name");
    v33 = std::string::string(
            v37,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_180038BB8(v47, (__int64)v33, v34, (__int64)v38, 0);
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
    sub_180038BB8(pExceptionObject, (__int64)v11, v12, (__int64)v38, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v13 = (unsigned __int16)sub_18004C05C(*(_QWORD *)(a1 + 1152), a2);
  if ( *(_WORD *)(a1 + 2 * v13 + 128) != 0xFFFF )
  {
    v14 = sub_18001B6DC(v38, (__int64)"ShaderPropertyLayout::AddArrayProperty() -- variable '", a2);
    v15 = sub_18001B5A8((__int64)pExceptionObject, (__int64)v14, (__int64)"' is already defined");
    v16 = std::string::string(
            v37,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_180038BB8(v47, (__int64)v16, v17, v15, 0);
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
    sub_180038BB8(v47, (__int64)v18, v19, (__int64)v38, 0);
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
    sub_180038BB8(v47, (__int64)v20, v21, (__int64)v38, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v47;
  }
  sub_180079C38(a1);
  v35 = (__int64)(*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80)) >> 2;
  v22 = sub_18007A340(a3);
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
    sub_180038BB8(v47, (__int64)v24, v25, (__int64)v38, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v47;
  }
  sub_180017054((__int64)v39, a2);
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
    sub_180078770(v10, v27, (__int64)v39);
  }
  else
  {
    sub_180078CB8(v26, v27, (__int64)v39);
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
      v31 = sub_180078C6C(*(_QWORD *)(a1 + 88), v36 - v30, a1 + 80);
      goto LABEL_24;
    }
    sub_180078B14((const void **)(a1 + 80), v36, v29);
  }
LABEL_25:
  sub_180011B5C((__int64)v39);
  return (unsigned __int16)v13;
}
