/*
 * XREFs of sub_1800C0598 @ 0x1800C0598
 * Callers:
 *     sub_1800C04B0 @ 0x1800C04B0 (sub_1800C04B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     _o_pow @ 0x18000C47C (_o_pow.c)
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010ED0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_18001CD84 @ 0x18001CD84 (sub_18001CD84.c)
 *     sub_18001CDAC @ 0x18001CDAC (sub_18001CDAC.c)
 *     sub_1800275D0 @ 0x1800275D0 (sub_1800275D0.c)
 *     sub_180027D18 @ 0x180027D18 (sub_180027D18.c)
 *     sub_1800514F0 @ 0x1800514F0 (sub_1800514F0.c)
 *     sub_1800523CC @ 0x1800523CC (sub_1800523CC.c)
 *     sub_1800524D0 @ 0x1800524D0 (sub_1800524D0.c)
 *     sub_180068668 @ 0x180068668 (sub_180068668.c)
 *     sub_1800686D4 @ 0x1800686D4 (sub_1800686D4.c)
 *     sub_18007D140 @ 0x18007D140 (sub_18007D140.c)
 *     sub_1800B9B64 @ 0x1800B9B64 (sub_1800B9B64.c)
 *     sub_1800BB2F8 @ 0x1800BB2F8 (sub_1800BB2F8.c)
 *     sub_1800BEDD0 @ 0x1800BEDD0 (sub_1800BEDD0.c)
 *     sub_1800BF840 @ 0x1800BF840 (sub_1800BF840.c)
 *     sub_1800BFB2C @ 0x1800BFB2C (sub_1800BFB2C.c)
 *     sub_1800BFC34 @ 0x1800BFC34 (sub_1800BFC34.c)
 *     sub_1800BFCAC @ 0x1800BFCAC (sub_1800BFCAC.c)
 *     sub_1800C020C @ 0x1800C020C (sub_1800C020C.c)
 *     sub_1800C0F9C @ 0x1800C0F9C (sub_1800C0F9C.c)
 *     sub_1800C1E48 @ 0x1800C1E48 (sub_1800C1E48.c)
 *     sub_1800C22D0 @ 0x1800C22D0 (sub_1800C22D0.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800C0598(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  __m128i v10; // xmm2
  __m128i v11; // xmm0
  unsigned int v12; // ecx
  unsigned __int32 i; // r15d
  unsigned int j; // ebx
  __int64 v15; // r10
  __int64 v16; // rax
  int v17; // eax
  double v18; // xmm6_8
  unsigned int v19; // r12d
  _QWORD *v20; // rax
  __int64 v21; // r10
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned int v24; // r11d
  _QWORD *v25; // rax
  __int64 v26; // r8
  __m128i v27; // xmm6
  __int64 v28; // r12
  __int64 v29; // rdx
  __int64 v30; // r8
  void *v31; // r15
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // rdi
  __int64 (__fastcall *v36)(__int64, __m128i *, void *, __int64 *); // rbx
  void *v37; // r8
  int v38; // edi
  void **v39; // rax
  void **v40; // rax
  void **v41; // rax
  void **v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  void **v45; // rbx
  _QWORD *v46; // rax
  _BYTE *v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // r8
  __int64 *v50; // rax
  __int64 **v51; // rax
  __int64 result; // rax
  __int64 v53; // rcx
  unsigned __int64 v54; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v55; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v56; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v57; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v58; // [rsp+60h] [rbp-A8h]
  __m128i v59; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v60; // [rsp+78h] [rbp-90h] BYREF
  __int64 v61; // [rsp+88h] [rbp-80h]
  int v62; // [rsp+90h] [rbp-78h]
  __m128i v63; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v64[4]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v65[4]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v67[7]; // [rsp+130h] [rbp+28h] BYREF

  v56 = 0LL;
  v6 = 0LL;
  v57 = 0LL;
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 && *(_DWORD *)(a2 + 16) == 17 )
  {
    std::string::string(&v63, "Unsupported texture options: Format::UInt8_RGBA cannot be used with BindToShader");
    v7 = std::string::string(
           v64,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
    sub_180068668(pExceptionObject, (__int64)v7, v8, (__int64)&v63, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v9 = sub_1800C020C((__int64)pExceptionObject, (_DWORD *)a2, *(_DWORD *)(a3 + 48));
  v10 = *(__m128i *)v9;
  v59 = *(__m128i *)v9;
  v60 = *(_OWORD *)(v9 + 16);
  v61 = *(_QWORD *)(v9 + 32);
  v62 = *(_DWORD *)(v9 + 40);
  if ( *(_QWORD *)(a3 + 8) )
  {
    v11 = _mm_srli_si128(v10, 8);
    v12 = _mm_cvtsi128_si32(v11);
    v54 = v12 * v11.m128i_i32[1];
    if ( v12 * v11.m128i_i32[1] )
    {
      sub_1800BFC34((__int64)&v56, &v54);
      v6 = v57;
      v12 = v59.m128i_u32[2];
    }
    for ( i = 0; i < v59.m128i_i32[3]; ++i )
    {
      for ( j = 0; j < v12; ++j )
      {
        v58 = __PAIR64__(j, i);
        v15 = sub_1800524D0(a3, __SPAIR64__(j, i));
        if ( v15 )
        {
          v16 = *(_QWORD *)(a3 + 8);
          if ( v16 )
            v63.m128i_i64[0] = v16 + *(_QWORD *)v15;
          else
            v63.m128i_i64[0] = 0LL;
          v63.m128i_i32[2] = *(_DWORD *)(v15 + 20);
          v17 = *(_DWORD *)(v15 + 24);
        }
        else
        {
          if ( !j )
          {
            std::string::string(&v63, "Error, there is no top-level image available");
            v25 = std::string::string(
                    v64,
                    "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
            sub_180068668(pExceptionObject, (__int64)v25, v26, (__int64)&v63, 0);
            throw (Spectre::Engine::EngineException *)pExceptionObject;
          }
          v18 = (double)*(int *)a2;
          o_pow();
          v19 = 1;
          if ( (unsigned int)(int)(v18 / 2.0) > 1 )
            v19 = (int)(v18 / 2.0);
          o_pow();
          v54 = i;
          v20 = (_QWORD *)sub_1800524D0(a3, i);
          if ( v20 && (v22 = *(_QWORD *)(a3 + 8)) != 0 )
            v23 = *v20 + v22;
          else
            v23 = v21;
          v63.m128i_i64[0] = v23;
          v63.m128i_i32[2] = sub_1800523CC(*(_DWORD *)(a2 + 16));
          v17 = sub_1800C1E48(*(unsigned int *)(a2 + 16), v19, v24, 0LL);
        }
        v63.m128i_i32[3] = v17;
        if ( *((_QWORD *)&v56 + 1) == v6 )
          sub_1800BFB2C((const void **)&v56, *((_BYTE **)&v56 + 1), &v63);
        else
          sub_18007D140((__int64)&v56, &v63);
        v6 = v57;
        v12 = v59.m128i_u32[2];
      }
    }
  }
  sub_180011C04(a1 + 72, &v63);
  v27 = v63;
  v28 = v63.m128i_i64[0];
  if ( (*(_BYTE *)(a2 + 20) & 0x40) != 0 )
  {
    (*(void (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v63.m128i_i64[0] + 80LL))(
      v63.m128i_i64[0],
      (char *)&v60 + 4,
      (char *)&v60 + 8);
    v29 = DWORD1(v60);
  }
  else
  {
    v29 = 1LL;
    *(_QWORD *)((char *)&v60 + 4) = 1LL;
  }
  v30 = 0LL;
  v31 = (void *)v56;
  if ( (_QWORD)v56 != *((_QWORD *)&v56 + 1) )
  {
    v32 = v56;
    do
    {
      v30 += *(unsigned int *)(v32 + 12);
      v32 += 16LL;
    }
    while ( v32 != *((_QWORD *)&v56 + 1) );
  }
  v33 = v30 * v29;
  *(_QWORD *)(a1 + 200) = v33;
  sub_180027D18(a1, v33, (*(_DWORD *)(a2 + 20) & 6) != 0 ? 3 : 11);
  v55 = 0LL;
  v34 = sub_1800B9B64(v28, &v54);
  v35 = *v34;
  v36 = *(__int64 (__fastcall **)(__int64, __m128i *, void *, __int64 *))(*(_QWORD *)*v34 + 40LL);
  sub_18000E954(&v55);
  v37 = v31;
  if ( v31 == *((void **)&v56 + 1) )
    v37 = 0LL;
  v38 = v36(v35, &v59, v37, &v55);
  sub_18000E954((__int64 *)&v54);
  sub_1800BB2F8(v28, v38);
  if ( v38 < 0 )
  {
    std::string::string(v64, "THROW_IF_FAILED_DETAILED. ");
    v39 = sub_18001CDAC((__int64)v64, " File=", 6uLL);
    sub_18001CDAC(
      (__int64)v39,
      "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp",
      0x5CuLL);
    v40 = sub_18001CDAC((__int64)v64, " Line=", 6uLL);
    sub_18001CDAC((__int64)v40, "626", 3uLL);
    v41 = sub_18001CDAC((__int64)v64, " Message=", 9uLL);
    sub_18001CDAC((__int64)v41, "\"TextureD3D11::CreateRendererResources2D(): unable to create texture(2D)\"", 0x49uLL);
    v42 = sub_18001CDAC((__int64)v64, " Details=\"", 0xAuLL);
    v43 = sub_1800C22D0(v65, &v59, &v56);
    v44 = sub_18001CD84((__int64)v42, v43);
    sub_18001CDAC(v44, "\"", 1uLL);
    sub_180011B5C((__int64)v65);
    v45 = sub_18001CDAC((__int64)v64, " HRESULT=", 9uLL);
    v46 = sub_1800275D0(v65, v38);
    sub_18001CD84((__int64)v45, (__int64)v46);
    sub_180011B5C((__int64)v65);
    v47 = (_BYTE *)sub_1800138F8((__int64)v64);
    std::string::string(pExceptionObject, v47);
    v48 = std::string::string(
            v65,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
    sub_1800686D4(v67, (__int64)v48, v49, v38, (__int64)pExceptionObject, 0);
    throw (Spectre::Engine::EngineException *)v67;
  }
  v50 = (__int64 *)sub_1800C0F9C(a1, (unsigned int)&v54, v55, *(_DWORD *)(a2 + 20), v59.m128i_i32[2]);
  sub_1800BEDD0((__int64 *)(a1 + 160), v50);
  sub_18000E954((__int64 *)&v54);
  sub_1800BEDD0((__int64 *)(a1 + 168), &v55);
  v51 = sub_1800BFCAC((__int64 **)&v54, a2, &v59.m128i_i32[2], (int *)&v60 + 1);
  sub_1800BF840((void ***)(a1 + 112), (void ***)v51);
  sub_1800514F0(&v54);
  *(_BYTE *)(a1 + 208) = (*(_DWORD *)(a2 + 20) & 0x20) != 0;
  result = sub_18000E954(&v55);
  v53 = _mm_srli_si128(v27, 8).m128i_u64[0];
  if ( v53 )
    result = sub_18001060C(v53);
  if ( v31 )
    return sub_180010234(v31, (v6 - (_QWORD)v31) & 0xFFFFFFFFFFFFFFF0uLL);
  return result;
}
