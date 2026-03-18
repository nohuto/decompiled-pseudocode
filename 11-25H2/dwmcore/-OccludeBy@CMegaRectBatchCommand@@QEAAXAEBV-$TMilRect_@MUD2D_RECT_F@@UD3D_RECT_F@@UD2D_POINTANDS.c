/*
 * XREFs of ?OccludeBy@CMegaRectBatchCommand@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800653E0
 * Callers:
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800D57D0 (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180066BD0 (-EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180066E70 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

void __fastcall CMegaRectBatchCommand::OccludeBy(__int64 a1, __m128 *a2)
{
  __int64 v2; // rdi
  __m128 v3; // xmm0
  __m128 v4; // xmm1
  __m128i v5; // xmm2
  int v6; // r8d
  int v7; // r9d
  int v8; // eax
  int v9; // edx
  int v10; // esp
  const struct FastRegion::Internal::CRgnData *v11; // rcx
  int v12; // eax
  FastRegion::Internal::CRgnData *v13; // rcx
  int *v14; // rbx
  int v15; // esi
  int v16; // r12d
  int *v17; // r14
  int v18; // esi
  int v19; // eax
  int v20; // ecx
  int v21; // esi
  const struct FastRegion::Internal::CRgnData *v22; // r9
  _DWORD *v23; // r8
  __int64 v24; // r10
  _DWORD *v25; // r11
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r10
  void *v31; // rbx
  int v32; // r15d
  HANDLE ProcessHeap; // rax
  FastRegion::Internal::CRgnData *v34; // rax
  void *v35; // r15
  _DWORD v36[3]; // [rsp+28h] [rbp-D8h] BYREF
  _DWORD v37[2]; // [rsp+34h] [rbp-CCh] BYREF
  _DWORD v38[13]; // [rsp+3Ch] [rbp-C4h] BYREF
  int v39; // [rsp+70h] [rbp-90h]
  LPVOID v40; // [rsp+78h] [rbp-88h]
  _BYTE v41[256]; // [rsp+80h] [rbp-80h] BYREF
  void *retaddr; // [rsp+1B8h] [rbp+B8h]

  if ( a2->m128_f32[2] <= a2->m128_f32[0] )
    return;
  if ( a2->m128_f32[3] <= a2->m128_f32[1] )
    return;
  v2 = a1 + 96;
  v3 = _mm_mul_ps(_mm_add_ps(*a2, g_halfFixedPointForRounding), (__m128)_xmm);
  v4 = _mm_cmplt_ps(DirectX::g_XMMaxInt, v3);
  v5 = (__m128i)_mm_or_ps(_mm_and_ps(v4, DirectX::g_XMAbsMask), _mm_andnot_ps(v4, (__m128)_mm_cvttps_epi32(v3)));
  v6 = _mm_cvtsi128_si32(v5);
  v7 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 8));
  if ( v6 >= v7 )
    return;
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 4));
  v9 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 12));
  if ( v8 >= v9 )
    return;
  v37[0] = v8;
  v36[0] = 2;
  v36[1] = v6;
  v36[2] = v7;
  v37[1] = v10 + 68 - (unsigned int)v37;
  v38[2] = v6;
  v38[3] = v7;
  v38[1] = v10 + 68 - (unsigned int)v38 + 8;
  v11 = *(const struct FastRegion::Internal::CRgnData **)v2;
  v38[0] = v9;
  if ( !*(_DWORD *)v11 )
    return;
  v12 = FastRegion::Internal::CRgnData::EstimateSizeSubtract(v11, (const struct FastRegion::Internal::CRgnData *)v36);
  v13 = (FastRegion::Internal::CRgnData *)v41;
  v40 = v41;
  v39 = v12;
  if ( (unsigned __int64)v12 > 0x100 )
  {
    v34 = (FastRegion::Internal::CRgnData *)MIDL_user_allocate(v12);
    v13 = v34;
    if ( !v34 )
    {
      if ( v41 != v40 )
        operator delete(v40);
      v15 = -2147024882;
LABEL_23:
      ModuleFailFastForHRESULT(v15, retaddr);
    }
    v40 = v34;
  }
  FastRegion::Internal::CRgnData::Subtract(
    v13,
    *(const struct FastRegion::Internal::CRgnData **)v2,
    (const struct FastRegion::Internal::CRgnData *)v36);
  v14 = (int *)v40;
  v15 = 0;
  if ( !*(_DWORD *)v40 )
  {
    **(_DWORD **)v2 = 0;
    goto LABEL_19;
  }
  if ( v41 != v40 )
  {
    v32 = v39;
    v39 = 0;
    v40 = v41;
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v2);
    *(_QWORD *)v2 = v14;
    *(_DWORD *)(v2 + 8) = v32;
    goto LABEL_19;
  }
  v16 = (_DWORD)v40 + 12;
  v17 = (int *)(v2 + 8);
  v18 = *((_DWORD *)v40 + 2 * *(_DWORD *)v40 + 2)
      + 8 * *(_DWORD *)v40
      - *((_DWORD *)v40 + 4)
      - 12
      + 8 * (*(_DWORD *)v40 - 1)
      + 24;
  v19 = 60;
  if ( v2 + 8 != *(_QWORD *)v2 )
    v19 = *v17;
  if ( v19 < v18 )
  {
    v35 = MIDL_user_allocate(v18);
    if ( !v35 )
    {
      v15 = -2147024882;
      goto LABEL_19;
    }
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v2);
    *(_QWORD *)v2 = v35;
    *v17 = v18;
  }
  v20 = *v14;
  v21 = 0;
  v22 = *(const struct FastRegion::Internal::CRgnData **)v2;
  *(_DWORD *)v22 = *v14;
  *((_DWORD *)v22 + 1) = v14[1];
  *((_DWORD *)v22 + 2) = v14[2];
  v23 = (_DWORD *)((char *)v22 + 8 * v20 + 12);
  v24 = (__int64)v14 + v14[4] + 12;
  if ( v20 > 0 )
  {
    v25 = (_DWORD *)((char *)v22 + 12);
    do
    {
      *v25 = *(_DWORD *)((char *)v25 + (char *)v14 - (char *)v22);
      v26 = v21;
      v25 += 2;
      ++v21;
      *((_DWORD *)v22 + 2 * v26 + 4) = (_DWORD)v14
                                     + 8 * v26
                                     + 4 * (((__int64)v23 - v24) >> 2)
                                     + v14[2 * v26 + 4]
                                     - ((_DWORD)v22
                                      + 8 * v26);
    }
    while ( v21 < *(_DWORD *)v22 );
  }
  v27 = (__int64)&v14[2 * *v14 + 1];
  v28 = (unsigned __int64)((int)v27 + *(_DWORD *)(v27 + 4) - v14[4] - v16) >> 2;
  v29 = (int)v28;
  if ( (int)v28 > 0 )
  {
    v30 = v24 - (_QWORD)v23;
    do
    {
      *v23 = *(_DWORD *)((char *)v23 + v30);
      ++v23;
      --v29;
    }
    while ( v29 );
  }
  v15 = 0;
LABEL_19:
  v31 = v40;
  if ( v41 != v40 )
  {
    if ( v40 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v31);
    }
  }
  if ( v15 < 0 )
    goto LABEL_23;
}
