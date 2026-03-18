/*
 * XREFs of ?GetRotation@CMILMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x1800F06F0
 * Callers:
 *     ?RecordCompositionStats@CFlipExSwapchainStatistics@@UEAA_N_NW4BufferCompositionMode@@0AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1800F06A0 (-RecordCompositionStats@CFlipExSwapchainStatistics@@UEAA_N_NW4BufferCompositionMode@@0AEBVCMILMa.c)
 *     ?FromData@CCornerRects@@QEAAXAEBUCRoundedRectangleGeometryData@@AEBVCMILMatrix@@@Z @ 0x180266160 (-FromData@CCornerRects@@QEAAXAEBUCRoundedRectangleGeometryData@@AEBVCMILMatrix@@@Z.c)
 *     ?EnsureMonitorData@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@_NAEBVCMILMatrix@@@Z @ 0x1802B2818 (-EnsureMonitorData@CCursorState@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeed.c)
 * Callees:
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1801470D0 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 */

__int64 __fastcall CMILMatrix::GetRotation(CMILMatrix *this)
{
  char v1; // dl
  unsigned int v2; // r9d
  int v3; // xmm5_4
  CMILMatrix *v4; // r10
  unsigned int v5; // r11d
  int v6; // r8d
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  float v11; // xmm2_4
  char v12; // cl

  v1 = *((_BYTE *)this + 64);
  v2 = 0;
  v3 = _xmm;
  v4 = this;
  v5 = 1;
  if ( v1 >> 6 != 1 )
  {
    if ( *((char *)this + 64) >> 6 < 0 )
      goto LABEL_3;
    if ( (char)(4 * *((_BYTE *)this + 65)) >> 6 == 1
      || (char)(4 * *((_BYTE *)this + 65)) >> 6 >= 0
      && (LODWORD(v11) = COERCE_UNSIGNED_INT(
                           (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)this + 7) & _xmm) * 61440.0)
                                         + (float)(COERCE_FLOAT(*((_DWORD *)this + 3) & _xmm) * 61440.0))
                                 + COERCE_FLOAT(*((_DWORD *)this + 15) & _xmm))
                         - 1.0) & _xmm,
          *((_BYTE *)this + 65) = *((_BYTE *)this + 65) & 0xCF | (32 * (v11 < 0.000081380211) + 16),
          v11 >= 0.000081380211)
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 1) - 0.0) & _xmm) >= 0.000081380211
      || (v12 = 1, COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v4 + 4) - 0.0) & _xmm) >= 0.000081380211) )
    {
      v12 = 0;
    }
    *((_BYTE *)v4 + 64) = v1 & 0x3F | ((((unsigned __int8)v12 ^ 1) << 7) - 64);
    if ( v12 )
      goto LABEL_3;
  }
  if ( (unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(v4) )
  {
LABEL_3:
    if ( COERCE_FLOAT(*(_DWORD *)v4 & v3) >= 0.000081380211 )
    {
      v6 = -1;
      if ( *(float *)v4 > 0.0 )
        v6 = v5;
    }
    else
    {
      v6 = v2;
    }
    if ( COERCE_FLOAT(*((_DWORD *)v4 + 1) & v3) >= 0.000081380211 )
    {
      v7 = -1;
      if ( *((float *)v4 + 1) > 0.0 )
        v7 = v5;
    }
    else
    {
      v7 = v2;
    }
    if ( COERCE_FLOAT(*((_DWORD *)v4 + 4) & v3) >= 0.000081380211 )
    {
      v8 = -1;
      if ( *((float *)v4 + 4) > 0.0 )
        v8 = v5;
    }
    else
    {
      v8 = v2;
    }
    if ( COERCE_FLOAT(*((_DWORD *)v4 + 5) & v3) >= 0.000081380211 )
    {
      v9 = -1;
      if ( *((float *)v4 + 5) > 0.0 )
        v9 = v5;
    }
    else
    {
      v9 = v2;
    }
    if ( v6 == v5 )
    {
      if ( !v7 && !v8 && v9 == v5 )
        return v5;
    }
    else if ( v6 )
    {
      if ( v6 == -1 && !v7 && !v8 && v9 == -1 )
        return 3;
    }
    else if ( v7 == v5 )
    {
      if ( v8 == -1 && !v9 )
        return 2;
    }
    else if ( v7 == -1 && v8 == v5 && !v9 )
    {
      return 4;
    }
  }
  return v2;
}
