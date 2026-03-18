/*
 * XREFs of ?CalcRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180056FC0
 * Callers:
 *     ?Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z @ 0x18010AADC (-Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z.c)
 *     ?Initialize@CSubVisualTree@@MEAAJXZ @ 0x18022CF60 (-Initialize@CSubVisualTree@@MEAAJXZ.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180019310 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?IsOfType@?$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180026030 (-IsOfType@-$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@.c)
 *     ?GetBounds@CTreeEffect@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x18002721C (-GetBounds@CTreeEffect@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNo.c)
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18002723C (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800577E0 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180058110 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058F30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180088CB0 (-GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?IsInfinite@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180099680 (-IsInfinite@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180099A00 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18009EB10 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x1800AACE0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x1800AADF0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800AAEE0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x1800AB080 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsOfType@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801069B0 (-IsOfType@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x18012B648 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E8F0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x1801EC2E0 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::CalcRootBounds(CVisual *this, float *a2, __int64 a3)
{
  bool IsAutomaticBoundsToLocalSpaceEnabled; // r15
  __int64 (__fastcall *v6)(CVisual *, __int64); // rax
  char v7; // al
  __int64 v8; // r10
  __int64 (__fastcall *v9)(float *, _OWORD *, __int128 *); // rax
  struct CEffect *EffectInternal; // r14
  __int64 v11; // r10
  __int64 v12; // rax
  CTransform3D *v13; // rsi
  int v14; // xmm4_4
  int v15; // xmm5_4
  _DWORD *v16; // r8
  CGeometry *v17; // rcx
  __int64 result; // rax
  int ShapeData; // eax
  int v20; // esi
  CRectanglesShape *v21; // rdi
  int v22; // r14d
  __int64 (__fastcall *v23)(__int64, struct D2D_RECT_F *, __int64); // rax
  struct D2D_RECT_F *v24; // rcx
  unsigned __int64 v25; // rsi
  __int64 v26; // rcx
  void *(__fastcall *v27)(CRoundedRectangleShape *__hidden, unsigned int); // rax
  float v28; // xmm5_4
  FLOAT left; // xmm0_4
  float v30; // xmm4_4
  float v31; // xmm1_4
  float v32; // xmm7_4
  FLOAT top; // xmm0_4
  float v34; // xmm6_4
  FLOAT right; // xmm0_4
  float v36; // xmm0_4
  FLOAT bottom; // xmm2_4
  int v38; // edx
  unsigned int v39; // ecx
  __int64 (__fastcall *v40)(); // rax
  int Bounds; // eax
  __int64 v42; // rax
  _BYTE *v43; // rdx
  unsigned int i; // ecx
  CTransform3D **v45; // r14
  CTransform3D *v46; // r14
  __int64 (__fastcall *v47)(); // rax
  int TightBounds; // eax
  const struct CMILMatrix *Matrix; // rax
  char v50; // r14
  __int64 v51; // rax
  __int64 *v52; // rax
  int v53; // eax
  __int64 (__fastcall *v54)(); // rax
  __int64 v55; // r14
  __int64 v56; // [rsp+30h] [rbp-D0h] BYREF
  CRectanglesShape *v57; // [rsp+38h] [rbp-C8h] BYREF
  char v58; // [rsp+40h] [rbp-C0h]
  _OWORD v59[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v60; // [rsp+90h] [rbp-70h]
  _OWORD v61[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v62; // [rsp+E0h] [rbp-20h]
  struct D2D_RECT_F v63; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v64; // [rsp+100h] [rbp+0h] BYREF
  struct tagRECT v65; // [rsp+110h] [rbp+10h] BYREF

  IsAutomaticBoundsToLocalSpaceEnabled = 0;
  v6 = *(__int64 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 64LL);
  if ( (char *)v6 == (char *)CSpriteVisual::IsOfType )
  {
    if ( !(unsigned __int8)CVisual::IsOfType(this, 92LL) )
      goto LABEL_8;
  }
  else
  {
    if ( (char *)v6 == (char *)CVisual::IsOfType )
    {
      v7 = CVisual::IsOfType(this, 92LL);
    }
    else if ( (char *)v6 == (char *)CWindowNodeGeneratedT<CWindowNode,CVisual>::IsOfType )
    {
      v7 = CWindowNodeGeneratedT<CWindowNode,CVisual>::IsOfType(this, 92LL, a3);
    }
    else
    {
      v7 = v6(this, 92LL);
    }
    if ( !v7 )
      goto LABEL_8;
  }
  if ( *((_QWORD *)this + 85) || *((_QWORD *)this + 84) )
    IsAutomaticBoundsToLocalSpaceEnabled = CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(this);
LABEL_8:
  v8 = *(_QWORD *)this;
  v64 = 0LL;
  v9 = *(__int64 (__fastcall **)(float *, _OWORD *, __int128 *))(v8 + 320);
  if ( v9 != CVisual::GetBoundsWithEffects )
  {
    v9((float *)this, (_OWORD *)this + 11, &v64);
    goto LABEL_11;
  }
  v64 = *((_OWORD *)this + 11);
  EffectInternal = CVisual::GetEffectInternal(this);
  v12 = (*(__int64 (__fastcall **)(CVisual *))(v11 + 224))(this);
  if ( EffectInternal )
  {
    v40 = *(__int64 (__fastcall **)())(*(_QWORD *)EffectInternal + 64LL);
    if ( v40 == CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType )
    {
      if ( !CEffectGeneratedT<CEffect,CPropertyChangeResource>::IsOfType((__int64)EffectInternal, 60) )
        goto LABEL_11;
    }
    else if ( !((unsigned __int8 (__fastcall *)(struct CEffect *, __int64))v40)(EffectInternal, 60LL) )
    {
      goto LABEL_11;
    }
    Bounds = CFilterEffect::GetBounds((__int64)EffectInternal, (const __m128i *)this + 11, (__int64)&v64);
    if ( Bounds < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bounds, 0x186Au, 0LL);
  }
  else if ( v12 )
  {
    v50 = *((_BYTE *)this + 696);
    v56 = 0LL;
    if ( (CVisual::GetEffectiveSize(this, (float *)&v56, (float *)&v56 + 1) || v50)
      && (v51 = *(_QWORD *)this,
          *(_QWORD *)&v63.left = v56,
          v52 = (__int64 *)(*(__int64 (__fastcall **)(CVisual *))(v51 + 224))(this),
          v53 = CTreeEffect::GetBounds(v52, (_OWORD *)this + 11, (__int64)&v63, &v64),
          v53 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x187Eu, 0LL);
    }
    else if ( (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(&v64) )
    {
      v64 = *((_OWORD *)this + 11);
    }
  }
LABEL_11:
  v13 = 0LL;
  v14 = *((_DWORD *)this + 48);
  v15 = *((_DWORD *)this + 49);
  *(_OWORD *)a2 = v64;
  *((_DWORD *)a2 + 4) = v14;
  *((_DWORD *)a2 + 5) = v15;
  v16 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v16 & 0x800000) == 0 )
    goto LABEL_12;
  v42 = (unsigned int)v16[1];
  v43 = v16 + 2;
  for ( i = 0; i < (unsigned int)v42; ++v43 )
  {
    if ( *v43 == 9 )
      break;
    ++i;
  }
  if ( i >= (unsigned int)v42 )
    v45 = 0LL;
  else
    v45 = (CTransform3D **)((char *)v16 + 8LL * i - (((_BYTE)v42 + 15) & 7) + v42 + 15);
  v46 = *v45;
  v47 = *(__int64 (__fastcall **)())(*(_QWORD *)v46 + 64LL);
  if ( v47 == CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType )
  {
    if ( CEffectGeneratedT<CEffect,CPropertyChangeResource>::IsOfType((__int64)v46, 173) )
    {
LABEL_62:
      v13 = v46;
      goto LABEL_12;
    }
  }
  else if ( ((unsigned __int8 (__fastcall *)(CTransform3D *, __int64))v47)(v46, 173LL) )
  {
    goto LABEL_62;
  }
  v54 = *(__int64 (__fastcall **)())(*(_QWORD *)v46 + 64LL);
  if ( v54 == CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType
    || ((unsigned __int8 (__fastcall *)(CTransform3D *, __int64))v54)(v46, 57LL) )
  {
    v13 = (CTransform3D *)*((_QWORD *)v46 + 11);
  }
LABEL_12:
  if ( v13 )
  {
    Matrix = CTransform3D::GetMatrix(v13, (const struct D2D_SIZE_F *)this + 18);
    v61[0] = *(_OWORD *)Matrix;
    v61[1] = *((_OWORD *)Matrix + 1);
    v61[2] = *((_OWORD *)Matrix + 2);
    v61[3] = *((_OWORD *)Matrix + 3);
    v62 = *((_DWORD *)Matrix + 16);
    if ( !*((_DWORD *)this + 28) || IsAutomaticBoundsToLocalSpaceEnabled )
    {
      v59[0] = _xmm;
      v59[1] = _xmm;
      v59[3] = *(const struct _D3DCOLORVALUE *)&_xmm.r;
      v59[2] = 0LL;
      v60 = 10657;
      CMILMatrix::Multiply((CMILMatrix *)v61, (const struct CMILMatrix *)v59);
    }
    CMILMatrix::Transform3DBoundsHelper<0>(v61, a2, a2);
  }
  v17 = (CGeometry *)*((_QWORD *)this + 31);
  if ( !v17 || *((char *)this + 105) < 0 || *((_DWORD *)this + 28) )
    return 0LL;
  v57 = 0LL;
  v58 = 0;
  v63 = 0LL;
  ShapeData = CGeometry::GetShapeData(v17, (const struct D2D_SIZE_F *)this + 18, (struct CShapePtr *)&v57);
  v20 = ShapeData;
  if ( ShapeData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeData, 0x62u, 0LL);
    goto LABEL_68;
  }
  v21 = v57;
  v22 = -2003304309;
  if ( !v57 )
    goto LABEL_52;
  v23 = *(__int64 (__fastcall **)(__int64, struct D2D_RECT_F *, __int64))(*(_QWORD *)v57 + 48LL);
  if ( v23 == CRectanglesShape::GetTightBounds )
  {
    v24 = (struct D2D_RECT_F *)*((_QWORD *)v57 + 2);
    if ( *((struct D2D_RECT_F **)v57 + 3) != v24 )
    {
      v25 = 1LL;
      v63 = *v24;
      v26 = *((_QWORD *)v57 + 2);
      if ( (unsigned __int64)((*((_QWORD *)v57 + 3) - v26) >> 4) > 1 )
      {
        v55 = 16LL;
        do
        {
          TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(&v63, v26 + v55);
          v26 = *((_QWORD *)v21 + 2);
          v55 += 16LL;
          ++v25;
        }
        while ( v25 < (*((_QWORD *)v21 + 3) - v26) >> 4 );
        v21 = v57;
      }
    }
    v20 = 0;
    goto LABEL_24;
  }
  if ( (char *)v23 == (char *)CRegionShape::GetTightBounds )
  {
    v65 = 0LL;
    if ( FastRegion::CRegion::GetBoundingRect((CRectanglesShape *)((char *)v57 + 16), &v65) )
    {
      v63.left = (float)v65.left;
      v63.top = (float)v65.top;
      v63.right = (float)v65.right;
      v63.bottom = (float)v65.bottom;
    }
    v21 = v57;
    goto LABEL_51;
  }
  if ( (char *)v23 == (char *)CRoundedRectangleShape::GetTightBounds )
    TightBounds = CRoundedRectangleShape::GetTightBounds(v57, &v63, 0LL);
  else
    TightBounds = v23((__int64)v57, &v63, 0LL);
  v22 = TightBounds;
  v20 = TightBounds;
  if ( TightBounds >= 0 )
  {
    v21 = v57;
LABEL_52:
    v20 = v22;
    if ( v22 >= 0 )
      goto LABEL_53;
    goto LABEL_67;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBounds, 0x140u, 0LL);
LABEL_67:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x63u, 0LL);
LABEL_68:
  v21 = v57;
LABEL_53:
  if ( v20 != -2003304438 && v20 != -2003304309 )
    goto LABEL_24;
  LODWORD(v63.left) = _xmm;
  LODWORD(v63.bottom) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255).m128_u32[0];
  LODWORD(v63.top) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85).m128_u32[0];
  LODWORD(v63.right) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170).m128_u32[0];
LABEL_51:
  v20 = 0;
LABEL_24:
  if ( v58 && v21 )
  {
    v27 = **(void *(__fastcall ***)(CRoundedRectangleShape *__hidden, unsigned int))v21;
    if ( v27 == CRectanglesShape::`scalar deleting destructor' )
    {
      CRectanglesShape::~CRectanglesShape(v21);
      CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v21);
    }
    else if ( v27 == CRoundedRectangleShape::`vector deleting destructor' )
    {
      CRoundedRectangleShape::~CRoundedRectangleShape(v21);
      CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v21);
    }
    else if ( v27 == CPolygonShape::`scalar deleting destructor' )
    {
      CPolygonShape::`scalar deleting destructor'(v21, 1u);
    }
    else
    {
      v27(v21, 1u);
    }
  }
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x613u, 0LL);
    return (unsigned int)v20;
  }
  else
  {
    v28 = *a2;
    left = v63.left;
    v30 = a2[4];
    v31 = a2[5];
    if ( v63.left > *a2 )
    {
      *a2 = v63.left;
      v28 = left;
    }
    v32 = a2[1];
    top = v63.top;
    if ( v63.top > v32 )
    {
      a2[1] = v63.top;
      v32 = top;
    }
    v34 = a2[2];
    right = v63.right;
    if ( v34 > v63.right )
    {
      a2[2] = v63.right;
      v34 = right;
    }
    v36 = a2[3];
    bottom = v63.bottom;
    if ( v36 > v63.bottom )
    {
      a2[3] = v63.bottom;
      v36 = bottom;
    }
    v38 = (v31 <= v30) + 1;
    if ( v34 > v28 )
      v38 = v31 <= v30;
    result = (unsigned int)v20;
    v39 = v38 + 1;
    if ( v36 > v32 )
      v39 = v38;
    if ( v39 > 1 )
    {
      *((_QWORD *)a2 + 2) = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
      *(_QWORD *)a2 = 0LL;
    }
  }
  return result;
}
