/*
 * XREFs of ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180177CE0
 * Callers:
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180089900 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800A45E0 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     TryFillRenderState @ 0x180177164 (TryFillRenderState.c)
 *     ?GetD2DGeometry@CPolygonShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801775C0 (-GetD2DGeometry@CPolygonShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z @ 0x180177720 (-TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x180177E90 (_anonymous_namespace_--DecomposeMatrix.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::Is2DAffine<1>(__int64 a1, char a2)
{
  char v2; // r8
  bool result; // al

  v2 = *(_BYTE *)(a1 + 65);
  if ( a2 )
  {
    if ( (char)(4 * (v2 & 0xF0)) <= 0 )
    {
      if ( (v2 & 0x20) != 0 )
        return 1;
      result = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                              (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                                            + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                                    + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm))
                            - 1.0) & _xmm) < 0.000081380211;
      *(_BYTE *)(a1 + 65) = v2 & 0xCF | (32 * result + 16);
      return result;
    }
    return 0;
  }
  if ( (char)(16 * (v2 & 0xFC)) > 0 )
    return 0;
  if ( (v2 & 8) != 0 )
    return 1;
  if ( (char)(4 * v2) >> 6 == 1 )
    goto LABEL_12;
  if ( (char)(4 * v2) >> 6 >= 0 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                                      + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                              + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm))
                      - 1.0) & _xmm) >= 0.000081380211 )
    {
      v2 = v2 & 0xCF | 0x10;
      goto LABEL_12;
    }
    v2 |= 0x30u;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
    {
LABEL_12:
      result = 0;
      *(_BYTE *)(a1 + 65) = v2 & 0xF3 | 4;
      return result;
    }
  }
  else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
  {
    goto LABEL_12;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 32) - 0.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 36) - 0.0) & _xmm) >= 0.000081380211 )
  {
    goto LABEL_12;
  }
  result = 1;
  *(_BYTE *)(a1 + 65) = v2 & 0xF3 | 0xC;
  return result;
}
