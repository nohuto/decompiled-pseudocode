/*
 * XREFs of sub_1800C0438 @ 0x1800C0438
 * Callers:
 *     sub_1800C0350 @ 0x1800C0350 (sub_1800C0350.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _o_pow @ 0x18000C01C (_o_pow.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18001CC24 @ 0x18001CC24 (sub_18001CC24.c)
 *     sub_18001CC4C @ 0x18001CC4C (sub_18001CC4C.c)
 *     sub_180027470 @ 0x180027470 (sub_180027470.c)
 *     sub_180027BB8 @ 0x180027BB8 (sub_180027BB8.c)
 *     sub_180051390 @ 0x180051390 (sub_180051390.c)
 *     sub_18005226C @ 0x18005226C (sub_18005226C.c)
 *     sub_180052370 @ 0x180052370 (sub_180052370.c)
 *     sub_180068508 @ 0x180068508 (sub_180068508.c)
 *     sub_180068574 @ 0x180068574 (sub_180068574.c)
 *     sub_18007CFE0 @ 0x18007CFE0 (sub_18007CFE0.c)
 *     sub_1800B9A04 @ 0x1800B9A04 (sub_1800B9A04.c)
 *     sub_1800BB198 @ 0x1800BB198 (sub_1800BB198.c)
 *     sub_1800BEC70 @ 0x1800BEC70 (sub_1800BEC70.c)
 *     sub_1800BF6E0 @ 0x1800BF6E0 (sub_1800BF6E0.c)
 *     sub_1800BF9CC @ 0x1800BF9CC (sub_1800BF9CC.c)
 *     sub_1800BFAD4 @ 0x1800BFAD4 (sub_1800BFAD4.c)
 *     sub_1800BFB4C @ 0x1800BFB4C (sub_1800BFB4C.c)
 *     sub_1800C00AC @ 0x1800C00AC (sub_1800C00AC.c)
 *     sub_1800C0E3C @ 0x1800C0E3C (sub_1800C0E3C.c)
 *     sub_1800C1CE8 @ 0x1800C1CE8 (sub_1800C1CE8.c)
 *     sub_1800C2170 @ 0x1800C2170 (sub_1800C2170.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800C0438(__int64 a1, __int64 a2, __int64 a3)
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
    sub_180068508(pExceptionObject, (__int64)v7, v8, (__int64)&v63, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v9 = sub_1800C00AC((__int64)pExceptionObject, (_DWORD *)a2, *(_DWORD *)(a3 + 48));
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
      sub_1800BFAD4((__int64)&v56, &v54);
      v6 = v57;
      v12 = v59.m128i_u32[2];
    }
    for ( i = 0; i < v59.m128i_i32[3]; ++i )
    {
      for ( j = 0; j < v12; ++j )
      {
        v58 = __PAIR64__(j, i);
        v15 = sub_180052370(a3, __SPAIR64__(j, i));
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
            sub_180068508(pExceptionObject, (__int64)v25, v26, (__int64)&v63, 0);
            throw (Spectre::Engine::EngineException *)pExceptionObject;
          }
          v18 = (double)*(int *)a2;
          o_pow();
          v19 = 1;
          if ( (unsigned int)(int)(v18 / 2.0) > 1 )
            v19 = (int)(v18 / 2.0);
          o_pow();
          v54 = i;
          v20 = (_QWORD *)sub_180052370(a3, i);
          if ( v20 && (v22 = *(_QWORD *)(a3 + 8)) != 0 )
            v23 = *v20 + v22;
          else
            v23 = v21;
          v63.m128i_i64[0] = v23;
          v63.m128i_i32[2] = sub_18005226C(*(_DWORD *)(a2 + 16));
          v17 = sub_1800C1CE8(*(unsigned int *)(a2 + 16), v19, v24, 0LL);
        }
        v63.m128i_i32[3] = v17;
        if ( *((_QWORD *)&v56 + 1) == v6 )
          sub_1800BF9CC((const void **)&v56, *((_BYTE **)&v56 + 1), &v63);
        else
          sub_18007CFE0((__int64)&v56, &v63);
        v6 = v57;
        v12 = v59.m128i_u32[2];
      }
    }
  }
  sub_180011B04(a1 + 72, &v63);
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
  sub_180027BB8(a1, v33, (*(_DWORD *)(a2 + 20) & 6) != 0 ? 3 : 11);
  v55 = 0LL;
  v34 = sub_1800B9A04(v28, &v54);
  v35 = *v34;
  v36 = *(__int64 (__fastcall **)(__int64, __m128i *, void *, __int64 *))(*(_QWORD *)*v34 + 40LL);
  sub_18000E854(&v55);
  v37 = v31;
  if ( v31 == *((void **)&v56 + 1) )
    v37 = 0LL;
  v38 = v36(v35, &v59, v37, &v55);
  sub_18000E854((__int64 *)&v54);
  sub_1800BB198(v28, v38);
  if ( v38 < 0 )
  {
    std::string::string(v64, "THROW_IF_FAILED_DETAILED. ");
    v39 = sub_18001CC4C((__int64)v64, " File=", 6uLL);
    sub_18001CC4C(
      (__int64)v39,
      "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp",
      0x5CuLL);
    v40 = sub_18001CC4C((__int64)v64, " Line=", 6uLL);
    sub_18001CC4C((__int64)v40, "626", 3uLL);
    v41 = sub_18001CC4C((__int64)v64, " Message=", 9uLL);
    sub_18001CC4C((__int64)v41, "\"TextureD3D11::CreateRendererResources2D(): unable to create texture(2D)\"", 0x49uLL);
    v42 = sub_18001CC4C((__int64)v64, " Details=\"", 0xAuLL);
    v43 = sub_1800C2170(v65, &v59, &v56);
    v44 = sub_18001CC24((__int64)v42, v43);
    sub_18001CC4C(v44, "\"", 1uLL);
    sub_180011A5C((__int64)v65);
    v45 = sub_18001CC4C((__int64)v64, " HRESULT=", 9uLL);
    v46 = sub_180027470(v65, v38);
    sub_18001CC24((__int64)v45, (__int64)v46);
    sub_180011A5C((__int64)v65);
    v47 = (_BYTE *)sub_1800137F8((__int64)v64);
    std::string::string(pExceptionObject, v47);
    v48 = std::string::string(
            v65,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
    sub_180068574(v67, (__int64)v48, v49, v38, (__int64)pExceptionObject, 0);
    throw (Spectre::Engine::EngineException *)v67;
  }
  v50 = (__int64 *)sub_1800C0E3C(a1, (unsigned int)&v54, v55, *(_DWORD *)(a2 + 20), v59.m128i_i32[2]);
  sub_1800BEC70((__int64 *)(a1 + 160), v50);
  sub_18000E854((__int64 *)&v54);
  sub_1800BEC70((__int64 *)(a1 + 168), &v55);
  v51 = sub_1800BFB4C((__int64 **)&v54, a2, &v59.m128i_i32[2], (int *)&v60 + 1);
  sub_1800BF6E0((void ***)(a1 + 112), (void ***)v51);
  sub_180051390(&v54);
  *(_BYTE *)(a1 + 208) = (*(_DWORD *)(a2 + 20) & 0x20) != 0;
  result = sub_18000E854(&v55);
  v53 = _mm_srli_si128(v27, 8).m128i_u64[0];
  if ( v53 )
    result = sub_18001050C(v53);
  if ( v31 )
    return sub_180010134(v31, (v6 - (_QWORD)v31) & 0xFFFFFFFFFFFFFFF0uLL);
  return result;
}
