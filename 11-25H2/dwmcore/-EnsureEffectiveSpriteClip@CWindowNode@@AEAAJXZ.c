/*
 * XREFs of ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180056CC0
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180055A90 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005E4C0 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18023FEC0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEBVCVisualTree@@PEAVCWindowOcclusionInfo@@@Z @ 0x18029E26C (-RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEBVCVisualTree@@PEAVCWindowOcclusion.c)
 * Callees:
 *     ??A?$CPtrArray@$$CBX@@QEBAPEBX_K@Z @ 0x180021770 (--A-$CPtrArray@$$CBX@@QEBAPEBX_K@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18004C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004F510 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x18005E280 (-GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18005F120 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18005F7FC (--1CRegionShape@@UEAA@XZ.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800AB910 (--1CShapePtr@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BuildFromCRegion@CRegionShape@@QEAAXAEBVCRegion@@@Z @ 0x1801E970C (-BuildFromCRegion@CRegionShape@@QEAAXAEBVCRegion@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowNode::EnsureEffectiveSpriteClip(CWindowNode *this)
{
  CRectanglesShape *v1; // rdi
  bool v3; // zf
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  __int64 v6; // rax
  CShape *v7; // rcx
  int v8; // r14d
  int v9; // eax
  unsigned int v10; // esi
  int SpriteClipShape; // eax
  unsigned __int64 *v12; // rax
  unsigned __int64 *v13; // rsi
  CRoundedRectangleShape *v14; // rdx
  CRoundedRectangleShape *v15; // r14
  __int64 v16; // rdx
  struct CShape *v17; // [rsp+30h] [rbp-59h] BYREF
  CShape *v18; // [rsp+38h] [rbp-51h] BYREF
  char v19; // [rsp+40h] [rbp-49h]
  CRoundedRectangleShape *v20; // [rsp+48h] [rbp-41h] BYREF
  __int64 v21; // [rsp+50h] [rbp-39h]
  _QWORD v22[3]; // [rsp+60h] [rbp-29h] BYREF
  int v23; // [rsp+78h] [rbp-11h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+2Fh]

  v1 = 0LL;
  v3 = (*((_BYTE *)this + 888) & 1) == 0;
  v17 = 0LL;
  if ( v3 )
  {
    v5 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 110);
    if ( v5 )
    {
      (**v5)(v5, 1LL);
      *((_QWORD *)this + 110) = 0LL;
    }
  }
  if ( *((_QWORD *)this + 110) )
    return 0LL;
  v22[0] = &CRegionShape::`vftable';
  v22[2] = &v23;
  v18 = 0LL;
  v19 = 0;
  v22[1] = 0LL;
  v23 = 0;
  v24 = 0LL;
  if ( *((_QWORD *)this + 101) )
  {
    SpriteClipShape = CWindowNode::GetSpriteClipShape(this, (struct CShapePtr *)&v18);
    v10 = SpriteClipShape;
    if ( SpriteClipShape < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SpriteClipShape, 0x5ECu, 0LL);
      CRegionShape::~CRegionShape((CRegionShape *)v22);
      CShapePtr::~CShapePtr((CShapePtr *)&v18);
      return v10;
    }
    v7 = v18;
  }
  else
  {
    v6 = *((_QWORD *)this + 90);
    v21 = v6;
    v20 = 0LL;
    CRegionShape::BuildFromRects(v22, &v20, 1LL);
    CShapePtr::~CShapePtr((CShapePtr *)&v18);
    v7 = (CShape *)v22;
    v19 = 0;
    v18 = (CShape *)v22;
  }
  v8 = -2003304309;
  if ( v7 )
  {
    v9 = CShape::CopyShape(v7, 0LL, &v17);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x15Eu, 0LL);
      v1 = v17;
      v10 = v8;
LABEL_11:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x5FBu, 0LL);
      goto LABEL_12;
    }
    v1 = v17;
  }
  v10 = v8;
  if ( v8 < 0 )
    goto LABEL_11;
  if ( *((_BYTE *)this + 744) )
  {
    v17 = 0LL;
    v12 = __A__CPtrArray___CBX__QEBAPEBX_K_Z((__int64 *)this + 103, 0LL);
    v13 = v12;
    v20 = v14;
    LOBYTE(v21) = (_BYTE)v14;
    v15 = (CRoundedRectangleShape *)(v12 + 31);
    if ( *((_BYTE *)v12 + 154) != (_BYTE)v14 )
    {
      CRegionShape::BuildFromCRegion((CRegionShape *)(v12 + 31), (const struct CRegion *)(v12 + 22));
      *((_BYTE *)v13 + 154) = 0;
    }
    CShapePtr::~CShapePtr((CShapePtr *)&v20);
    v20 = v15;
    LOBYTE(v21) = 0;
    v10 = CShape::Combine(v1, v16, v15, 0LL, 1, &v17);
    CShapePtr::~CShapePtr((CShapePtr *)&v20);
    if ( (v10 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x606u, 0LL);
LABEL_12:
      CRegionShape::~CRegionShape((CRegionShape *)v22);
      CShapePtr::~CShapePtr((CShapePtr *)&v18);
      if ( v1 )
        (**(void (__fastcall ***)(CRectanglesShape *, __int64))v1)(v1, 1LL);
      return v10;
    }
    if ( v1 )
      (**(void (__fastcall ***)(CRectanglesShape *, __int64))v1)(v1, 1LL);
    v1 = v17;
  }
  *((_BYTE *)this + 888) |= 1u;
  *((_QWORD *)this + 110) = v1;
  CRegionShape::~CRegionShape((CRegionShape *)v22);
  CShapePtr::~CShapePtr((CShapePtr *)&v18);
  return v10;
}
