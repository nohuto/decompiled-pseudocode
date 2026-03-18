/*
 * XREFs of ?GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800165D0
 * Callers:
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1801006B0 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1802375F0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180017470 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x180017B4C (--1CRegionShape@@UEAA@XZ.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800C4750 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB240 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180146340 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowNode::GetSpriteClipShape(CWindowNode *this, struct CShapePtr *a2)
{
  __int64 v2; // rax
  __int128 v6; // xmm0
  CGeometry *v7; // rcx
  int ShapeData; // eax
  unsigned int v9; // ebx
  __int64 v11; // r14
  __int64 v12; // rdx
  int v13; // esi
  __int64 v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // [rsp+30h] [rbp-69h] BYREF
  __int64 v17; // [rsp+38h] [rbp-61h] BYREF
  char v18; // [rsp+40h] [rbp-59h]
  __int128 v19; // [rsp+48h] [rbp-51h] BYREF
  _QWORD v20[3]; // [rsp+60h] [rbp-39h] BYREF
  int v21; // [rsp+78h] [rbp-21h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+1Fh]

  v2 = *((_QWORD *)this + 102);
  if ( v2 && *(_BYTE *)(v2 + 160) )
  {
    CShapePtr::~CShapePtr(a2);
    *((_BYTE *)a2 + 8) = 0;
    *(_QWORD *)a2 = &CRectanglesShape::sc_emptyShape;
    return 0LL;
  }
  v6 = *(_OWORD *)((char *)this + 712);
  v20[1] = 0LL;
  v20[0] = &CRegionShape::`vftable';
  v21 = 0;
  v20[2] = &v21;
  v22 = 0LL;
  v19 = v6;
  CRegionShape::BuildFromRects(v20, &v19, 1LL);
  v7 = (CGeometry *)*((_QWORD *)this + 102);
  v17 = 0LL;
  v18 = 0;
  ShapeData = CGeometry::GetShapeData(v7, (const struct D2D_SIZE_F *)this + 18, (struct CShapePtr *)&v17);
  v9 = ShapeData;
  if ( ShapeData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeData, 0x5AEu, 0LL);
    CShapePtr::~CShapePtr((CShapePtr *)&v17);
    CRegionShape::~CRegionShape((CRegionShape *)v20);
    return v9;
  }
  v11 = v17;
  v16 = 0LL;
  v13 = CShape::TryOptimizedCombinePaths(v17, 0LL, v20, 0LL, 1, &v16);
  if ( v13 < 0 )
  {
    v15 = 456;
    goto LABEL_15;
  }
  v14 = v16;
  if ( !v16 )
  {
    v13 = CShape::D2DCombine(v11, v12, v20, 0LL, 1, &v16);
    if ( v13 >= 0 )
    {
      v14 = v16;
      goto LABEL_9;
    }
    v15 = 467;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, v15, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x5B4u, 0LL);
    CShapePtr::~CShapePtr((CShapePtr *)&v17);
    CRegionShape::~CRegionShape((CRegionShape *)v20);
    return (unsigned int)v13;
  }
LABEL_9:
  CShapePtr::~CShapePtr(a2);
  *(_QWORD *)a2 = v14;
  *((_BYTE *)a2 + 8) = 1;
  CShapePtr::~CShapePtr((CShapePtr *)&v17);
  CRegionShape::~CRegionShape((CRegionShape *)v20);
  return (unsigned int)v13;
}
