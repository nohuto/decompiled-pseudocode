/*
 * XREFs of ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005E4C0
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004DFE0 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004F5D0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180056CC0 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEA_N@Z @ 0x180057A60 (-GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180058110 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058F30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18005F120 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18005F7FC (--1CRegionShape@@UEAA@XZ.c)
 *     ?GetBounds@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007CA10 (-GetBounds@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007CAA0 (-GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180088CB0 (-GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18008B4A0 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180099A00 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180099B50 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x1800AACE0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x1800AADF0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800AAEE0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x1800AB080 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800AB910 (--1CShapePtr@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetFlipExSurfaceClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801F3698 (-GetFlipExSurfaceClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowNode::GetContentBounds(CWindowNode *this, __int64 a2)
{
  int v2; // r13d
  unsigned int EffectiveBounds; // edi
  CSurfaceBrush *v6; // rcx
  struct D2D_SIZE_F *v7; // rdx
  __int64 (__fastcall *v8)(CSurfaceBrush *, struct D2D_SIZE_F *); // rax
  int Bounds; // eax
  int v10; // r15d
  bool (__fastcall *v11)(CWindowNode *__hidden); // rax
  bool v12; // zf
  __int64 v13; // rax
  __int128 v14; // xmm0
  CGeometry *v15; // rcx
  int ShapeData; // eax
  int v17; // r14d
  int v18; // ebx
  unsigned int v19; // eax
  CRectanglesShape *v21; // r14
  __int64 v22; // rdx
  CRectanglesShape *v23; // rbx
  char v24; // r12
  int v25; // r14d
  __int64 (__fastcall *v26)(__int64, struct D2D_RECT_F *, __int64); // rax
  __m128 *v27; // rcx
  __m128 v28; // xmm0
  __int64 v29; // rcx
  float bottom; // xmm2_4
  float right; // xmm3_4
  float left; // xmm1_4
  float top; // xmm4_4
  int v34; // eax
  FLOAT v35; // ecx
  FLOAT v36; // eax
  LONG **v37; // r12
  __int64 v38; // r14
  LONG *v39; // rax
  __int64 (__fastcall *v40)(LONG **, __int128 *, _QWORD); // rax
  FLOAT v41; // ecx
  int v42; // eax
  int v43; // r8d
  FLOAT v44; // edx
  float v45; // xmm5_4
  float v46; // xmm0_4
  float v47; // xmm1_4
  float v48; // xmm2_4
  float v49; // xmm4_4
  float v50; // xmm3_4
  BOOL v51; // ecx
  BOOL v52; // eax
  void *(__fastcall *v53)(CPolygonShape *__hidden, unsigned int); // r8
  BOOL v54; // eax
  __int64 v55; // rax
  int v56; // edx
  int *v57; // rcx
  __m128 v58; // xmm1
  float v59; // xmm4_4
  float v60; // xmm3_4
  float v61; // xmm2_4
  BOOL v62; // ecx
  BOOL v63; // eax
  unsigned int v64; // eax
  int v65; // eax
  __int64 **Flip; // rax
  int v67; // eax
  __int64 v68; // r11
  __int64 v69; // r11
  __int64 v70; // r10
  float v71; // [rsp+30h] [rbp-D0h]
  CRectanglesShape *v72; // [rsp+38h] [rbp-C8h] BYREF
  FLOAT v73; // [rsp+40h] [rbp-C0h]
  FLOAT v74; // [rsp+44h] [rbp-BCh]
  unsigned __int128 v75; // [rsp+48h] [rbp-B8h] BYREF
  struct tagRECT v76; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v77; // [rsp+68h] [rbp-98h] BYREF
  __int128 v78; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v79[3]; // [rsp+90h] [rbp-70h] BYREF
  int v80; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v81; // [rsp+E8h] [rbp-18h]

  v2 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)a2 = 0LL;
  EffectiveBounds = 0;
  v6 = (CSurfaceBrush *)*((_QWORD *)this + 32);
  if ( v6 )
  {
    v7 = (struct D2D_SIZE_F *)((char *)this + 144);
    v8 = *(__int64 (__fastcall **)(CSurfaceBrush *, struct D2D_SIZE_F *))(*(_QWORD *)v6 + 184LL);
    if ( (char *)v8 == (char *)CBrush::GetBounds )
    {
      *(FLOAT *)(a2 + 8) = v7->width;
      *(_DWORD *)(a2 + 12) = *((_DWORD *)this + 37);
    }
    else
    {
      if ( v8 == CSurfaceBrush::GetBounds )
      {
        Bounds = CSurfaceBrush::GetBounds(v6, v7);
      }
      else if ( (char *)v8 == (char *)CNineGridBrush::GetBounds )
      {
        Bounds = CNineGridBrush::GetBounds(v6, v7, a2);
      }
      else
      {
        Bounds = ((__int64 (__fastcall *)(CSurfaceBrush *, struct D2D_SIZE_F *, __int64))v8)(v6, v7, a2);
      }
      EffectiveBounds = Bounds;
      if ( Bounds < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bounds, 0xE56u, 0LL);
    }
  }
  v10 = 1;
  v11 = *(bool (__fastcall **)(CWindowNode *__hidden))(*(_QWORD *)this + 296LL);
  if ( v11 == CWindowNode::ShouldHitTest )
  {
    if ( *((_BYTE *)this + 745) || !*((_QWORD *)this + 99) )
      goto LABEL_10;
  }
  else if ( !v11(this) )
  {
    goto LABEL_10;
  }
  v55 = *((_QWORD *)this + 28);
  if ( (*(_DWORD *)(v55 + 4) & 0x100000) != 0 )
  {
    v56 = *(_DWORD *)(v55 + 12);
    v57 = (int *)(v55 + 12);
    if ( (v56 & 0x7F000000) != 0xC000000 )
    {
      do
      {
        v57 = (int *)((char *)v57 + (v56 & 0xFFFFFF) + 4);
        v56 = *v57;
      }
      while ( (*v57 & 0x7F000000) != 0xC000000 );
    }
    v58 = *(__m128 *)(v57 + 1);
    v76.left = v58.m128_i32[0];
    v59 = _mm_shuffle_ps(v58, v58, 170).m128_f32[0];
    LODWORD(v60) = _mm_shuffle_ps(v58, v58, 85).m128_u32[0];
    LODWORD(v61) = _mm_shuffle_ps(v58, v58, 255).m128_u32[0];
    *(float *)&v76.top = v60;
    *(float *)&v76.right = v59;
    *(float *)&v76.bottom = v61;
    if ( v59 > v58.m128_f32[0] && v61 > v60 )
    {
      v62 = *(float *)(a2 + 8) <= *(float *)a2 || *(float *)(a2 + 12) <= *(float *)(a2 + 4);
      v63 = v59 <= v58.m128_f32[0] || v61 <= v60;
      if ( v62 )
      {
        if ( v63 )
        {
          *(_QWORD *)(a2 + 8) = 0LL;
          *(_QWORD *)a2 = 0LL;
        }
        else
        {
          *(struct tagRECT *)a2 = v76;
        }
      }
      else if ( !v63 )
      {
        if ( *(float *)a2 > v58.m128_f32[0] )
          *(_DWORD *)a2 = v58.m128_i32[0];
        if ( *(float *)(a2 + 4) > v60 )
          *(float *)(a2 + 4) = v60;
        if ( v59 > *(float *)(a2 + 8) )
          *(float *)(a2 + 8) = v59;
        if ( v61 > *(float *)(a2 + 12) )
          *(float *)(a2 + 12) = v61;
      }
    }
  }
LABEL_10:
  if ( (EffectiveBounds & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, EffectiveBounds, 0x1D0u, 0LL);
    return EffectiveBounds;
  }
  if ( !*((_BYTE *)this + 745) )
  {
    v12 = (*((_BYTE *)this + 888) & 8) == 0;
    v75 = 0LL;
    if ( !v12 )
    {
      v34 = CWindowNode::EnsureEffectiveSpriteClip(this);
      EffectiveBounds = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x1DEu, 0LL);
        return EffectiveBounds;
      }
      v35 = *((float *)this + 180);
      v36 = 0.0;
      EffectiveBounds = 0;
      v37 = (LONG **)*((_QWORD *)this + 110);
      v38 = HIDWORD(*((_QWORD *)this + 90));
      *(_QWORD *)&v75 = 0LL;
      v71 = v35;
      *((FLOAT *)&v75 + 2) = v35;
      HIDWORD(v75) = v38;
      if ( v37 )
      {
        v39 = *v37;
        v77 = 0LL;
        v40 = (__int64 (__fastcall *)(LONG **, __int128 *, _QWORD))*((_QWORD *)v39 + 6);
        if ( (char *)v40 == (char *)CRegionShape::GetTightBounds )
        {
          v76 = 0LL;
          if ( FastRegion::CRegion::GetBoundingRect(v37 + 2, &v76) )
          {
            *(float *)&v77 = (float)v76.left;
            *((float *)&v77 + 1) = (float)v76.top;
            *((float *)&v77 + 2) = (float)v76.right;
            *((float *)&v77 + 3) = (float)v76.bottom;
          }
        }
        else
        {
          v67 = v40(v37, &v77, 0LL);
          EffectiveBounds = v67;
          if ( v67 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v67, 0x1B2u, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, EffectiveBounds, 0x1DFu, 0LL);
            return EffectiveBounds;
          }
        }
        PixelAlign(&v72, &v77);
        if ( (int)v72 > 0 )
        {
          v2 = (int)v72;
          LODWORD(v75) = (_DWORD)v72;
        }
        v41 = *((float *)&v72 + 1);
        if ( SHIDWORD(v72) <= 0 )
          v41 = *((float *)&v75 + 1);
        else
          DWORD1(v75) = HIDWORD(v72);
        v42 = LODWORD(v73);
        if ( SLODWORD(v73) >= SLODWORD(v71) )
        {
          v42 = LODWORD(v71);
        }
        else
        {
          v71 = v73;
          *((FLOAT *)&v75 + 2) = v73;
        }
        v43 = v38;
        v44 = v74;
        if ( SLODWORD(v74) < (int)v38 )
        {
          *(FLOAT *)&v38 = v74;
          *((FLOAT *)&v75 + 3) = v74;
        }
        if ( v42 <= v2 )
          goto LABEL_164;
        if ( SLODWORD(v74) >= v43 )
          v44 = *(float *)&v43;
        if ( SLODWORD(v44) <= SLODWORD(v41) )
        {
LABEL_164:
          LODWORD(v38) = 0;
          v2 = 0;
          v71 = 0.0;
          v75 = 0uLL;
        }
        CShape::IsAxisAlignedRectangle((CShape *)v37);
        v36 = *((float *)&v75 + 1);
        v35 = v71;
      }
      v45 = *(float *)a2;
      v46 = *(float *)(a2 + 8);
      v47 = (float)v2;
      v48 = (float)SLODWORD(v36);
      v49 = (float)SLODWORD(v35);
      v50 = (float)(int)v38;
      *(float *)&v76.left = (float)v2;
      *(float *)&v76.top = (float)SLODWORD(v36);
      *(float *)&v76.right = (float)SLODWORD(v35);
      *(float *)&v76.bottom = (float)(int)v38;
      v51 = v46 <= v45 || *(float *)(a2 + 12) <= *(float *)(a2 + 4);
      v52 = v49 <= v47 || v50 <= v48;
      if ( v51 )
      {
        if ( v52 )
        {
          *(_QWORD *)(a2 + 8) = 0LL;
          *(_QWORD *)a2 = 0LL;
        }
        else
        {
          *(struct tagRECT *)a2 = v76;
        }
      }
      else if ( !v52 )
      {
        if ( v45 > v47 )
          *(float *)a2 = v47;
        if ( *(float *)(a2 + 4) > v48 )
          *(float *)(a2 + 4) = v48;
        if ( v49 > *(float *)(a2 + 8) )
          *(float *)(a2 + 8) = v49;
        if ( v50 > *(float *)(a2 + 12) )
          *(float *)(a2 + 12) = v50;
      }
    }
    if ( (*((_BYTE *)this + 888) & 0x10) != 0 )
    {
      Flip = (__int64 **)CWindowNode::GetFlipExSurfaceClipShape(this, &v76);
      EffectiveBounds = CWindowNode::GetEffectiveBounds((__int64)this, *Flip, (int *)&v75, 0LL);
      CShapePtr::~CShapePtr((CShapePtr *)&v76);
      if ( (EffectiveBounds & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, EffectiveBounds, 0x1E5u, 0LL);
        return EffectiveBounds;
      }
      *(float *)&v76.left = (float)(int)v75;
      *(float *)&v76.top = (float)SDWORD1(v75);
      *(float *)&v76.right = (float)SDWORD2(v75);
      *(float *)&v76.bottom = (float)SHIDWORD(v75);
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(a2, &v76);
    }
  }
  if ( !*((_BYTE *)this + 745) && *((_QWORD *)this + 99) )
  {
    v13 = *((_QWORD *)this + 101);
    v75 = 0LL;
    if ( !v13 )
    {
      left = (float)(int)*((_QWORD *)this + 88);
      top = (float)(int)HIDWORD(*((_QWORD *)this + 88));
      right = (float)(int)*((_QWORD *)this + 89);
      bottom = (float)(int)HIDWORD(*((_QWORD *)this + 89));
      *(float *)&v75 = left;
      *((float *)&v75 + 3) = bottom;
      *((float *)&v75 + 1) = top;
      *((float *)&v75 + 2) = right;
LABEL_73:
      v54 = *(float *)(a2 + 8) <= *(float *)a2 || *(float *)(a2 + 12) <= *(float *)(a2 + 4);
      if ( right > left && bottom > top )
        v10 = 0;
      if ( v54 )
      {
        if ( v10 )
        {
          *(_QWORD *)(a2 + 8) = 0LL;
          *(_QWORD *)a2 = 0LL;
        }
        else
        {
          *(_OWORD *)a2 = v75;
        }
      }
      else if ( !v10 )
      {
        if ( *(float *)a2 > left )
          *(float *)a2 = left;
        if ( *(float *)(a2 + 4) > top )
          *(float *)(a2 + 4) = top;
        if ( right > *(float *)(a2 + 8) )
          *(float *)(a2 + 8) = right;
        if ( bottom > *(float *)(a2 + 12) )
          *(float *)(a2 + 12) = bottom;
      }
      return EffectiveBounds;
    }
    v12 = *(_BYTE *)(v13 + 160) == 0;
    *(_QWORD *)&v77 = 0LL;
    BYTE8(v77) = 0;
    if ( !v12 )
    {
      CShapePtr::~CShapePtr((CShapePtr *)&v77);
      v24 = 0;
      v23 = (CRectanglesShape *)&CRectanglesShape::sc_emptyShape;
      BYTE8(v77) = 0;
      *(_QWORD *)&v77 = &CRectanglesShape::sc_emptyShape;
      goto LABEL_25;
    }
    v14 = *((_OWORD *)this + 44);
    v79[1] = 0LL;
    v79[0] = &CRegionShape::`vftable';
    v80 = 0;
    v79[2] = &v80;
    v81 = 0LL;
    v78 = v14;
    CRegionShape::BuildFromRects(v79, &v78, 1LL);
    v15 = (CGeometry *)*((_QWORD *)this + 101);
    *(_QWORD *)&v76.left = 0LL;
    LOBYTE(v76.right) = 0;
    ShapeData = CGeometry::GetShapeData(v15, (const struct D2D_SIZE_F *)this + 18, (struct CShapePtr *)&v76);
    v17 = ShapeData;
    EffectiveBounds = ShapeData;
    if ( ShapeData < 0 )
    {
      v18 = ShapeData;
      v19 = 1575;
LABEL_20:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, v19, 0LL);
      CShapePtr::~CShapePtr((CShapePtr *)&v76);
      CRegionShape::~CRegionShape((CRegionShape *)v79);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x1FCu, 0LL);
      return EffectiveBounds;
    }
    v21 = *(CRectanglesShape **)&v76.left;
    v72 = 0LL;
    v18 = CShape::TryOptimizedCombinePaths(*(CShape **)&v76.left, 0LL, (char *)v79, 0LL, 1, &v72);
    EffectiveBounds = v18;
    if ( v18 < 0 )
    {
      v64 = 456;
    }
    else
    {
      v23 = v72;
      if ( v72 )
      {
LABEL_24:
        CShapePtr::~CShapePtr((CShapePtr *)&v77);
        *(_QWORD *)&v77 = v23;
        v24 = 1;
        BYTE8(v77) = 1;
        CShapePtr::~CShapePtr((CShapePtr *)&v76);
        CRegionShape::~CRegionShape((CRegionShape *)v79);
LABEL_25:
        v25 = -2003304309;
        if ( !v23 )
          goto LABEL_66;
        v26 = *(__int64 (__fastcall **)(__int64, struct D2D_RECT_F *, __int64))(*(_QWORD *)v23 + 48LL);
        if ( v26 == CRectanglesShape::GetTightBounds )
        {
          v27 = (__m128 *)*((_QWORD *)v23 + 2);
          if ( *((__m128 **)v23 + 3) == v27 )
          {
            left = 0.0;
            bottom = 0.0;
            right = 0.0;
            top = 0.0;
            EffectiveBounds = 0;
            v75 = 0uLL;
          }
          else
          {
            v28 = *v27;
            v75 = (unsigned __int128)*v27;
            v29 = *((_QWORD *)v23 + 2);
            if ( (unsigned __int64)((*((_QWORD *)v23 + 3) - v29) >> 4) > 1 )
            {
              v69 = 16LL;
              do
              {
                TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(&v75, v29 + v69);
                v69 = v68 + 16;
                v29 = *((_QWORD *)v23 + 2);
              }
              while ( v70 + 1 < (unsigned __int64)((*((_QWORD *)v23 + 3) - v29) >> 4) );
              bottom = *((float *)&v75 + 3);
              right = *((float *)&v75 + 2);
              top = *((float *)&v75 + 1);
              left = *(float *)&v75;
            }
            else
            {
              LODWORD(bottom) = _mm_shuffle_ps(v28, v28, 255).m128_u32[0];
              LODWORD(right) = _mm_shuffle_ps(v28, v28, 170).m128_u32[0];
              left = v28.m128_f32[0];
              LODWORD(top) = _mm_shuffle_ps(v28, v28, 85).m128_u32[0];
            }
            EffectiveBounds = 0;
          }
          goto LABEL_68;
        }
        if ( (char *)v26 == (char *)CRegionShape::GetTightBounds )
        {
          v76 = 0LL;
          if ( FastRegion::CRegion::GetBoundingRect((LONG **)v23 + 2, &v76) )
          {
            left = (float)v76.left;
            top = (float)v76.top;
            right = (float)v76.right;
            bottom = (float)v76.bottom;
          }
          else
          {
            bottom = 0.0;
            right = 0.0;
            top = 0.0;
            left = 0.0;
          }
          *(float *)&v75 = left;
          EffectiveBounds = 0;
          *((float *)&v75 + 1) = top;
          *((float *)&v75 + 2) = right;
          *((float *)&v75 + 3) = bottom;
LABEL_68:
          if ( v24 && v23 )
          {
            v53 = **(void *(__fastcall ***)(CPolygonShape *__hidden, unsigned int))v23;
            if ( v53 == CRectanglesShape::`scalar deleting destructor' )
            {
              CRectanglesShape::~CRectanglesShape(v23);
              CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v23);
            }
            else if ( v53 == CRoundedRectangleShape::`vector deleting destructor' )
            {
              CRoundedRectangleShape::~CRoundedRectangleShape(v23);
              CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v23);
            }
            else if ( v53 == CPolygonShape::`scalar deleting destructor' )
            {
              CPolygonShape::`scalar deleting destructor'(v23, 1u);
            }
            else
            {
              (**(void (__fastcall ***)(CRectanglesShape *, __int64))v23)(v23, 1LL);
            }
            left = *(float *)&v75;
            top = *((float *)&v75 + 1);
            right = *((float *)&v75 + 2);
            bottom = *((float *)&v75 + 3);
          }
          goto LABEL_73;
        }
        v65 = (char *)v26 == (char *)CRoundedRectangleShape::GetTightBounds
            ? CRoundedRectangleShape::GetTightBounds(v23, (struct D2D_RECT_F *)&v75, 0LL)
            : v26((__int64)v23, (struct D2D_RECT_F *)&v75, 0LL);
        v25 = v65;
        EffectiveBounds = v65;
        if ( v65 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v65, 0x140u, 0LL);
        }
        else
        {
LABEL_66:
          EffectiveBounds = v25;
          if ( v25 >= 0 )
          {
            bottom = *((float *)&v75 + 3);
            right = *((float *)&v75 + 2);
            top = *((float *)&v75 + 1);
            left = *(float *)&v75;
            goto LABEL_68;
          }
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x1FDu, 0LL);
        CShapePtr::~CShapePtr((CShapePtr *)&v77);
        return EffectiveBounds;
      }
      v18 = CShape::D2DCombine(v21, v22, (CRoundedRectangleShape *)v79, 0LL, 1, &v72);
      EffectiveBounds = v18;
      if ( v18 >= 0 )
      {
        v23 = v72;
        goto LABEL_24;
      }
      v64 = 467;
    }
    v17 = EffectiveBounds;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, EffectiveBounds, v64, 0LL);
    v19 = 1581;
    goto LABEL_20;
  }
  return EffectiveBounds;
}
