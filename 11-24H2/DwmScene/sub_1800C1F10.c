/*
 * XREFs of sub_1800C1F10 @ 0x1800C1F10
 * Callers:
 *     sub_1800C5550 @ 0x1800C5550 (sub_1800C5550.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_1800115D0 @ 0x1800115D0 (sub_1800115D0.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_18001CD84 @ 0x18001CD84 (sub_18001CD84.c)
 *     sub_18001CDAC @ 0x18001CDAC (sub_18001CDAC.c)
 *     sub_1800275D0 @ 0x1800275D0 (sub_1800275D0.c)
 *     sub_180052318 @ 0x180052318 (sub_180052318.c)
 *     sub_1800523AC @ 0x1800523AC (sub_1800523AC.c)
 *     sub_1800686D4 @ 0x1800686D4 (sub_1800686D4.c)
 *     sub_1800B9B64 @ 0x1800B9B64 (sub_1800B9B64.c)
 *     sub_1800BB2F8 @ 0x1800BB2F8 (sub_1800BB2F8.c)
 *     sub_1800BFDFC @ 0x1800BFDFC (sub_1800BFDFC.c)
 *     sub_1800C1C48 @ 0x1800C1C48 (sub_1800C1C48.c)
 *     sub_1800C22D0 @ 0x1800C22D0 (sub_1800C22D0.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=8
__int64 *__fastcall sub_1800C1F10(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4)
{
  int v8; // eax
  char v9; // dl
  unsigned int v10; // esi
  __int64 *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r12
  unsigned __int128 v15; // kr00_16
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int128 *, _QWORD, __int64 *); // rdi
  int v18; // edi
  void **v19; // rax
  void **v20; // rax
  void **v21; // rax
  void **v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  void **v25; // rbx
  _QWORD *v26; // rax
  _BYTE *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // r8
  __int64 v31; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v32; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v33; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B0h]
  __int128 v35; // [rsp+60h] [rbp-A0h]
  __int128 v36; // [rsp+70h] [rbp-90h] BYREF
  __int128 v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+90h] [rbp-70h]
  int v39; // [rsp+98h] [rbp-68h]
  _QWORD v40[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v41[4]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v42[4]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+100h] [rbp+0h] BYREF

  v32 = a2;
  sub_180052318(a1);
  v8 = sub_1800523AC(a1);
  v10 = sub_1800C1C48(v8, v9);
  v11 = (__int64 *)(a1 + 184);
  v12 = *(_QWORD *)(a1 + 184);
  if ( v12 )
  {
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0LL;
    v39 = 0;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v12 + 80LL))(v12, &v36);
    if ( (_QWORD)v36 != __PAIR64__(a4, a3) || (_DWORD)v37 != v10 )
      sub_18000E954((__int64 *)(a1 + 184));
  }
  if ( !*v11 )
  {
    v39 = 0;
    *(_QWORD *)&v36 = __PAIR64__(a4, a3);
    *((_QWORD *)&v36 + 1) = 0x100000001LL;
    *(_QWORD *)&v37 = v10 | 0x100000000LL;
    *((_QWORD *)&v37 + 1) = 0x200000000LL;
    v38 = 0x1000000000008LL;
    sub_180011C04(a1 + 72, &v33);
    v15 = v33;
    v14 = v15 >> 64;
    v13 = v15;
    v35 = v33;
    sub_1800B9B64(v33, &v32);
    v31 = 0LL;
    v16 = (__int64)v32;
    v17 = *(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, __int64 *))(*v32 + 40);
    sub_18000E954(&v31);
    v18 = v17(v16, &v36, 0LL, &v31);
    sub_1800BB2F8(v13, v18);
    if ( v18 < 0 )
    {
      std::string::string(v40, "THROW_IF_FAILED_DETAILED. ");
      v19 = sub_18001CDAC((__int64)v40, " File=", 6uLL);
      sub_18001CDAC(
        (__int64)v19,
        "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp",
        0x5CuLL);
      v20 = sub_18001CDAC((__int64)v40, " Line=", 6uLL);
      sub_18001CDAC((__int64)v20, "929", 3uLL);
      v21 = sub_18001CDAC((__int64)v40, " Message=", 9uLL);
      sub_18001CDAC(
        (__int64)v21,
        "\"TextureD3D11::GetOrCreateCPUStagingTexture(): unable to create texture (2D)\"",
        0x4DuLL);
      v22 = sub_18001CDAC((__int64)v40, " Details=\"", 0xAuLL);
      v33 = 0LL;
      v34 = 0LL;
      v23 = sub_1800C22D0(v41, &v36, &v33);
      v24 = sub_18001CD84((__int64)v22, v23);
      sub_18001CDAC(v24, "\"", 1uLL);
      sub_180011B5C((__int64)v41);
      if ( (_QWORD)v33 )
        sub_180010234((void *)v33, (v34 - v33) & 0xFFFFFFFFFFFFFFF0uLL);
      v25 = sub_18001CDAC((__int64)v40, " HRESULT=", 9uLL);
      v26 = sub_1800275D0(v41, v18);
      sub_18001CD84((__int64)v25, (__int64)v26);
      sub_180011B5C((__int64)v41);
      v27 = (_BYTE *)sub_1800138F8((__int64)v40);
      std::string::string(v42, v27);
      v28 = std::string::string(
              v41,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
      sub_1800686D4(pExceptionObject, (__int64)v28, v29, v18, (__int64)v42, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    sub_1800BFDFC(v11, &v31);
    sub_18000E954(&v31);
    sub_18000E954((__int64 *)&v32);
    if ( v14 )
      sub_18001060C(v14);
  }
  *a2 = *v11;
  sub_1800115D0(a2);
  return a2;
}
