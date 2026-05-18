/*
 * XREFs of sub_1800C3440 @ 0x1800C3440
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180017024 @ 0x180017024 (sub_180017024.c)
 *     sub_180052358 @ 0x180052358 (sub_180052358.c)
 *     sub_180052510 @ 0x180052510 (sub_180052510.c)
 *     sub_180052528 @ 0x180052528 (sub_180052528.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 *     sub_1800BEDD0 @ 0x1800BEDD0 (sub_1800BEDD0.c)
 *     sub_1800C22A4 @ 0x1800C22A4 (sub_1800C22A4.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800C3440(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        __int64 *a7,
        int a8,
        int a9)
{
  __int64 *v13; // rax
  char v14; // bl
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 *v20; // rax
  char v21; // di
  char v22; // di
  __int64 *v23; // rax
  __int64 v24; // rcx
  char v25; // bl
  char v26; // bl
  __int64 v27; // rsi
  __int64 *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 *v31; // rax
  char v32; // di
  char v33; // di
  _QWORD *v35; // rax
  __int64 v36; // r8
  _QWORD *v37; // rax
  __int64 v38; // r8
  __int64 v39; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A0h]
  __int64 v42; // [rsp+68h] [rbp-98h] BYREF
  __int64 v43; // [rsp+70h] [rbp-90h]
  __int64 v44; // [rsp+78h] [rbp-88h] BYREF
  __int64 v45; // [rsp+80h] [rbp-80h]
  __int64 v46; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v47[6]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v48[4]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v49[4]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+E8h] [rbp-18h] BYREF

  LODWORD(v39) = 0;
  v46 = 0LL;
  if ( *a7 )
  {
    v13 = sub_180052358(*a7, &v44, *(_DWORD *)(a1 + 88));
    v14 = 1;
    v15 = *v13;
  }
  else
  {
    v41 = 0LL;
    v13 = &v40;
    v14 = 2;
    v15 = 0LL;
  }
  v42 = v15;
  v16 = v13[1];
  v43 = v16;
  *v13 = 0LL;
  v13[1] = 0LL;
  if ( (v14 & 2) != 0 )
  {
    v14 &= ~2u;
    if ( v41 )
      sub_18001060C(v41);
  }
  if ( (v14 & 1) != 0 )
  {
    v14 &= ~1u;
    if ( v45 )
      sub_18001060C(v45);
  }
  v17 = unknown_libname_81(&v40, &v42);
  sub_180017024(&v44, v17);
  if ( (unsigned int)sub_180052510(v44) > 1 || (unsigned int)sub_180052528(v18) > 1 )
  {
    std::string::string(v48, "CopyTexture2D does not support mipmapped or MSAA textures");
    v37 = std::string::string(
            v49,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    sub_180068668(pExceptionObject, (__int64)v37, v38, (__int64)v48, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( v19 )
  {
    v20 = sub_1800C22A4(v19, &v42);
    v21 = 4;
  }
  else
  {
    v39 = 0LL;
    v20 = &v39;
    v21 = 8;
  }
  v22 = v14 | v21;
  sub_1800BEDD0(&v46, v20);
  if ( (v22 & 8) != 0 )
  {
    v22 &= ~8u;
    sub_18000E954(&v39);
  }
  if ( (v22 & 4) != 0 )
  {
    v22 &= ~4u;
    sub_18000E954(&v42);
  }
  if ( v45 )
    sub_18001060C(v45);
  if ( v16 )
    sub_18001060C(v16);
  v39 = 0LL;
  if ( *a2 )
  {
    v23 = sub_180052358(*a2, &v40, *(_DWORD *)(a1 + 88));
    v24 = *v23;
    v25 = 16;
  }
  else
  {
    v45 = 0LL;
    v23 = &v44;
    v24 = 0LL;
    v25 = 32;
  }
  v26 = v22 | v25;
  v42 = v24;
  v27 = v23[1];
  v43 = v27;
  *v23 = 0LL;
  v23[1] = 0LL;
  if ( (v26 & 0x20) != 0 )
  {
    v26 &= ~0x20u;
    if ( v45 )
      sub_18001060C(v45);
  }
  if ( (v26 & 0x10) != 0 )
  {
    v26 &= ~0x10u;
    if ( v41 )
      sub_18001060C(v41);
  }
  v28 = unknown_libname_81(&v40, &v42);
  sub_180017024(&v44, v28);
  if ( (unsigned int)sub_180052510(v44) > 1 || (unsigned int)sub_180052528(v29) > 1 )
  {
    std::string::string(v49, "CopyTexture2D does not support mipmapped or MSAA textures");
    v35 = std::string::string(
            v48,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    sub_180068668(pExceptionObject, (__int64)v35, v36, (__int64)v49, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( v30 )
  {
    v31 = sub_1800C22A4(v30, &v40);
    v32 = 64;
  }
  else
  {
    v42 = 0LL;
    v31 = &v42;
    v32 = 0x80;
  }
  v33 = v26 | v32;
  sub_1800BEDD0(&v39, v31);
  if ( v33 < 0 )
  {
    v33 &= ~0x80u;
    sub_18000E954(&v42);
  }
  if ( (v33 & 0x40) != 0 )
    sub_18000E954(&v40);
  if ( v45 )
    sub_18001060C(v45);
  if ( v27 )
    sub_18001060C(v27);
  v47[2] = 0;
  v47[0] = a8;
  v47[1] = a9;
  v47[3] = a5 + a8;
  v47[4] = a9 + a6;
  v47[5] = 1;
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int, _DWORD, __int64, _DWORD, _DWORD *))(**(_QWORD **)(a1 + 144)
                                                                                                  + 368LL))(
    *(_QWORD *)(a1 + 144),
    v39,
    0LL,
    a3,
    a4,
    0,
    v46,
    0,
    v47);
  sub_18000E954(&v39);
  return sub_18000E954(&v46);
}
