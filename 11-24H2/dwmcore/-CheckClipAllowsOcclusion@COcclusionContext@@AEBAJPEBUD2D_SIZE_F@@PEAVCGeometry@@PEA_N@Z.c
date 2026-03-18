/*
 * XREFs of ?CheckClipAllowsOcclusion@COcclusionContext@@AEBAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEA_N@Z @ 0x1800C59D0
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2710 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x180078EC0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x180078FD0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800790C0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x180079260 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800C4750 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C5D60 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotN.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800C6450 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x1800C6F80 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?AllowsOcclusion@CRoundedRectangleShape@@UEBA_NXZ @ 0x1801AC2F0 (-AllowsOcclusion@CRoundedRectangleShape@@UEBA_NXZ.c)
 *     ?IsEmpty@CRectanglesShape@@UEBA_NXZ @ 0x1801B2190 (-IsEmpty@CRectanglesShape@@UEBA_NXZ.c)
 *     ?IsEmpty@CRoundedRectangleShape@@UEBA_NXZ @ 0x1801CD330 (-IsEmpty@CRoundedRectangleShape@@UEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COcclusionContext::CheckClipAllowsOcclusion(
        COcclusionContext *this,
        const struct D2D_SIZE_F *a2,
        struct CGeometry *a3,
        bool *a4)
{
  int ShapeData; // eax
  unsigned int v6; // esi
  CRoundedRectangleShape *v7; // rbx
  bool (__fastcall *v8)(CRoundedRectangleShape *__hidden); // rax
  void (__fastcall *v9)(CRoundedRectangleShape *, __int128 *, _QWORD); // rax
  char IsEmpty; // al
  bool (__fastcall *v11)(CRoundedRectangleShape *__hidden); // rax
  bool IsAxisAlignedRectangle; // al
  bool v13; // al
  void (__fastcall *v14)(CRoundedRectangleShape *, __int64); // rax
  CRoundedRectangleShape *v16; // [rsp+30h] [rbp-58h] BYREF
  char v17; // [rsp+38h] [rbp-50h]
  __int128 v18; // [rsp+40h] [rbp-48h] BYREF
  struct tagRECT v19; // [rsp+50h] [rbp-38h] BYREF

  v16 = 0LL;
  v17 = 0;
  ShapeData = CGeometry::GetShapeData(a3, a2, &v16);
  v6 = ShapeData;
  if ( ShapeData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ShapeData, 0x64Au, 0LL);
    v7 = v16;
    goto LABEL_15;
  }
  v7 = v16;
  if ( !v16 )
    goto LABEL_38;
  v8 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden))(*(_QWORD *)v16 + 16LL);
  if ( v8 == CShape::IsEmpty )
  {
    v9 = *(void (__fastcall **)(CRoundedRectangleShape *, __int128 *, _QWORD))(*(_QWORD *)v16 + 48LL);
    v18 = 0LL;
    if ( (char *)v9 == (char *)CRegionShape::GetTightBounds )
    {
      v19 = 0LL;
      if ( FastRegion::CRegion::GetBoundingRect((CRoundedRectangleShape *)((char *)v16 + 16), &v19) )
      {
        *(float *)&v18 = (float)v19.left;
        *((float *)&v18 + 1) = (float)v19.top;
        *((float *)&v18 + 2) = (float)v19.right;
        *((float *)&v18 + 3) = (float)v19.bottom;
      }
    }
    else
    {
      v9(v16, &v18, 0LL);
    }
    IsEmpty = IsRectEmptyOrInvalid(&v18);
  }
  else if ( v8 == CRoundedRectangleShape::IsEmpty )
  {
    IsEmpty = CRoundedRectangleShape::IsEmpty(v16);
  }
  else if ( v8 == CRectanglesShape::IsEmpty )
  {
    IsEmpty = CRectanglesShape::IsEmpty(v16);
  }
  else
  {
    IsEmpty = v8(v16);
  }
  if ( IsEmpty )
    goto LABEL_37;
  v7 = v16;
  if ( !v16 )
  {
LABEL_38:
    v13 = 0;
    goto LABEL_14;
  }
  v11 = *(bool (__fastcall **)(CRoundedRectangleShape *__hidden))(*(_QWORD *)v16 + 72LL);
  if ( v11 == CShape::AllowsOcclusion || v11 == CShape::IsAxisAlignedRectangle )
    IsAxisAlignedRectangle = CShape::IsAxisAlignedRectangle(v16);
  else
    IsAxisAlignedRectangle = v11 == CRoundedRectangleShape::AllowsOcclusion
                           ? CRoundedRectangleShape::AllowsOcclusion(v16)
                           : v11(v16);
  if ( !IsAxisAlignedRectangle )
  {
LABEL_37:
    v7 = v16;
    goto LABEL_38;
  }
  v7 = v16;
  v13 = 1;
LABEL_14:
  *a4 = v13;
LABEL_15:
  if ( v17 && v7 )
  {
    v14 = **(void (__fastcall ***)(CRoundedRectangleShape *, __int64))v7;
    if ( (char *)v14 == (char *)CRectanglesShape::`scalar deleting destructor' )
    {
      CRectanglesShape::~CRectanglesShape(v7);
      CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v7);
    }
    else if ( (char *)v14 == (char *)CRoundedRectangleShape::`vector deleting destructor' )
    {
      CRoundedRectangleShape::~CRoundedRectangleShape(v7);
      CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v7);
    }
    else if ( (char *)v14 == (char *)CPolygonShape::`scalar deleting destructor' )
    {
      CPolygonShape::`scalar deleting destructor'(v7, 1);
    }
    else
    {
      v14(v7, 1LL);
    }
  }
  return v6;
}
