/*
 * XREFs of ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x1800A4460
 * Callers:
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x180117180 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18007BDE0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180089900 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800A45E0 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::D2DGeometryFromShape(
        CDrawingContext *this,
        const struct CShape *a2,
        const struct CMILMatrix *a3,
        struct ID2D1Geometry **a4,
        bool *a5)
{
  const struct CMILMatrix *v6; // r10
  char v7; // dl
  bool v8; // cl
  bool v9; // di
  __int64 (__fastcall *v10)(CRoundedRectangleShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  __int64 result; // rax
  unsigned int v12; // ebx

  *a4 = 0LL;
  v6 = a3;
  v7 = *((_BYTE *)a3 + 65);
  if ( (v7 & 0x20) != 0 || 4 * (v7 & 0xF0) == 0 )
  {
    if ( (v7 & 0x20) != 0 )
    {
      v8 = 1;
    }
    else
    {
      v8 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a3 + 7) & _xmm) * 61440.0)
                                        + (float)(COERCE_FLOAT(*((_DWORD *)a3 + 3) & _xmm) * 61440.0))
                                + COERCE_FLOAT(*((_DWORD *)a3 + 15) & _xmm))
                        - 1.0) & _xmm) < 0.000081380211;
      *((_BYTE *)a3 + 65) = v7 & 0xCF | (32 * v8 + 16);
    }
  }
  else
  {
    v8 = 0;
  }
  v9 = !v8;
  v10 = *(__int64 (__fastcall **)(CRoundedRectangleShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)a2 + 24LL);
  if ( v8 )
    v6 = 0LL;
  if ( v10 == CRoundedRectangleShape::GetD2DGeometry )
  {
    LODWORD(result) = CRoundedRectangleShape::GetD2DGeometry(a2, v6, a4);
  }
  else if ( (char *)v10 == (char *)CRegionShape::GetD2DGeometry )
  {
    LODWORD(result) = CRegionShape::GetD2DGeometry((struct ID2D1Geometry **)a2, v6, a4);
  }
  else if ( v10 == CPathSegmentsShape::GetD2DGeometry )
  {
    LODWORD(result) = CPathSegmentsShape::GetD2DGeometry(a2, v6, a4);
  }
  else
  {
    LODWORD(result) = v10(a2, v6, a4);
  }
  v12 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x9ABu, 0LL);
    return v12;
  }
  if ( !a5 )
    return v12;
  *a5 = v9;
  return (unsigned int)result;
}
