/*
 * XREFs of ?UpdateClientBounds@CVisualTree@@IEAAXXZ @ 0x18003E330
 * Callers:
 *     ?BeginPreCompute@CVisualTree@@QEAAXXZ @ 0x18003BD60 (-BeginPreCompute@CVisualTree@@QEAAXXZ.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18003C140 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x18003D370 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x180102540 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 *     ?UpdateClientInfo@CDesktopTree@@MEAAXXZ @ 0x1801DAF90 (-UpdateClientInfo@CDesktopTree@@MEAAXXZ.c)
 *     ?UpdateClientInfo@CVisualTree@@MEAAXXZ @ 0x1802038F0 (-UpdateClientInfo@CVisualTree@@MEAAXXZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x180027CF0 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18002AFC0 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18002B300 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?GetInflationScale@CLegacyRenderTarget@@UEBAMXZ @ 0x18003DB30 (-GetInflationScale@CLegacyRenderTarget@@UEBAMXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FloorSat@CFloatFPU@@SAHM@Z @ 0x1800D3E10 (-FloorSat@CFloatFPU@@SAHM@Z.c)
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x1800D3E60 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisualTree::UpdateClientBounds(CVisualTree *this)
{
  float InflationScale; // xmm0_4
  CLegacyRenderTarget **v3; // r13
  CLegacyRenderTarget **v4; // rbx
  CLegacyRenderTarget *v5; // r12
  __int64 (__fastcall *v6)(); // rax
  __m128 *v7; // rax
  __m128 v8; // xmm6
  __m128 v9; // xmm2
  __m128i v10; // xmm7
  __m128i v11; // xmm9
  __m128i v12; // xmm8
  char v13; // al
  int v14; // r14d
  int v15; // r15d
  int v16; // esi
  int v17; // edx
  int v18; // esp
  int v19; // r10d
  int v20; // r10d
  int v21; // r9d
  float v22; // xmm1_4
  BOOL v23; // ecx
  BOOL v24; // eax
  const struct FastRegion::Internal::CRgnData **v25; // r14
  CVisualTree *v26; // r8
  int *v27; // r14
  int *v28; // rdx
  int v29; // esp
  int v30; // ecx
  int v31; // esi
  int v32; // eax
  int **v33; // rax
  int *v34; // r10
  int v35; // r8d
  int v36; // esi
  char *v37; // r15
  char *v38; // r11
  _DWORD *v39; // r9
  __int64 v40; // rax
  int v41; // esp
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r15
  int v45; // esi
  float v46; // xmm6_4
  float (__fastcall *v47)(CLegacyRenderTarget *); // rax
  HANDLE ProcessHeap; // rax
  void *v49; // rsi
  int v50; // eax
  FastRegion::Internal::CRgnData *v51; // rcx
  void *v52; // r15
  __m128 v53; // rt1
  __m128 v54; // rt1
  __m128 v55; // rt1
  __m128 v56; // rt1
  FastRegion::Internal::CRgnData *v57; // rax
  char v58; // [rsp+28h] [rbp-E0h]
  float v59; // [rsp+2Ch] [rbp-DCh]
  float v60; // [rsp+2Ch] [rbp-DCh]
  float v61; // [rsp+2Ch] [rbp-DCh]
  float v62; // [rsp+2Ch] [rbp-DCh]
  LPVOID lpMem; // [rsp+38h] [rbp-D0h] BYREF
  int v64; // [rsp+40h] [rbp-C8h] BYREF
  int v65; // [rsp+44h] [rbp-C4h]
  int v66; // [rsp+48h] [rbp-C0h]
  int v67; // [rsp+4Ch] [rbp-BCh] BYREF
  int v68; // [rsp+50h] [rbp-B8h]
  _DWORD v69[13]; // [rsp+54h] [rbp-B4h] BYREF
  int v70; // [rsp+88h] [rbp-80h] BYREF
  void *v71; // [rsp+90h] [rbp-78h]
  _BYTE v72[256]; // [rsp+98h] [rbp-70h] BYREF
  void *retaddr; // [rsp+240h] [rbp+138h]

  v58 = 0;
  *((_QWORD *)this + 314) = 0LL;
  *((_QWORD *)this + 313) = 0LL;
  **((_DWORD **)this + 315) = 0;
  *((_WORD *)this + 1315) = 0;
  *((_DWORD *)this + 648) = 1065353216;
  v3 = (CLegacyRenderTarget **)*((_QWORD *)this + 307);
  v4 = (CLegacyRenderTarget **)*((_QWORD *)this + 306);
  if ( !(v3 - v4) )
  {
LABEL_62:
    *(_OWORD *)((char *)this + 2504) = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
    return;
  }
  while ( v4 != v3 )
  {
    v5 = *v4;
    *((_BYTE *)this + 2631) |= (*(__int64 (__fastcall **)(CLegacyRenderTarget *))(*(_QWORD *)*v4 + 56LL))(*v4);
    v6 = *(__int64 (__fastcall **)())(*(_QWORD *)v5 + 32LL);
    if ( v6 == COffScreenRenderTarget::GetTreeBounds )
      v7 = (__m128 *)((char *)v5 + 196);
    else
      v7 = (__m128 *)((__int64 (__fastcall *)(CLegacyRenderTarget *))v6)(v5);
    v8 = *v7;
    v9 = (__m128)LODWORD(FLOAT_N3_4028235e38);
    v10 = (__m128i)_mm_shuffle_ps(v8, v8, 170);
    if ( COERCE_FLOAT(*v7) > -3.4028235e38 || *(float *)v10.m128i_i32 < 3.4028235e38 )
    {
      v11 = (__m128i)_mm_shuffle_ps(v8, v8, 255);
      v12 = (__m128i)_mm_shuffle_ps(v8, v8, 85);
      if ( *(float *)v12.m128i_i32 > -3.4028235e38 || *(float *)v11.m128i_i32 < 3.4028235e38 )
      {
        v13 = 0;
        goto LABEL_8;
      }
    }
    else
    {
      v11 = (__m128i)_mm_shuffle_ps(v8, v8, 255);
      v12 = (__m128i)_mm_shuffle_ps(v8, v8, 85);
    }
    v13 = 1;
LABEL_8:
    if ( v13 )
    {
      v58 = 1;
      goto LABEL_67;
    }
    lpMem = &v64;
    if ( (_mm_cvtsi128_si32((__m128i)v8) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v9.m128_f32[0] = (float)(int)v8.m128_f32[0] - v8.m128_f32[0];
      v53.m128_f32[0] = FLOAT_N0_5;
      v9 = _mm_cmple_ss(v9, v53);
      v14 = (int)v8.m128_f32[0] - _mm_cvtsi128_si32((__m128i)v9);
    }
    else
    {
      v59 = v8.m128_f32[0] + 6291456.25;
      v14 = (int)(LODWORD(v59) << 10) >> 11;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v8.m128_f32[0] - (float)v14) & _xmm) > 0.00390625 )
      v14 = CFloatFPU::FloorSat(v8.m128_f32[0]);
    if ( (_mm_cvtsi128_si32(v12) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v9.m128_f32[0] = (float)(int)*(float *)v12.m128i_i32 - *(float *)v12.m128i_i32;
      v54.m128_f32[0] = FLOAT_N0_5;
      v9 = _mm_cmple_ss(v9, v54);
      v15 = (int)*(float *)v12.m128i_i32 - _mm_cvtsi128_si32((__m128i)v9);
    }
    else
    {
      v60 = *(float *)v12.m128i_i32 + 6291456.25;
      v15 = (int)(LODWORD(v60) << 10) >> 11;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v12.m128i_i32 - (float)v15) & _xmm) > 0.00390625 )
      v15 = CFloatFPU::FloorSat(*(float *)v12.m128i_i32);
    if ( (_mm_cvtsi128_si32(v10) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v9.m128_f32[0] = (float)(int)*(float *)v10.m128i_i32 - *(float *)v10.m128i_i32;
      v55.m128_f32[0] = FLOAT_N0_5;
      v9 = _mm_cmple_ss(v9, v55);
      v16 = (int)*(float *)v10.m128i_i32 - _mm_cvtsi128_si32((__m128i)v9);
    }
    else
    {
      v61 = *(float *)v10.m128i_i32 + 6291456.25;
      v16 = (int)(LODWORD(v61) << 10) >> 11;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v10.m128i_i32 - (float)v16) & _xmm) > 0.00390625 )
      v16 = CFloatFPU::CeilingSat(*(float *)v10.m128i_i32);
    if ( (_mm_cvtsi128_si32(v11) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v9.m128_f32[0] = (float)(int)*(float *)v11.m128i_i32 - *(float *)v11.m128i_i32;
      v56.m128_f32[0] = FLOAT_N0_5;
      v17 = (int)*(float *)v11.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v9, v56));
    }
    else
    {
      v62 = *(float *)v11.m128i_i32 + 6291456.25;
      v17 = (int)(LODWORD(v62) << 10) >> 11;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v11.m128i_i32 - (float)v17) & _xmm) > 0.00390625 )
      v17 = CFloatFPU::CeilingSat(*(float *)v11.m128i_i32);
    if ( v14 >= v16 || v15 >= v17 )
    {
      v20 = v68;
      v21 = 0;
    }
    else
    {
      v65 = v14;
      v19 = v18 + 84;
      v66 = v16;
      v67 = v15;
      v20 = v19 - (v18 + 68);
      v69[2] = v14;
      v68 = v20;
      v69[3] = v16;
      v69[0] = v17;
      v69[1] = v18 + 84 - (unsigned int)v69 + 8;
      v21 = 2;
    }
    v22 = *((float *)this + 626);
    InflationScale = *((float *)this + 628);
    v64 = v21;
    v23 = 1;
    if ( InflationScale > v22 )
    {
      InflationScale = *((float *)this + 629);
      if ( InflationScale > *((float *)this + 627) )
        v23 = 0;
    }
    v24 = *(float *)v10.m128i_i32 <= v8.m128_f32[0] || *(float *)v11.m128i_i32 <= *(float *)v12.m128i_i32;
    if ( v23 )
    {
      if ( v24 )
      {
        *((_QWORD *)this + 314) = 0LL;
        *((_QWORD *)this + 313) = 0LL;
      }
      else
      {
        *(__m128 *)((char *)this + 2504) = v8;
      }
    }
    else if ( !v24 )
    {
      if ( v22 > v8.m128_f32[0] )
        *((_DWORD *)this + 626) = v8.m128_i32[0];
      InflationScale = *((float *)this + 627);
      if ( InflationScale > *(float *)v12.m128i_i32 )
        *((_DWORD *)this + 627) = v12.m128i_i32[0];
      if ( *(float *)v10.m128i_i32 > *((float *)this + 628) )
        *((_DWORD *)this + 628) = v10.m128i_i32[0];
      if ( *(float *)v11.m128i_i32 > *((float *)this + 629) )
        *((_DWORD *)this + 629) = v11.m128i_i32[0];
    }
    if ( v21 )
    {
      v25 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 2520);
      v26 = (CVisualTree *)*((_QWORD *)this + 315);
      if ( *(_DWORD *)v26 )
      {
        v50 = FastRegion::Internal::CRgnData::EstimateSizeUnion(
                *((const struct FastRegion::Internal::CRgnData **)this + 315),
                (const struct FastRegion::Internal::CRgnData *)&v64);
        v51 = (FastRegion::Internal::CRgnData *)v72;
        v71 = v72;
        v70 = v50;
        if ( (unsigned __int64)v50 > 0x100 )
        {
          v57 = (FastRegion::Internal::CRgnData *)MIDL_user_allocate(v50);
          v51 = v57;
          if ( !v57 )
          {
            if ( v72 != v71 )
              operator delete(v71);
            v45 = -2147024882;
LABEL_60:
            ModuleFailFastForHRESULT(v45, retaddr);
          }
          v71 = v57;
        }
        FastRegion::Internal::CRgnData::Union(v51, *v25, (const struct FastRegion::Internal::CRgnData *)lpMem);
        v45 = FastRegion::CRegion::SaveResult(
                (CVisualTree *)((char *)this + 2520),
                (struct FastRegion::Internal::CWorkBuffer *)&v70);
        if ( v72 != v71 )
          operator delete(v71);
        goto LABEL_59;
      }
      if ( v25 != (const struct FastRegion::Internal::CRgnData **)&lpMem )
      {
        v27 = (int *)((char *)this + 2528);
        v28 = &v67 + 2 * v21 - 2;
        v30 = v28[1] + 8 * v21 - v20 - (v29 + 68);
        v31 = v30 + (_DWORD)v28 + 12;
        v32 = 60;
        if ( (CVisualTree *)((char *)this + 2528) != v26 )
          v32 = *v27;
        if ( v32 >= v31 )
        {
          v33 = (int **)((char *)this + 2520);
          goto LABEL_51;
        }
        v52 = MIDL_user_allocate(v31);
        if ( !v52 )
        {
          v45 = -2147024882;
          goto LABEL_59;
        }
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)this + 315);
        v21 = v64;
        v33 = (int **)((char *)this + 2520);
        *((_QWORD *)this + 315) = v52;
        *v27 = v31;
LABEL_51:
        v34 = *v33;
        v35 = 0;
        *v34 = v21;
        v34[1] = v65;
        v34[2] = v66;
        v36 = v68;
        v37 = (char *)&v67 + v68;
        v38 = (char *)&v34[2 * v21 + 3];
        if ( v21 > 0 )
        {
          v39 = v34 + 3;
          do
          {
            *v39 = *(_DWORD *)((char *)v39 + (char *)&v64 - (char *)v34);
            v39 += 2;
            v40 = v35++;
            v34[2 * v40 + 4] = (unsigned int)(&v67 + 2 * v40)
                             + 4 * ((v38 - v37) >> 2)
                             + *(&v67 + 2 * v40 + 1)
                             - ((_DWORD)v34
                              + 8 * v40
                              + 12);
          }
          while ( v35 < *v34 );
          v36 = v68;
        }
        v42 = (unsigned __int64)(int)((unsigned int)(&v67 + 2 * v64 - 2) + *(&v67 + 2 * v64 - 1) - (v41 + 68) - v36) >> 2;
        v43 = (int)v42;
        if ( (int)v42 > 0 )
        {
          v44 = v37 - v38;
          do
          {
            *(_DWORD *)v38 = *(_DWORD *)&v38[v44];
            v38 += 4;
            --v43;
          }
          while ( v43 );
        }
      }
      v45 = 0;
LABEL_59:
      if ( v45 < 0 )
        goto LABEL_60;
      v49 = lpMem;
      if ( &v64 != lpMem && lpMem )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v49);
      }
    }
LABEL_67:
    *((_BYTE *)this + 2630) |= (*(__int64 (__fastcall **)(CLegacyRenderTarget *))(*(_QWORD *)v5 + 40LL))(v5);
    v46 = *((float *)this + 648);
    v47 = *(float (__fastcall **)(CLegacyRenderTarget *))(*(_QWORD *)v5 + 48LL);
    if ( v47 == CLegacyRenderTarget::GetInflationScale )
      InflationScale = CLegacyRenderTarget::GetInflationScale(v5);
    else
      v47(v5);
    InflationScale = fmaxf(InflationScale, v46);
    ++v4;
    *((float *)this + 648) = InflationScale;
  }
  if ( v58 )
    goto LABEL_62;
}
