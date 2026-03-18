/*
 * XREFs of ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1801006B0
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180016810 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800FF480 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEBVCVisualTree@@PEAVCWindowOcclusionInfo@@@Z @ 0x1802929EC (-RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEBVCVisualTree@@PEAVCWindowOcclusion.c)
 * Callees:
 *     ?GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800165D0 (-GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180017470 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x180017B4C (--1CRegionShape@@UEAA@XZ.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ??A?$CPtrArray@$$CBX@@QEBAPEBX_K@Z @ 0x18007EFA0 (--A-$CPtrArray@$$CBX@@QEBAPEBX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB180 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1801449F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?BuildFromCRegion@CRegionShape@@QEAAXAEBVCRegion@@@Z @ 0x180146C9C (-BuildFromCRegion@CRegionShape@@QEAAXAEBVCRegion@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowNode::EnsureEffectiveSpriteClip(CWindowNode *this)
{
  struct CShape *v1; // rdi
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
  CRectanglesShape *v14; // rdx
  CRectanglesShape *v15; // r14
  __int64 v16; // rdx
  struct CShape *v17; // [rsp+30h] [rbp-59h] BYREF
  CRectanglesShape *v18; // [rsp+38h] [rbp-51h] BYREF
  char v19; // [rsp+40h] [rbp-49h]
  CRectanglesShape *v20; // [rsp+48h] [rbp-41h] BYREF
  __int64 v21; // [rsp+50h] [rbp-39h]
  _QWORD v22[3]; // [rsp+60h] [rbp-29h] BYREF
  int v23; // [rsp+78h] [rbp-11h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+2Fh]

  v1 = 0LL;
  v3 = (*((_BYTE *)this + 896) & 1) == 0;
  v17 = 0LL;
  if ( v3 )
  {
    v5 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 111);
    if ( v5 )
    {
      (**v5)(v5, 1LL);
      *((_QWORD *)this + 111) = 0LL;
    }
  }
  if ( *((_QWORD *)this + 111) )
    return 0LL;
  v22[0] = &CRegionShape::`vftable';
  v22[2] = &v23;
  v18 = 0LL;
  v19 = 0;
  v22[1] = 0LL;
  v23 = 0;
  v24 = 0LL;
  if ( *((_QWORD *)this + 102) )
  {
    SpriteClipShape = CWindowNode::GetSpriteClipShape(this, (struct CShapePtr *)&v18);
    v10 = SpriteClipShape;
    if ( SpriteClipShape < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, SpriteClipShape, 0x573u, 0LL);
      CRegionShape::~CRegionShape((CRegionShape *)v22);
      CShapePtr::~CShapePtr(&v18);
      return v10;
    }
    v7 = v18;
  }
  else
  {
    v6 = *((_QWORD *)this + 91);
    v21 = v6;
    v20 = 0LL;
    CRegionShape::BuildFromRects((__int64)v22, (__int64)&v20, 1u);
    CShapePtr::~CShapePtr(&v18);
    v7 = (CShape *)v22;
    v19 = 0;
    v18 = (CRectanglesShape *)v22;
  }
  v8 = -2003304309;
  if ( v7 )
  {
    v9 = CShape::CopyShape(v7, 0LL, &v17);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x15Eu, 0LL);
      v1 = v17;
      v10 = v8;
LABEL_11:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x582u, 0LL);
      goto LABEL_12;
    }
    v1 = v17;
  }
  v10 = v8;
  if ( v8 < 0 )
    goto LABEL_11;
  if ( *((_BYTE *)this + 752) )
  {
    v17 = 0LL;
    v12 = __A__CPtrArray___CBX__QEBAPEBX_K_Z((__int64 *)this + 104, 0LL);
    v13 = v12;
    v20 = v14;
    LOBYTE(v21) = (_BYTE)v14;
    v15 = (CRectanglesShape *)(v12 + 31);
    if ( *((_BYTE *)v12 + 154) != (_BYTE)v14 )
    {
      CRegionShape::BuildFromCRegion((CRegionShape *)(v12 + 31), (const struct CRegion *)(v12 + 22));
      *((_BYTE *)v13 + 154) = 0;
    }
    CShapePtr::~CShapePtr(&v20);
    v20 = v15;
    LOBYTE(v21) = 0;
    v10 = CShape::Combine((__int64)v1, v16, (__int64)v15, 0LL, 1, &v17);
    CShapePtr::~CShapePtr(&v20);
    if ( (v10 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x58Du, 0LL);
LABEL_12:
      CRegionShape::~CRegionShape((CRegionShape *)v22);
      CShapePtr::~CShapePtr(&v18);
      if ( v1 )
        (**(void (__fastcall ***)(struct CShape *, __int64))v1)(v1, 1LL);
      return v10;
    }
    if ( v1 )
      (**(void (__fastcall ***)(struct CShape *, __int64))v1)(v1, 1LL);
    v1 = v17;
  }
  *((_BYTE *)this + 896) |= 1u;
  *((_QWORD *)this + 111) = v1;
  CRegionShape::~CRegionShape((CRegionShape *)v22);
  CShapePtr::~CShapePtr(&v18);
  return v10;
}
