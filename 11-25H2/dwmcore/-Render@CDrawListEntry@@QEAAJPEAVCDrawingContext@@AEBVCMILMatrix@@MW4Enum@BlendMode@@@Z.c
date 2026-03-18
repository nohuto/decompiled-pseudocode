/*
 * XREFs of ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800D57D0
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800D4880 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     ?OccludeBy@CMegaRectBatchCommand@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800653E0 (-OccludeBy@CMegaRectBatchCommand@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@_N@Z @ 0x1800927D0 (-InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatri.c)
 *     ?AddCpuClipAntialiasDrawList@CDrawingContext@@QEAAJPEAVCDrawListEntry@@@Z @ 0x180095260 (-AddCpuClipAntialiasDrawList@CDrawingContext@@QEAAJPEAVCDrawListEntry@@@Z.c)
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x180095C20 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800A42B0 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLargestOccluder@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NHPEAV2@@Z @ 0x1800CB080 (-GetLargestOccluder@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x1800DF730 (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     ?SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1801449B0 (-SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBa.c)
 *     ?ColorDWFromStraightColorF@@YAKAEBU_D3DCOLORVALUE@@@Z @ 0x180167B50 (-ColorDWFromStraightColorF@@YAKAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?BuildPrimitiveFromReconstructableDrawList@CDrawListEntryBuilder@@SAJPEBVCReconstructableDrawListEntry@@PEAPEAVCDrawListPrimitive@@@Z @ 0x180169888 (-BuildPrimitiveFromReconstructableDrawList@CDrawListEntryBuilder@@SAJPEBVCReconstructableDrawLis.c)
 *     ?CreateBatchCommand@CDrawListBatchManager@@QEAAJPEAPEAVCBatchCommand@@@Z @ 0x18018D1C0 (-CreateBatchCommand@CDrawListBatchManager@@QEAAJPEAPEAVCBatchCommand@@@Z.c)
 *     ?Destroy@CBatchCommand@@AEAAXXZ @ 0x18018D370 (-Destroy@CBatchCommand@@AEAAXXZ.c)
 *     ?ComputeVertexColor@CDrawListEntry@@QEBA?AU_D3DCOLORVALUE@@M@Z @ 0x18019DA90 (-ComputeVertexColor@CDrawListEntry@@QEBA-AU_D3DCOLORVALUE@@M@Z.c)
 *     ?InitializeMegaRectVisibleRegion@CMegaRectBatchCommand@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C4330 (-InitializeMegaRectVisibleRegion@CMegaRectBatchCommand@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntry::Render(__int64 a1, __int64 a2, __int64 a3, float a4, int a5)
{
  float v5; // xmm7_4
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  int v12; // eax
  float v13; // xmm6_4
  int v14; // r12d
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // ebx
  char v18; // bl
  __int64 v19; // rax
  _BYTE *v20; // r13
  unsigned int v21; // ebx
  __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // ebx
  _BYTE *v25; // rsi
  __int64 v26; // rcx
  bool v27; // zf
  __int64 v28; // r13
  int v29; // esi
  CBatchCommand *v30; // r13
  CBatchCommand *v31; // rbx
  CBatchCommand *v32; // rsi
  __int64 v33; // r12
  float *v34; // rcx
  __int64 v35; // rdx
  D3DVALUE v36; // eax
  int v37; // eax
  __int64 v38; // rax
  int v39; // ebx
  CBatchCommand *v40; // rcx
  __int64 v41; // rdx
  CBatchCommand *v42; // rdi
  void (__fastcall ***v43)(_QWORD, __int64); // rcx
  unsigned __int64 v44; // rax
  struct _D3DCOLORVALUE *v45; // rbx
  __int64 v46; // r11
  __int64 v47; // rdi
  int v48; // esi
  unsigned int v49; // r8d
  __int64 v50; // r10
  int v51; // r9d
  __int64 v52; // rdx
  float v53; // xmm2_4
  float v54; // xmm1_4
  float v55; // xmm0_4
  int v56; // ecx
  double v57; // xmm0_8
  float v58; // xmm1_4
  float v59; // xmm2_4
  float v60; // xmm1_4
  unsigned int v61; // ecx
  unsigned int v62; // eax
  int v63; // r9d
  int v64; // r10d
  __int64 v65; // r11
  int CurrentLightBufferForContextNoRef; // eax
  unsigned int v67; // edi
  CBatchCommand *v68; // rbx
  CBatchCommand *v69; // rbx
  CBatchCommand *v70; // [rsp+30h] [rbp-61h] BYREF
  unsigned int v71; // [rsp+38h] [rbp-59h]
  float v72; // [rsp+3Ch] [rbp-55h]
  CBatchCommand **v73; // [rsp+40h] [rbp-51h]
  struct CDrawListPrimitive *v74; // [rsp+48h] [rbp-49h] BYREF
  char v75; // [rsp+50h] [rbp-41h]
  __m128 v76; // [rsp+58h] [rbp-39h] BYREF
  struct _D3DCOLORVALUE v77; // [rsp+68h] [rbp-29h] BYREF
  __int64 v78; // [rsp+78h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+57h]

  *(_QWORD *)&v77.r = a3;
  v5 = a4;
  if ( *(char *)(a1 + 64) < 0 )
  {
    v8 = 0LL;
    switch ( *(_DWORD *)(a2 + 240) )
    {
      case 1:
        v8 = 1LL;
        break;
      case 2:
      case 3:
        v8 = 2LL;
        break;
      case 4:
      case 6:
        v8 = 3LL;
        break;
      case 5:
        v8 = 4LL;
        break;
      default:
        break;
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 56LL))(*(_QWORD *)(a1 + 24), v8);
  }
  v76.m128_i32[0] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  if ( v76.m128_i32[0] == 2 )
  {
    v9 = CDrawingContext::AddCpuClipAntialiasDrawList((CDrawingContext *)a2, (float **)a1);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCB,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistentry.cpp",
        (const char *)(unsigned int)v9);
      return v10;
    }
    return 0LL;
  }
  v12 = *(_DWORD *)(a1 + 64);
  if ( (v12 & 0x800) != 0 )
  {
    if ( *(float *)(a1 + 60) == 0.0 )
    {
      v13 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v14 = 15;
      if ( (v12 & 1) != 0 )
        v14 = 5;
      v5 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    }
    else
    {
      v13 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v14 = 19;
      v5 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    }
  }
  else
  {
    v13 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    if ( a4 != 1.0
      || (v15 = *(_QWORD *)(a1 + 40)) != 0
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v15 + 84) - 1.0) & _xmm) >= 0.0000011920929 )
    {
      v14 = a5;
    }
    else
    {
      v14 = a5;
      if ( !a5 && (v12 & 1) != 0 )
        v14 = 5;
    }
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 48LL))(*(_QWORD *)(a1 + 24), a2);
  v17 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF0,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistentry.cpp",
      (const char *)(unsigned int)v16);
    return v17;
  }
  if ( (*(_DWORD *)(a1 + 64) & 0x400) != 0 )
  {
    if ( CDrawingContext::IsWarpFastPathEnabled((CDrawingContext *)a2) )
    {
      v19 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL) + 24LL))(
              *(_QWORD *)(a2 + 32) + 8LL,
              &v78);
      v20 = *(_BYTE **)(a1 + 24);
      v21 = *(_DWORD *)(v19 + 8);
      v22 = *(_QWORD *)v20;
      v71 = v21;
      v23 = (*(__int64 (__fastcall **)(_BYTE *))(v22 + 24))(v20);
      LODWORD(v78) = v23;
      if ( v23 )
      {
        v24 = 0;
        v25 = v20 + 64;
        while ( 1 )
        {
          if ( _bittest(&v23, v24) )
          {
            v26 = *(_QWORD *)((*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v20 + 16LL))(v20, v24) + 8);
            if ( !v26 )
              goto LABEL_28;
            if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 64LL))(v26, v71) )
              goto LABEL_28;
            v27 = *v25 == 2;
            BYTE2(v72) = v25[2];
            if ( v27 )
              goto LABEL_28;
            v23 = v78;
          }
          ++v24;
          v25 += 3;
          if ( v24 >= 2 )
            goto LABEL_41;
        }
      }
      if ( v21 == 1 )
        v18 = 0;
      else
LABEL_41:
        v18 = 1;
    }
    else
    {
      v18 = 0;
    }
  }
  else
  {
LABEL_28:
    v18 = 0;
  }
  v28 = *(_QWORD *)(a2 + 40);
  v78 = v28;
  v70 = 0LL;
  v73 = &v70;
  v74 = 0LL;
  v75 = 1;
  v29 = CDrawListBatchManager::CreateBatchCommand((CDrawListBatchManager *)(v28 + 24), &v74);
  if ( v75 )
  {
    v30 = *v73;
    *v73 = v74;
    if ( v30 )
    {
      CBatchCommand::Destroy(v30);
      operator delete(v30, 0xB8uLL);
    }
    v28 = v78;
  }
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistentry.cpp",
      (const char *)(unsigned int)v29);
    v31 = v70;
    if ( v70 )
    {
      CBatchCommand::Destroy(v70);
      operator delete(v31, 0xB8uLL);
    }
    return (unsigned int)v29;
  }
  CBatchCommand::InitializeForRendering(
    (__int64)v70,
    (unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden))a1,
    v14,
    v5,
    *(__int64 *)&v77.r,
    v18);
  if ( v76.m128_i32[0] == 1 )
  {
    v32 = v70;
    if ( *(_DWORD *)v70 == 4 )
    {
      *(struct _D3DCOLORVALUE *)&v77.r = 0LL;
      CDrawingContext::GetClipBoundsWorld(a2, &v77.r);
      CMegaRectBatchCommand::InitializeMegaRectVisibleRegion(v32, &v77);
      v33 = *(_QWORD *)(a2 + 7960);
      v76 = 0uLL;
      if ( v33 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(a2 + 24) + 8LL))(a2 + 24) )
      {
        v34 = (float *)*((_QWORD *)v32 + 12);
        v35 = *(int *)v34;
        if ( (_DWORD)v35 )
        {
          v77.r = v34[1];
          v77.b = v34[2];
          v36 = v34[3];
          v77.a = v34[2 * v35 + 1];
          v77.g = v36;
          *(struct _D3DCOLORVALUE *)&v77.r = (struct _D3DCOLORVALUE)_mm_mul_ps(
                                                                      _mm_cvtepi32_ps(_mm_loadu_si128((const __m128i *)&v77)),
                                                                      (__m128)_xmm);
        }
        else
        {
          *(_QWORD *)&v77.b = 0LL;
          *(_QWORD *)&v77.r = 0LL;
        }
        v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 24) + 8LL))(a2 + 24);
        COcclusionContext::GetLargestOccluder(v33, (const struct D2D_RECT_F *)&v77, 1, v37, &v76);
      }
      CMegaRectBatchCommand::OccludeBy((__int64)v32, &v76);
    }
    else if ( !v18 )
    {
      v38 = *(_QWORD *)(a1 + 16);
      if ( !*(_DWORD *)(v38 + 8)
        && *(float *)(v38 + 64) > *(float *)(v38 + 56)
        && *(float *)(v38 + 68) > *(float *)(v38 + 60) )
      {
        v76.m128_u64[0] = 0LL;
        v73 = (CBatchCommand **)&v76;
        v74 = 0LL;
        v75 = 1;
        v39 = CDrawListEntryBuilder::BuildPrimitiveFromReconstructableDrawList(
                (const struct CReconstructableDrawListEntry *)a1,
                &v74);
        if ( v75 )
        {
          v40 = *v73;
          *v73 = v74;
          if ( v40 )
            (**(void (__fastcall ***)(CBatchCommand *, __int64))v40)(v40, 1LL);
        }
        if ( v39 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xC4,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\reconstructabledrawlistentry.cpp",
            (const char *)(unsigned int)v39);
          if ( v76.m128_u64[0] )
            (**(void (__fastcall ***)(unsigned __int64, __int64))v76.m128_u64[0])(v76.m128_u64[0], 1LL);
          v41 = 289LL;
          goto LABEL_70;
        }
        v43 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 16);
        v44 = v76.m128_u64[0];
        v76.m128_u64[0] = 0LL;
        *(_QWORD *)(a1 + 16) = v44;
        if ( v43 )
        {
          (**v43)(v43, 1LL);
          if ( v76.m128_u64[0] )
            (**(void (__fastcall ***)(unsigned __int64, __int64))v76.m128_u64[0])(v76.m128_u64[0], 1LL);
        }
      }
    }
  }
  if ( *(_QWORD *)(a1 + 40) )
  {
    v45 = CDrawListEntry::ComputeVertexColor((CDrawListEntry *)a1, &v77, v13);
    v47 = *(_QWORD *)(v46 + 24);
    v48 = 8 * *(_DWORD *)(v46 + 16) + 16;
    if ( *(_DWORD *)(v46 + 12) )
    {
      v49 = 0;
      v50 = *(_QWORD *)(v46 + 32);
      if ( *(_DWORD *)(v46 + 8) )
      {
        v51 = 0;
        do
        {
          v52 = v51;
          ++v49;
          v51 += v48;
          v53 = *(float *)(v52 + v50 + 12);
          v54 = (float)(v53 * v45->b) * 255.0;
          v55 = (float)((float)(v53 * v45->a) * 255.0) + 6291456.25;
          v76.m128_f32[0] = v55;
          v56 = LODWORD(v55) << 23;
          v57 = v54;
          v58 = v53;
          v59 = (float)(v53 * v45->r) * 255.0;
          v60 = (float)(v58 * v45->g) * 255.0;
          *(float *)&v57 = v57 + 6291456.25;
          LODWORD(v78) = LODWORD(v57);
          v61 = (LODWORD(v57) << 15) & 0xFFFF00FF | v56 & 0xFF0000FF;
          *(float *)&v57 = v60 + 6291456.25;
          v71 = LODWORD(v57);
          v72 = v59 + 6291456.25;
          *(_DWORD *)(v52 + v47 + 12) = ((int)(LODWORD(v72) << 10) >> 11) | (((int)(LODWORD(v57) << 10) >> 3) | v61) & 0xFFFFFF00;
        }
        while ( v49 < *(_DWORD *)(v46 + 8) );
      }
    }
    else if ( *(_DWORD *)(v46 + 8) )
    {
      do
      {
        v62 = ColorDWFromStraightColorF(v45);
        *(_DWORD *)(v63 + v47 + 12) = v62;
      }
      while ( (unsigned int)(v64 + 1) < *(_DWORD *)(v65 + 8) );
    }
  }
  v76.m128_u64[0] = 0LL;
  if ( !*(_DWORD *)(a2 + 652) )
  {
    if ( *(_DWORD *)(a2 + 456) )
    {
      CurrentLightBufferForContextNoRef = CLightStack::RetrieveCurrentLightBufferForContextNoRef(
                                            (CLightStack *)(a2 + 424),
                                            (struct CDrawingContext *)a2,
                                            (const struct CMILMatrix *)(a2 + 96),
                                            (struct CHwLightCollectionBuffer **)&v76);
      v67 = CurrentLightBufferForContextNoRef;
      if ( CurrentLightBufferForContextNoRef < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x12D,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistentry.cpp",
          (const char *)(unsigned int)CurrentLightBufferForContextNoRef);
        v68 = v70;
        if ( v70 )
        {
          CBatchCommand::Destroy(v70);
          operator delete(v68, 0xB8uLL);
        }
        return v67;
      }
    }
  }
  v39 = CD2DContext::SubmitRenderCommand((CD2DContext *)(v28 + 16));
  if ( v39 >= 0 )
  {
    v69 = v70;
    if ( v70 )
    {
      CBatchCommand::Destroy(v70);
      operator delete(v69, 0xB8uLL);
    }
    return 0LL;
  }
  v41 = 313LL;
LABEL_70:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v41,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistentry.cpp",
    (const char *)(unsigned int)v39);
  v42 = v70;
  if ( v70 )
  {
    CBatchCommand::Destroy(v70);
    operator delete(v42, 0xB8uLL);
  }
  return (unsigned int)v39;
}
