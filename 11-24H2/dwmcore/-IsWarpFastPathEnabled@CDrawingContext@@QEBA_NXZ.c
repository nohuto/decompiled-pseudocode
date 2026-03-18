/*
 * XREFs of ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x18016AD60
 * Callers:
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180052D80 (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006FC50 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x1800D85C0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18016AED0 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18016C070 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 * Callees:
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x18005D9DC (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1801470D0 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 */

bool __fastcall CDrawingContext::IsWarpFastPathEnabled(CDrawingContext *this)
{
  CDrawingContext *v1; // r9
  int v2; // eax
  _BYTE *v3; // rcx
  char v4; // dl
  char v6; // r8

  v1 = this;
  if ( !*(_QWORD *)(*((_QWORD *)this + 5) + 576LL) || CCommonRegistryData::UseHWDrawListEntriesOnWARP )
    return 0;
  v2 = *((_DWORD *)this + 74);
  if ( v2 )
    v3 = (_BYTE *)(*((_QWORD *)this + 36) + 68LL * (unsigned int)(v2 - 1));
  else
    v3 = &CMILMatrix::Identity;
  v4 = v3[64];
  if ( v4 >> 6 == 1 )
  {
LABEL_13:
    if ( !CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>((__int64)v3) )
      return 0;
    return *((_DWORD *)v1 + 62) != 4
        && (*((_DWORD *)v1 + 163) || !*((_DWORD *)v1 + 114))
        && !*((_QWORD *)v1 + 413)
        && !CDrawingContext::IsHDRTarget(v1);
  }
  if ( v4 >> 6 < 0 )
    return *((_DWORD *)v1 + 62) != 4
        && (*((_DWORD *)v1 + 163) || !*((_DWORD *)v1 + 114))
        && !*((_QWORD *)v1 + 413)
        && !CDrawingContext::IsHDRTarget(v1);
  v6 = v3[65];
  if ( (char)(4 * v6) >> 6 == 1 )
    goto LABEL_18;
  if ( (char)(4 * v6) >> 6 < 0 )
    goto LABEL_17;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                      (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v3 + 7) & _xmm) * 61440.0)
                                    + (float)(COERCE_FLOAT(*((_DWORD *)v3 + 3) & _xmm) * 61440.0))
                            + COERCE_FLOAT(*((_DWORD *)v3 + 15) & _xmm))
                    - 1.0) & _xmm) >= 0.000081380211 )
  {
    v3[65] = v6 & 0xCF | 0x10;
    v3[64] = v4 & 0x3F | 0x40;
    goto LABEL_13;
  }
  v3[65] = v6 | 0x30;
LABEL_17:
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v3 + 1) - 0.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v3 + 4) - 0.0) & _xmm) >= 0.000081380211 )
  {
LABEL_18:
    v3[64] = v4 & 0x3F | 0x40;
    goto LABEL_13;
  }
  v3[64] = v4 | 0xC0;
  return *((_DWORD *)v1 + 62) != 4
      && (*((_DWORD *)v1 + 163) || !*((_DWORD *)v1 + 114))
      && !*((_QWORD *)v1 + 413)
      && !CDrawingContext::IsHDRTarget(v1);
}
