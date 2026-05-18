/*
 * XREFs of sub_1800C5550 @ 0x1800C5550
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_1800100E4 @ 0x1800100E4 (sub_1800100E4.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_18001CAFC @ 0x18001CAFC (sub_18001CAFC.c)
 *     sub_180045ACC @ 0x180045ACC (sub_180045ACC.c)
 *     sub_180052358 @ 0x180052358 (sub_180052358.c)
 *     sub_1800523AC @ 0x1800523AC (sub_1800523AC.c)
 *     sub_180052540 @ 0x180052540 (sub_180052540.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 *     sub_1800BB2F8 @ 0x1800BB2F8 (sub_1800BB2F8.c)
 *     sub_1800C1F10 @ 0x1800C1F10 (sub_1800C1F10.c)
 *     sub_1800C22A4 @ 0x1800C22A4 (sub_1800C22A4.c)
 *     sub_1800C26C8 @ 0x1800C26C8 (sub_1800C26C8.c)
 *     sub_1800C2730 @ 0x1800C2730 (sub_1800C2730.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall sub_1800C5550(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        unsigned int a8,
        unsigned int a9,
        int a10,
        int a11)
{
  __int64 *v11; // rax
  char v12; // bl
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // r13
  int v16; // eax
  int v17; // edi
  _QWORD *v18; // rax
  __int64 v19; // r8
  __int64 v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rsi
  unsigned int v24; // r15d
  _QWORD *v25; // rax
  __int64 v26; // r8
  _QWORD *v27; // rax
  __int64 v28; // r8
  __int64 v29; // rdi
  __int64 v30; // rbx
  int v31; // r12d
  char *v32; // rdi
  char *v33; // rsi
  size_t v34; // r15
  __int64 v35; // r12
  __int64 v36; // rdi
  __int64 v37; // rsi
  void (__fastcall *v38)(__int64, __int64, _QWORD, _QWORD, int, _DWORD, __int64, _DWORD, __int64 *); // rdi
  __int64 *v39; // rax
  __int64 v41; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v42; // [rsp+60h] [rbp-A0h]
  unsigned int v43; // [rsp+64h] [rbp-9Ch]
  __int64 v44; // [rsp+68h] [rbp-98h] BYREF
  int v45; // [rsp+70h] [rbp-90h]
  int v46; // [rsp+74h] [rbp-8Ch]
  int v47; // [rsp+78h] [rbp-88h]
  unsigned int v48; // [rsp+7Ch] [rbp-84h]
  __int64 v49; // [rsp+80h] [rbp-80h] BYREF
  __int64 v50; // [rsp+88h] [rbp-78h]
  __int128 v51; // [rsp+90h] [rbp-70h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-60h]
  _QWORD v53[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v54; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-40h]
  _OWORD v56[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v57; // [rsp+F8h] [rbp-8h]
  int v58; // [rsp+100h] [rbp+0h]
  __int64 v59; // [rsp+108h] [rbp+8h] BYREF
  int v60; // [rsp+110h] [rbp+10h]
  unsigned int v61; // [rsp+114h] [rbp+14h]
  unsigned int v62; // [rsp+118h] [rbp+18h]
  int v63; // [rsp+11Ch] [rbp+1Ch]
  _QWORD pExceptionObject[7]; // [rsp+120h] [rbp+20h] BYREF

  v47 = a4;
  v48 = a3;
  v52 = a1;
  v43 = a6;
  v41 = a7;
  v42 = a9;
  v46 = a10;
  LODWORD(v44) = a11;
  v45 = 0;
  if ( *a2 )
  {
    v11 = sub_180052358(*a2, v56, *(_DWORD *)(a1 + 88));
    v12 = 1;
    v13 = *v11;
  }
  else
  {
    v50 = 0LL;
    v11 = &v49;
    v12 = 2;
    v13 = 0LL;
  }
  v53[0] = v13;
  v14 = v11[1];
  v53[1] = v14;
  *v11 = 0LL;
  v11[1] = 0LL;
  if ( (v12 & 2) != 0 )
  {
    v12 &= ~2u;
    if ( v50 )
      sub_18001060C(v50);
  }
  if ( (v12 & 1) != 0 && *((_QWORD *)&v56[0] + 1) )
    sub_18001060C(*((__int64 *)&v56[0] + 1));
  sub_1800C2730(&v49, v53);
  v15 = v49;
  v16 = sub_1800523AC(v49);
  v17 = sub_180045ACC(v16);
  v45 = v17;
  if ( (unsigned int)sub_180052540(v15) != 1 )
  {
    std::string::string(&v54, "UpdateTexture2D can only be used with 2D textures");
    v18 = std::string::string(
            v56,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    sub_180068668(pExceptionObject, (__int64)v18, v19, (__int64)&v54, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v20 = *sub_1800C22A4(v15, &v54);
  sub_18000E954(&v54);
  if ( !v20 )
  {
    std::string::string(&v54, "UpdateTexture2D can only be used with a valid ID3D11Texture2D interface pointer");
    v21 = std::string::string(
            v56,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    sub_180068668(pExceptionObject, (__int64)v21, v22, (__int64)&v54, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v23 = a9 * a11;
  v24 = v17 * v46;
  if ( v17 * v46 + (int)v23 >= a8 )
  {
    std::string::string(&v54, "UpdateTexture2D: Src X/Y offset exceeds the size of the data buffer");
    v25 = std::string::string(
            v56,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    sub_180068668(pExceptionObject, (__int64)v25, v26, (__int64)&v54, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( v17 * (v46 + a5) + v42 * (a6 + (_DWORD)v44 - 1) > a8 )
  {
    std::string::string(&v54, "UpdateTexture2D: Src rectangle exceeds the size of the data buffer");
    v27 = std::string::string(
            v56,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    sub_180068668(pExceptionObject, (__int64)v27, v28, (__int64)&v54, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_1800C1F10(v15, &v44, a5, a6);
  v51 = 0LL;
  v29 = v52;
  v30 = v44;
  v31 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, __int128 *))(**(_QWORD **)(v52 + 144)
                                                                                        + 112LL))(
          *(_QWORD *)(v52 + 144),
          v44,
          0LL,
          4LL,
          0,
          &v51);
  sub_180011C04(v29 + 72, v56);
  sub_1800C26C8(&v54, v56);
  if ( *((_QWORD *)&v56[0] + 1) )
    sub_18001060C(*((__int64 *)&v56[0] + 1));
  sub_1800BB2F8(v54, v31);
  if ( v31 >= 0 && (v32 = (char *)v51) != 0LL )
  {
    if ( !DWORD2(v51) )
    {
      memset(v56, 0, sizeof(v56));
      v57 = 0LL;
      v58 = 0;
      (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v30 + 80LL))(v30, v56);
      DWORD2(v51) = 4 * LODWORD(v56[0]);
      v32 = (char *)v51;
    }
    v33 = (char *)(v41 + v24 + v23);
    if ( v43 )
    {
      v34 = v45 * a5;
      v35 = v43;
      do
      {
        sub_1800100E4(v32, v34, v33, v34);
        v32 += DWORD2(v51);
        v33 += v42;
        --v35;
      }
      while ( v35 );
      v15 = v49;
    }
    v36 = v52;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v52 + 144) + 120LL))(
      *(_QWORD *)(v52 + 144),
      v30,
      0LL);
    v59 = 0LL;
    v61 = a5;
    v62 = v43;
    v60 = 0;
    v63 = 1;
    v37 = *(_QWORD *)(v36 + 144);
    v38 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _DWORD, __int64, _DWORD, __int64 *))(*(_QWORD *)v37 + 368LL);
    v39 = sub_1800C22A4(v15, &v41);
    v38(v37, *v39, 0LL, v48, v47, 0, v30, 0, &v59);
    sub_18000E954(&v41);
    if ( v55 )
      sub_18001060C(v55);
    sub_18000E954(&v44);
    if ( v50 )
      sub_18001060C(v50);
    if ( v14 )
      sub_18001060C(v14);
    return 1;
  }
  else
  {
    sub_18001CAFC(&stru_1801B9548, 3);
    if ( v55 )
      sub_18001060C(v55);
    sub_18000E954(&v44);
    if ( v50 )
      sub_18001060C(v50);
    if ( v14 )
      sub_18001060C(v14);
    return 0;
  }
}
