/*
 * XREFs of ?PushLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180085AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x180086A40 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180087450 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800D65E0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD2DContext::PushLayer(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const __m128i *a3,
        struct ID2D1Geometry *a4,
        struct D2D_MATRIX_3X2_F *a5,
        float a6,
        enum D2D1_ANTIALIAS_MODE a7,
        enum D2D1_LAYER_OPTIONS1 a8,
        enum D2D1_PRIMITIVE_BLEND a9)
{
  int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rbx
  __int128 *v16; // rsi
  __int64 v17; // xmm1_8
  __int128 v18; // xmm0
  __int64 v19; // xmm1_8
  __m128i v20; // xmm2
  _BYTE v21[4]; // [rsp+2Ch] [rbp-BDh] BYREF
  _BYTE v22[40]; // [rsp+38h] [rbp-B1h]
  __int64 v23; // [rsp+60h] [rbp-89h]
  __int64 v24; // [rsp+68h] [rbp-81h]
  __int128 v25; // [rsp+70h] [rbp-79h] BYREF
  int v26; // [rsp+80h] [rbp-69h]
  int v27; // [rsp+84h] [rbp-65h]
  __int128 v28; // [rsp+88h] [rbp-61h] BYREF
  __int64 v29; // [rsp+98h] [rbp-51h]
  _OWORD v30[4]; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v31; // [rsp+E8h] [rbp-1h]

  CD2DContext::FlushDrawList(this);
  v12 = *((_DWORD *)this + 88);
  v13 = 0LL;
  if ( v12 )
    v13 = *(_QWORD *)(*((_QWORD *)this + 41) + 8LL * (unsigned int)(v12 - 1));
  CD2DContext::EnsureBeginDraw(this);
  v14 = *(_QWORD *)(v13 + 16);
  v26 = 0;
  v27 = 0;
  v25 = _xmm;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v14 + 200) + 240LL))(*(_QWORD *)(v14 + 200), &v25);
  v15 = *(_QWORD *)(v13 + 16);
  if ( a9 != *(_DWORD *)(v15 + 396) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v15 + 200) + 624LL))(
      *(_QWORD *)(v15 + 200),
      (unsigned int)a9);
    *(_DWORD *)(v15 + 396) = a9;
    v15 = *(_QWORD *)(v13 + 16);
  }
  if ( a5 )
  {
    v16 = &v28;
    v17 = *(_QWORD *)&a5->m[2][0];
    v28 = *(_OWORD *)&a5->m11;
    v29 = v17;
  }
  else
  {
    v16 = &v25;
    v26 = 0;
    v27 = 0;
    v25 = _xmm;
  }
  memset_0(v21, 0, 0x44uLL);
  v18 = *v16;
  v19 = *((_QWORD *)v16 + 2);
  v20 = _mm_loadu_si128(a3);
  v23 = 0LL;
  *(_OWORD *)&v22[12] = v18;
  *(_DWORD *)&v22[8] = a7;
  *(_QWORD *)&v22[28] = v19;
  LODWORD(v24) = a8;
  *(float *)&v22[36] = a6;
  v30[2] = *(_OWORD *)&v22[16];
  v30[0] = v20;
  v31 = v24;
  *(_QWORD *)v22 = a4;
  v30[1] = *(_OWORD *)v22;
  v30[3] = *(unsigned __int64 *)&v22[32];
  (*(void (__fastcall **)(_QWORD, _OWORD *, _QWORD))(**(_QWORD **)(v15 + 200) + 688LL))(
    *(_QWORD *)(v15 + 200),
    v30,
    0LL);
  CD2DTarget::ApplyCurrentClip((CD2DTarget *)v13);
  ++*(_DWORD *)(v13 + 48);
}
