/*
 * XREFs of sub_18007965C @ 0x18007965C
 * Callers:
 *     sub_180042358 @ 0x180042358 (sub_180042358.c)
 *     sub_180043CA4 @ 0x180043CA4 (sub_180043CA4.c)
 *     sub_1800759D0 @ 0x1800759D0 (sub_1800759D0.c)
 *     sub_1800764D0 @ 0x1800764D0 (sub_1800764D0.c)
 *     sub_180076F14 @ 0x180076F14 (sub_180076F14.c)
 *     sub_180079590 @ 0x180079590 (sub_180079590.c)
 *     sub_18007BB24 @ 0x18007BB24 (sub_18007BB24.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18001B448 @ 0x18001B448 (sub_18001B448.c)
 *     sub_18001B57C @ 0x18001B57C (sub_18001B57C.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_18004BEFC @ 0x18004BEFC (sub_18004BEFC.c)
 *     sub_18004C574 @ 0x18004C574 (sub_18004C574.c)
 *     sub_18006B15C @ 0x18006B15C (sub_18006B15C.c)
 *     sub_180078568 @ 0x180078568 (sub_180078568.c)
 *     sub_180078610 @ 0x180078610 (sub_180078610.c)
 *     sub_180078770 @ 0x180078770 (sub_180078770.c)
 *     sub_1800789B4 @ 0x1800789B4 (sub_1800789B4.c)
 *     sub_180078B0C @ 0x180078B0C (sub_180078B0C.c)
 *     sub_180078B58 @ 0x180078B58 (sub_180078B58.c)
 *     sub_180079AD8 @ 0x180079AD8 (sub_180079AD8.c)
 *     sub_180079E74 @ 0x180079E74 (sub_180079E74.c)
 *     sub_18007A1E0 @ 0x18007A1E0 (sub_18007A1E0.c)
 *     sub_18007A544 @ 0x18007A544 (sub_18007A544.c)
 *     sub_18007BB24 @ 0x18007BB24 (sub_18007BB24.c)
 *     sub_18007BE64 @ 0x18007BE64 (sub_18007BE64.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18007965C(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // r12d
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // r8
  __int64 *v11; // rsi
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r13
  __int64 *v15; // rax
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  unsigned __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // ebx
  __int64 v26; // r8
  __int64 v27; // rcx
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned int v34; // [rsp+30h] [rbp-D0h]
  _OWORD pExceptionObject[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v36; // [rsp+58h] [rbp-A8h]
  unsigned int v37; // [rsp+5Ch] [rbp-A4h]
  int v38; // [rsp+60h] [rbp-A0h]
  int v39; // [rsp+64h] [rbp-9Ch]
  int v40; // [rsp+68h] [rbp-98h]
  int v41; // [rsp+6Ch] [rbp-94h]
  __int64 v42; // [rsp+70h] [rbp-90h] BYREF
  __int64 v43; // [rsp+78h] [rbp-88h]
  __int16 v44; // [rsp+90h] [rbp-70h]
  __int16 v45; // [rsp+92h] [rbp-6Eh]
  int v46; // [rsp+94h] [rbp-6Ch]
  int v47; // [rsp+98h] [rbp-68h]
  int v48; // [rsp+9Ch] [rbp-64h]
  int v49; // [rsp+A0h] [rbp-60h]
  int v50; // [rsp+A4h] [rbp-5Ch]
  __int64 v51; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v52; // [rsp+B0h] [rbp-50h]
  _QWORD v53[7]; // [rsp+C8h] [rbp-38h] BYREF

  v6 = *(_DWORD *)(a2 + 32);
  v34 = v6;
  if ( *(_DWORD *)(a1 + 1168) )
  {
    std::string::string(
      &v51,
      "ShaderPropertyLayout::AddProperty() -- property can only be added while the layout is in declaration phase");
    v7 = std::string::string(
           &v42,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_180038A58(pExceptionObject, (__int64)v7, v8, (__int64)&v51, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( !*(_QWORD *)(a2 + 16) )
  {
    std::string::string(&v51, "ShaderPropertyLayout::AddProperty() -- property cannot have an empty name");
    v9 = std::string::string(
           &v42,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_180038A58(pExceptionObject, (__int64)v9, v10, (__int64)&v51, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v11 = (__int64 *)(a1 + 56);
  if ( *(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56) == 28672LL )
  {
    std::string::string(
      &v51,
      "ShaderPropertyLayout::AddProperty() -- property block already has maximum number of properties");
    v12 = std::string::string(
            &v42,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_180038A58(pExceptionObject, (__int64)v12, v13, (__int64)&v51, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v14 = (unsigned __int16)sub_18004BEFC(*(_QWORD *)(a1 + 1152), a2);
  if ( *(_WORD *)(a1 + 2 * v14 + 128) != 0xFFFF )
  {
    v15 = sub_18001B57C(&v51, (__int64)"ShaderPropertyLayout::AddProperty() -- variable '", a2);
    v16 = sub_18001B448((__int64)pExceptionObject, (__int64)v15, (__int64)"' is already defined");
    v17 = std::string::string(
            &v42,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_180038A58(v53, (__int64)v17, v18, v16, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v53;
  }
  if ( a3 == 1 )
  {
    v19 = (_QWORD *)sub_18004C574(*(_QWORD *)(a1 + 1152), &v42);
    sub_18007BE64(*v19, &v51);
    if ( v43 )
      sub_18001050C(v43);
    v20 = v51;
    if ( v51 != a1 )
    {
      if ( *(_WORD *)(v20 + 2LL * (unsigned __int16)sub_180079E74(v51, a2) + 128) == 0xFFFF )
        sub_18007BB24(*(_QWORD *)(*(_QWORD *)(a1 + 1152) + 18648LL), a2);
      *(_BYTE *)(a1 + 1241) = 1;
      a3 = 2;
    }
    if ( v52 )
      sub_18001050C(v52);
  }
  if ( v6 == 8 )
  {
    v21 = *(_QWORD *)(a1 + 112);
    v22 = 0xCCCCCCCCCCCCCCCDuLL * ((v21 - *(_QWORD *)(a1 + 104)) >> 3);
    memset(pExceptionObject, 0, sizeof(pExceptionObject));
    v36 = v22;
    v37 = 0;
    if ( v21 == *(_QWORD *)(a1 + 120) )
    {
      sub_180078770((__int64 *)(a1 + 104), v21, (__int64)pExceptionObject);
    }
    else
    {
      sub_180078568();
      *(_QWORD *)(a1 + 112) += 40LL;
    }
    *(_WORD *)(a1 + 2 * v14 + 128) = 28087 * ((v11[1] - *v11) >> 3);
    sub_180016F54((__int64)&v42, a2);
    v44 = v14;
    v45 = 0;
    v46 = 8;
    v47 = v22;
    v48 = 0;
    v49 = a3;
    v50 = 0;
    v24 = v11[1];
    if ( v24 == v11[2] )
    {
      sub_180078610(v11, v24, (__int64)&v42);
    }
    else
    {
      sub_180078B58(v23, v24, (__int64)&v42);
      v11[1] += 56LL;
    }
    sub_180011A5C((__int64)&v42);
    sub_18006B15C((__int64)pExceptionObject);
    goto LABEL_37;
  }
  v25 = sub_18007A1E0(v6);
  sub_180079AD8(a1);
  v26 = a1 + 80;
  v27 = *(_QWORD *)(a1 + 80);
  v28 = (*(_QWORD *)(a1 + 88) - v27) >> 2;
  v29 = (unsigned int)(v28 + v25);
  if ( v29 < v28 )
  {
    v30 = v27 + 4LL * (unsigned int)(v28 + v25);
LABEL_32:
    *(_QWORD *)(v26 + 8) = v30;
    goto LABEL_33;
  }
  if ( v29 > v28 )
  {
    if ( v29 <= (*(_QWORD *)(a1 + 96) - v27) >> 2 )
    {
      v30 = sub_180078B0C(*(_QWORD *)(a1 + 88), v29 - v28, v26);
      goto LABEL_32;
    }
    sub_1800789B4((const void **)(a1 + 80), v29, v26);
  }
LABEL_33:
  *(_WORD *)(a1 + 2 * v14 + 128) = 28087 * ((v11[1] - *v11) >> 3);
  sub_180016F54((__int64)pExceptionObject, a2);
  v36 = (unsigned __int16)v14;
  v37 = v34;
  v38 = v28;
  v39 = 1;
  v40 = a3;
  v41 = 0;
  v32 = v11[1];
  if ( v32 == v11[2] )
  {
    sub_180078610(v11, v32, (__int64)pExceptionObject);
  }
  else
  {
    sub_180078B58(v31, v32, (__int64)pExceptionObject);
    v11[1] += 56LL;
  }
  sub_180011A5C((__int64)pExceptionObject);
LABEL_37:
  *(_BYTE *)(a1 + 1240) |= a3 == 2;
  sub_18007A544(a1, (unsigned __int16)v14, a2);
  return (unsigned __int16)v14;
}
