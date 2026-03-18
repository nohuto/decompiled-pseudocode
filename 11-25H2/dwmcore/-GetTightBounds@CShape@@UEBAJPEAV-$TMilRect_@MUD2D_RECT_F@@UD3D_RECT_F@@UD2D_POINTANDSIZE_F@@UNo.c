/*
 * XREFs of ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800896E0
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180013240 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x18001BD40 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x1800876E0 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2D1_ANTIALIAS_MODE@@PEA_N@Z @ 0x1800B17D0 (-Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2.c)
 * Callees:
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180089900 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z @ 0x18010D4E0 (-Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z.c)
 *     ?GetD2DGeometry@CPolygonShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801775C0 (-GetD2DGeometry@CPolygonShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShape::GetTightBounds(CPolygonShape *this, __int64 a2, CMILMatrix *a3)
{
  CPathSegmentsShape *v4; // r10
  __int128 *v5; // rdi
  const struct CMILMatrix *v6; // r9
  int (*v7)(CPathSegmentsShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int D2DGeometry; // eax
  unsigned int v9; // ebx
  unsigned int v10; // eax
  float v11; // xmm3_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  unsigned int v16; // xmm1_4
  unsigned int v17; // xmm0_4
  struct ID2D1Geometry *v18; // [rsp+30h] [rbp-58h] BYREF
  __int128 v19; // [rsp+38h] [rbp-50h] BYREF
  __int128 v20; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-30h]

  v18 = 0LL;
  v21 = 0LL;
  v4 = this;
  v5 = 0LL;
  v20 = 0LL;
  if ( !a3 )
    goto LABEL_2;
  if ( CMILMatrix::Is2DAffineOrNaN(a3, a2) )
  {
    v5 = &v20;
    v16 = *((_DWORD *)v6 + 1);
    LODWORD(v20) = *(_DWORD *)v6;
    *(_QWORD *)((char *)&v20 + 4) = __PAIR64__(*((_DWORD *)v6 + 4), v16);
    v17 = *((_DWORD *)v6 + 12);
    HIDWORD(v20) = *((_DWORD *)v6 + 5);
    v21 = __PAIR64__(*((_DWORD *)v6 + 13), v17);
LABEL_2:
    v6 = 0LL;
  }
  v7 = *(int (**)(CPathSegmentsShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)v4 + 24LL);
  if ( v7 == CPathSegmentsShape::GetD2DGeometry )
  {
    D2DGeometry = CPathSegmentsShape::GetD2DGeometry(v4, v6, &v18);
  }
  else if ( v7 == CPolygonShape::GetD2DGeometry )
  {
    D2DGeometry = CPolygonShape::GetD2DGeometry(v4, v6, &v18);
  }
  else
  {
    D2DGeometry = ((__int64 (__fastcall *)(CPathSegmentsShape *, const struct CMILMatrix *, struct ID2D1Geometry **))v7)(
                    v4,
                    v6,
                    &v18);
  }
  v9 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DGeometry, 0x3F7u, 0LL);
  }
  else
  {
    v19 = 0LL;
    v10 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int128 *, __int128 *))(*(_QWORD *)v18 + 32LL))(
            v18,
            v5,
            &v19);
    v11 = *(float *)&v19;
    v9 = v10;
    v12 = *((float *)&v19 + 1);
    v13 = *((float *)&v19 + 2);
    v14 = *((float *)&v19 + 3);
    *(_DWORD *)a2 = v19;
    *(float *)(a2 + 4) = v12;
    *(float *)(a2 + 8) = v13;
    *(float *)(a2 + 12) = v14;
    if ( v13 < v11 || v14 < v12 )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)a2 = 0LL;
    }
  }
  if ( v9 == -2003238895 )
    v9 = -2003304438;
  if ( v18 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v18 + 16LL))(v18);
  return v9;
}
