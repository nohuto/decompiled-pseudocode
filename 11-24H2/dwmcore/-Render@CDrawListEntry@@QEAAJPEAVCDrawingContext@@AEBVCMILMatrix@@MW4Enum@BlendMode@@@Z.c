/*
 * XREFs of ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180052D80
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180051E30 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OccludeBy@CMegaRectBatchCommand@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002C0A0 (-OccludeBy@CMegaRectBatchCommand@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?ComputeVertexColor@CDrawListEntry@@QEBA?AU_D3DCOLORVALUE@@M@Z @ 0x180062BE0 (-ComputeVertexColor@CDrawListEntry@@QEBA-AU_D3DCOLORVALUE@@M@Z.c)
 *     ?GetLargestOccluder@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NHPEAV2@@Z @ 0x18009CF50 (-GetLargestOccluder@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800FEB30 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x180108D70 (-SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBa.c)
 *     ?Destroy@CBatchCommand@@AEAAXXZ @ 0x180146FF0 (-Destroy@CBatchCommand@@AEAAXXZ.c)
 *     ?InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@_N@Z @ 0x180147A30 (-InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatri.c)
 *     ?AddCpuClipAntialiasDrawList@CDrawingContext@@QEAAJPEAVCDrawListEntry@@@Z @ 0x18014A5F0 (-AddCpuClipAntialiasDrawList@CDrawingContext@@QEAAJPEAVCDrawListEntry@@@Z.c)
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18014AFB0 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?ColorDWFromStraightColorF@@YAKAEBU_D3DCOLORVALUE@@@Z @ 0x180162A50 (-ColorDWFromStraightColorF@@YAKAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x18016AD60 (-IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ.c)
 *     ?CreateBatchCommand@CDrawListBatchManager@@QEAAJPEAPEAVCBatchCommand@@@Z @ 0x180187E30 (-CreateBatchCommand@CDrawListBatchManager@@QEAAJPEAPEAVCBatchCommand@@@Z.c)
 *     ?BuildPrimitiveFromReconstructableDrawList@CDrawListEntryBuilder@@SAJPEBVCReconstructableDrawListEntry@@PEAPEAVCDrawListPrimitive@@@Z @ 0x18019517C (-BuildPrimitiveFromReconstructableDrawList@CDrawListEntryBuilder@@SAJPEBVCReconstructableDrawLis.c)
 *     ?InitializeMegaRectVisibleRegion@CMegaRectBatchCommand@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B46B0 (-InitializeMegaRectVisibleRegion@CMegaRectBatchCommand@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntry::Render(__int64 a1, __int64 a2, __int64 a3, float a4, unsigned int a5)
{
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // ebx
  int v11; // eax
  float v12; // xmm6_4
  unsigned int v13; // r12d
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // ebx
  char v17; // bl
  __int64 v18; // rax
  _BYTE *v19; // r13
  unsigned int v20; // ebx
  __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // ebx
  _BYTE *v24; // rsi
  __int64 v25; // rcx
  bool v26; // zf
  __int64 v27; // r13
  int v28; // esi
  CBatchCommand *v29; // r13
  CBatchCommand *v30; // rbx
  CBatchCommand *v31; // rsi
  __int64 v32; // r12
  float *v33; // rcx
  __int64 v34; // rdx
  D3DVALUE v35; // eax
  int v36; // eax
  int v37; // r8d
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
  struct CBatchCommand *v74; // [rsp+48h] [rbp-49h] BYREF
  char v75; // [rsp+50h] [rbp-41h]
  __m128 v76; // [rsp+58h] [rbp-39h] BYREF
  struct _D3DCOLORVALUE v77; // [rsp+68h] [rbp-29h] BYREF
  __int64 v78; // [rsp+78h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+57h]

  *(_QWORD *)&v77.r = a3;
  if ( *(char *)(a1 + 64) < 0 )
  {
    v7 = 0LL;
    switch ( *(_DWORD *)(a2 + 240) )
    {
      case 1:
        v7 = 1LL;
        break;
      case 2:
      case 3:
        v7 = 2LL;
        break;
      case 4:
      case 6:
        v7 = 3LL;
        break;
      case 5:
        v7 = 4LL;
        break;
      default:
        break;
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 56LL))(*(_QWORD *)(a1 + 24), v7);
  }
  v76.m128_i32[0] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  if ( v76.m128_i32[0] == 2 )
  {
    v8 = CDrawingContext::AddCpuClipAntialiasDrawList((CDrawingContext *)a2, (struct CDrawListEntry *)a1);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCB,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistentry.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
    return 0LL;
  }
  v11 = *(_DWORD *)(a1 + 64);
  if ( (v11 & 0x800) != 0 )
  {
    if ( *(float *)(a1 + 60) == 0.0 )
    {
      v12 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v13 = 15;
      if ( (v11 & 1) != 0 )
        v13 = 5;
    }
    else
    {
      v12 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v13 = 19;
    }
  }
  else
  {
    v12 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    if ( a4 != 1.0
      || (v14 = *(_QWORD *)(a1 + 40)) != 0
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v14 + 84) - 1.0) & _xmm) >= 0.0000011920929 )
    {
      v13 = a5;
    }
    else
    {
      v13 = a5;
      if ( !a5 && (v11 & 1) != 0 )
        v13 = 5;
    }
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 48LL))(*(_QWORD *)(a1 + 24), a2);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF0,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistentry.cpp",
      (const char *)(unsigned int)v15);
    return v16;
  }
  if ( (*(_DWORD *)(a1 + 64) & 0x400) != 0 )
  {
    if ( CDrawingContext::IsWarpFastPathEnabled((CDrawingContext *)a2) )
    {
      v18 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL) + 24LL))(
              *(_QWORD *)(a2 + 32) + 8LL,
              &v78);
      v19 = *(_BYTE **)(a1 + 24);
      v20 = *(_DWORD *)(v18 + 8);
      v21 = *(_QWORD *)v19;
      v71 = v20;
      v22 = (*(__int64 (__fastcall **)(_BYTE *))(v21 + 24))(v19);
      LODWORD(v78) = v22;
      if ( v22 )
      {
        v23 = 0;
        v24 = v19 + 64;
        while ( 1 )
        {
          if ( _bittest(&v22, v23) )
          {
            v25 = *(_QWORD *)((*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v19 + 16LL))(v19, v23) + 8);
            if ( !v25 )
              goto LABEL_28;
            if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v25 + 64LL))(v25, v71) )
              goto LABEL_28;
            v26 = *v24 == 2;
            BYTE2(v72) = v24[2];
            if ( v26 )
              goto LABEL_28;
            v22 = v78;
          }
          ++v23;
          v24 += 3;
          if ( v23 >= 2 )
            goto LABEL_41;
        }
      }
      if ( v20 == 1 )
        v17 = 0;
      else
LABEL_41:
        v17 = 1;
    }
    else
    {
      v17 = 0;
    }
  }
  else
  {
LABEL_28:
    v17 = 0;
  }
  v27 = *(_QWORD *)(a2 + 40);
  v78 = v27;
  v70 = 0LL;
  v73 = &v70;
  v74 = 0LL;
  v75 = 1;
  v28 = CDrawListBatchManager::CreateBatchCommand((CDrawListBatchManager *)(v27 + 24), &v74);
  if ( v75 )
  {
    v29 = *v73;
    *v73 = v74;
    if ( v29 )
    {
      CBatchCommand::Destroy(v29);
      operator delete(v29, 0xB8uLL);
    }
    v27 = v78;
  }
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistentry.cpp",
      (const char *)(unsigned int)v28);
    v30 = v70;
    if ( v70 )
    {
      CBatchCommand::Destroy(v70);
      operator delete(v30, 0xB8uLL);
    }
    return (unsigned int)v28;
  }
  CBatchCommand::InitializeForRendering(v70, a1, v13);
  if ( v76.m128_i32[0] == 1 )
  {
    v31 = v70;
    if ( *(_DWORD *)v70 == 4 )
    {
      *(struct _D3DCOLORVALUE *)&v77.r = 0LL;
      CDrawingContext::GetClipBoundsWorld(a2, &v77);
      CMegaRectBatchCommand::InitializeMegaRectVisibleRegion(v31, &v77);
      v32 = *(_QWORD *)(a2 + 7960);
      v76 = 0uLL;
      if ( v32 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(a2 + 24) + 8LL))(a2 + 24) )
      {
        v33 = (float *)*((_QWORD *)v31 + 12);
        v34 = *(int *)v33;
        if ( (_DWORD)v34 )
        {
          v77.r = v33[1];
          v77.b = v33[2];
          v35 = v33[3];
          v77.a = v33[2 * v34 + 1];
          v77.g = v35;
          *(struct _D3DCOLORVALUE *)&v77.r = (struct _D3DCOLORVALUE)_mm_mul_ps(
                                                                      _mm_cvtepi32_ps(_mm_loadu_si128((const __m128i *)&v77)),
                                                                      (__m128)_xmm);
        }
        else
        {
          *(_QWORD *)&v77.b = 0LL;
          *(_QWORD *)&v77.r = 0LL;
        }
        v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 24) + 8LL))(a2 + 24);
        LOBYTE(v37) = 1;
        COcclusionContext::GetLargestOccluder(v32, (unsigned int)&v77, v37, v36, (__int64)&v76);
      }
      CMegaRectBatchCommand::OccludeBy((__int64)v31, &v76);
    }
    else if ( !v17 )
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
    v45 = CDrawListEntry::ComputeVertexColor((CDrawListEntry *)a1, &v77, v12);
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
  v39 = CD2DContext::SubmitRenderCommand((CD2DContext *)(v27 + 16));
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
