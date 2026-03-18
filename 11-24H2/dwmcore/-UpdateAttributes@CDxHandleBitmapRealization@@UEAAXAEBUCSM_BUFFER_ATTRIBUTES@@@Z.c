/*
 * XREFs of ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1800299F0
 * Callers:
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEBUCSM_RGNDATA_@@PEBUScrollOptimization@@@Z @ 0x180028BD0 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 *     ?UpdateAttributes@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18020AAC0 (-UpdateAttributes@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@.c)
 *     ?UpdateAttributes@CDxHandleStereoBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1802D8F40 (-UpdateAttributes@CDxHandleStereoBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180027A38 (-IsInfinite@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180027EE0 (-IsEmpty@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x18005A680 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?CalcDisplayRestriction@CBitmapRealization@@KA?AVDisplayId@@_NPEAUHMONITOR__@@@Z @ 0x1800685A4 (-CalcDisplayRestriction@CBitmapRealization@@KA-AVDisplayId@@_NPEAUHMONITOR__@@@Z.c)
 *     ?InvalidateDecodeBitmap@CBitmapRealization@@IEAAX_N@Z @ 0x1801DF850 (-InvalidateDecodeBitmap@CBitmapRealization@@IEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDxHandleBitmapRealization::UpdateAttributes(
        CDxHandleBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  int *v2; // rbx
  int v4; // eax
  char *v5; // rbp
  char *v6; // r15
  char *v8; // rcx
  int v9; // r13d
  char v10; // al
  __m128i v11; // xmm2
  int *v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  char *v15; // r12
  __int64 v16; // rdx
  char v17; // di
  int v18; // eax
  char *v19; // rcx
  char *v20; // rbx
  char *v21; // r14
  _DWORD *v22; // rax
  __int64 v23; // rdi
  void (__fastcall *v24)(__int64, _QWORD); // rbx
  unsigned int *v25; // rax
  char *v26; // r15
  int v27; // edx
  _DWORD *v28; // rcx
  int v29; // r8d
  int v30; // r10d
  int v31; // r9d
  __int64 v32; // rbx
  struct ID2DBitmapCacheSource *v33; // rdx
  int v34; // [rsp+24h] [rbp-64h]
  char v35; // [rsp+90h] [rbp+8h]
  int v36; // [rsp+98h] [rbp+10h] BYREF
  int v37; // [rsp+A0h] [rbp+18h] BYREF
  char v38; // [rsp+A8h] [rbp+20h] BYREF

  v2 = (int *)((char *)this - 224);
  v4 = *((_DWORD *)this - 56);
  v5 = (char *)this - 176;
  v6 = (char *)this - 248;
  v8 = (char *)this - 248;
  v9 = 3;
  if ( v4 )
    v9 = v4;
  v36 = *(_DWORD *)v5;
  (*(void (__fastcall **)(char *, int *))(*(_QWORD *)v6 + 48LL))(v8, &v37);
  v10 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v6 + 56LL))(v6);
  v11 = *(__m128i *)((char *)this - 172);
  v12 = v2;
  v13 = *((_DWORD *)a2 + 34) & 1;
  v35 = v10;
  v34 = v11.m128i_i32[1];
  if ( (_DWORD)v13 == (*((_DWORD *)this - 22) & 1) )
  {
    if ( *((_QWORD *)a2 + 1) == *((_QWORD *)this - 27) )
      goto LABEL_5;
    v12 = (int *)((char *)this - 224);
    v5 = (char *)this - 176;
  }
  v6 = (char *)this - 248;
  *((_DWORD *)this - 8) = *(_DWORD *)CBitmapRealization::CalcDisplayRestriction(
                                       &v38,
                                       v13,
                                       *((_QWORD *)a2 + 1),
                                       v12,
                                       v11.m128i_i64[0]);
LABEL_5:
  v14 = *((_QWORD *)this + 6);
  v15 = (char *)this + 48;
  *(_OWORD *)v2 = *(_OWORD *)a2;
  *((_OWORD *)v2 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)v2 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)v2 + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)v2 + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)v2 + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)v2 + 6) = *((_OWORD *)a2 + 6);
  *((_OWORD *)v2 + 7) = *((_OWORD *)a2 + 7);
  *((_OWORD *)v2 + 8) = *((_OWORD *)a2 + 8);
  if ( v14 )
  {
    v16 = (unsigned int)*v12;
    v17 = 0;
    v18 = 3;
    v19 = v5;
    v20 = (char *)this + 48;
    if ( (_DWORD)v16 )
    {
      v18 = *v12;
      v19 = (char *)this - 176;
      v20 = (char *)this + 48;
      v6 = (char *)this - 248;
    }
    v21 = v6;
    if ( v9 != v18 )
    {
      if ( (_DWORD)v16 )
        v5 = v19;
      else
        v16 = 3LL;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v14 + 72) + 144LL))(v14 + 72, v16);
      v17 = 1;
      v21 = (char *)this - 248;
      v15 = v20;
    }
    if ( v36 != *(_DWORD *)v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)v15 + 72LL) + 152LL))(*(_QWORD *)v15 + 72LL);
      v17 = 1;
    }
    v22 = (_DWORD *)(*(__int64 (__fastcall **)(char *, int *))(*((_QWORD *)this - 31) + 48LL))(v6, &v36);
    if ( v37 == *v22 )
    {
      v26 = v21;
    }
    else
    {
      v23 = *(_QWORD *)v15;
      v24 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)v15 + 72LL) + 160LL);
      v25 = (unsigned int *)(*(__int64 (__fastcall **)(char *, int *))(*(_QWORD *)v21 + 48LL))(v21, &v36);
      v24(v23 + 72, *v25);
      v17 = 1;
      v15 = (char *)this + 48;
      v26 = (char *)this - 248;
    }
    if ( v35 != (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v21 + 56LL))(v21) )
    {
      v32 = *(_QWORD *)v15;
      *(_BYTE *)(v32 + 236) = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v26 + 56LL))(v26);
    }
    if ( v17 )
    {
      v33 = (struct ID2DBitmapCacheSource *)(*(_QWORD *)v15 + 88LL);
      if ( !*(_QWORD *)v15 )
        v33 = 0LL;
      CD2DBitmapCache::InitializeCache((CDxHandleBitmapRealization *)((char *)this - 328), v33);
      CBitmapRealization::InvalidateDecodeBitmap((CDxHandleBitmapRealization *)((char *)this - 328), 0);
    }
  }
  v27 = _mm_cvtsi128_si32(v11);
  v28 = (_DWORD *)((char *)this - 172);
  if ( v27 != *((_DWORD *)this - 43) )
  {
    v29 = v34;
    goto LABEL_22;
  }
  v29 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 4));
  if ( v29 != v28[1] )
  {
LABEL_22:
    v30 = v11.m128i_i32[2];
    goto LABEL_23;
  }
  v30 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 8));
  if ( v30 == v28[2] )
  {
    v31 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 12));
    if ( v31 == v28[3] )
      return;
    goto LABEL_24;
  }
LABEL_23:
  v31 = v11.m128i_i32[3];
LABEL_24:
  if ( (v30 > v27 && v31 > v29 || !TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEmpty(v28))
    && ((v27 != 0x80000000 || v30 != 0x7FFFFFFF) && (v29 != 0x80000000 || v31 != 0x7FFFFFFF)
     || !TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsInfinite(v28)) )
  {
    *((_BYTE *)this - 8) = 0;
  }
}
