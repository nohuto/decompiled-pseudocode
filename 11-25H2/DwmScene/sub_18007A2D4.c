/*
 * XREFs of sub_18007A2D4 @ 0x18007A2D4
 * Callers:
 *     sub_180079CCC @ 0x180079CCC (sub_180079CCC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_18001B448 @ 0x18001B448 (sub_18001B448.c)
 *     sub_18001B57C @ 0x18001B57C (sub_18001B57C.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_180078C68 @ 0x180078C68 (sub_180078C68.c)
 *     sub_18007A1E0 @ 0x18007A1E0 (sub_18007A1E0.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18007A2D4(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // r15
  __int64 v7; // rax
  _QWORD *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  int v14; // ecx
  int v15; // r13d
  int i; // r12d
  __int64 *v17; // rax
  __int64 v18; // rbx
  _QWORD *v19; // rax
  __int64 v20; // r8
  __int64 *v21; // rax
  __int64 v22; // rbx
  _QWORD *v23; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h]
  _QWORD v28[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v29[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30[4]; // [rsp+70h] [rbp-90h] BYREF
  __int64 pExceptionObject[7]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v32[7]; // [rsp+C8h] [rbp-38h] BYREF

  v28[1] = a2;
  if ( *(_DWORD *)(a1 + 1168) != 1 )
  {
    std::string::string(
      v29,
      "ShaderPropertyLayout::SetMasterLayout() -- layout declaration must be complete before another layout can be connec"
      "ted as a master.");
    v4 = std::string::string(
           v30,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_180038A58(pExceptionObject, (__int64)v4, v5, (__int64)v29, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_18001244C((__int64 *)(a1 + 1176), a2);
  v6 = (_QWORD *)(a1 + 1192);
  v7 = *(_QWORD *)(a1 + 1192);
  if ( v7 != *(_QWORD *)(a1 + 1200) )
    *(_QWORD *)(a1 + 1200) = v7;
  v8 = (_QWORD *)(a1 + 1216);
  v9 = *(_QWORD *)(a1 + 1216);
  if ( v9 != *(_QWORD *)(a1 + 1224) )
    *(_QWORD *)(a1 + 1224) = v9;
  v10 = *(_QWORD *)(a1 + 56);
  result = *(_QWORD *)(a1 + 64);
  v27 = result;
  while ( v10 != result )
  {
    if ( *(_DWORD *)(v10 + 48) )
    {
      v12 = *(unsigned __int16 *)(*a2 + 2LL * *(unsigned __int16 *)(v10 + 32) + 128);
      if ( (_WORD)v12 == 0xFFFF )
      {
        v21 = sub_18001B57C(
                pExceptionObject,
                (__int64)"ShaderPropertyLayout::SetMasterLayout() -- master layout does not have the property '",
                v10);
        v22 = sub_18001B448((__int64)v30, (__int64)v21, (__int64)"' required for import by this layout");
        v23 = std::string::string(
                v29,
                "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\sh"
                "aderpropertylayout.cpp");
        sub_180038A58(v32, (__int64)v23, v24, v22, 0);
        throw (Spectre::Engine::EngineInvalidArgException *)v32;
      }
      v13 = *(_QWORD *)(*a2 + 56LL) + 56 * v12;
      v14 = *(_DWORD *)(v10 + 36);
      if ( v14 != *(_DWORD *)(v13 + 36) )
      {
        v17 = sub_18001B57C(
                v30,
                (__int64)"ShaderPropertyLayout::SetMasterLayout() -- master layout has different type for property '",
                v10);
        v18 = sub_18001B448((__int64)pExceptionObject, (__int64)v17, (__int64)"' imported by this layout");
        v19 = std::string::string(
                v29,
                "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\sh"
                "aderpropertylayout.cpp");
        sub_180038A58(v32, (__int64)v19, v20, v18, 0);
        throw (Spectre::Engine::EngineInvalidArgException *)v32;
      }
      if ( v14 == 8 )
      {
        LODWORD(v28[0]) = *(_DWORD *)(v13 + 40);
        HIDWORD(v28[0]) = *(_DWORD *)(v10 + 40);
        sub_180078C68(v8, v28);
      }
      else
      {
        v15 = sub_18007A1E0(v14);
        for ( i = 0; i < v15; ++i )
        {
          LODWORD(v26) = i + *(_DWORD *)(v13 + 40);
          HIDWORD(v26) = i + *(_DWORD *)(v10 + 40);
          sub_180078C68(v6, &v26);
        }
      }
      result = v27;
    }
    v10 += 56LL;
  }
  v25 = a2[1];
  if ( v25 )
    return sub_18001050C(v25);
  return result;
}
