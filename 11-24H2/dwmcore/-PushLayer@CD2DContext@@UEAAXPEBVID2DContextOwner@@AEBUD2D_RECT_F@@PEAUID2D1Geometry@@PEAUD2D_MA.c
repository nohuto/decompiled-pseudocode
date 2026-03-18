/*
 * XREFs of ?PushLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800F9DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180053B90 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x1800CE6D0 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x1800FABC0 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rbx
  __int128 *v18; // rsi
  __int64 v19; // xmm1_8
  __int128 v20; // xmm0
  __int64 v21; // xmm1_8
  __m128i v22; // xmm2
  _BYTE v23[4]; // [rsp+2Ch] [rbp-BDh] BYREF
  _BYTE v24[40]; // [rsp+38h] [rbp-B1h]
  __int64 v25; // [rsp+60h] [rbp-89h]
  __int64 v26; // [rsp+68h] [rbp-81h]
  __int128 v27; // [rsp+70h] [rbp-79h] BYREF
  int v28; // [rsp+80h] [rbp-69h]
  int v29; // [rsp+84h] [rbp-65h]
  __int128 v30; // [rsp+88h] [rbp-61h] BYREF
  __int64 v31; // [rsp+98h] [rbp-51h]
  _OWORD v32[4]; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v33; // [rsp+E8h] [rbp-1h]

  CD2DContext::FlushDrawList(this, (__int64)a2, (__int64)a3);
  v14 = *((_DWORD *)this + 88);
  v15 = 0LL;
  if ( v14 )
  {
    v12 = (unsigned int)(v14 - 1);
    v15 = *(_QWORD *)(*((_QWORD *)this + 41) + 8 * v12);
  }
  CD2DContext::EnsureBeginDraw(this, v12, v13);
  v16 = *(_QWORD *)(v15 + 16);
  v28 = 0;
  v29 = 0;
  v27 = _xmm;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v16 + 200) + 240LL))(*(_QWORD *)(v16 + 200), &v27);
  v17 = *(_QWORD *)(v15 + 16);
  if ( a9 != *(_DWORD *)(v17 + 396) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v17 + 200) + 624LL))(
      *(_QWORD *)(v17 + 200),
      (unsigned int)a9);
    *(_DWORD *)(v17 + 396) = a9;
    v17 = *(_QWORD *)(v15 + 16);
  }
  if ( a5 )
  {
    v18 = &v30;
    v19 = *(_QWORD *)&a5->m[2][0];
    v30 = *(_OWORD *)&a5->m11;
    v31 = v19;
  }
  else
  {
    v18 = &v27;
    v28 = 0;
    v29 = 0;
    v27 = _xmm;
  }
  memset_0(v23, 0, 0x44uLL);
  v20 = *v18;
  v21 = *((_QWORD *)v18 + 2);
  v22 = _mm_loadu_si128(a3);
  v25 = 0LL;
  *(_OWORD *)&v24[12] = v20;
  *(_DWORD *)&v24[8] = a7;
  *(_QWORD *)&v24[28] = v21;
  LODWORD(v26) = a8;
  *(float *)&v24[36] = a6;
  v32[2] = *(_OWORD *)&v24[16];
  v32[0] = v22;
  v33 = v26;
  *(_QWORD *)v24 = a4;
  v32[1] = *(_OWORD *)v24;
  v32[3] = *(unsigned __int64 *)&v24[32];
  (*(void (__fastcall **)(_QWORD, _OWORD *, _QWORD))(**(_QWORD **)(v17 + 200) + 688LL))(
    *(_QWORD *)(v17 + 200),
    v32,
    0LL);
  CD2DTarget::ApplyCurrentClip((CD2DTarget *)v15);
  ++*(_DWORD *)(v15 + 48);
}
