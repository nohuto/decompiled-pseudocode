/*
 * XREFs of ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z @ 0x1801B4040
 * Callers:
 *     ?GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801B3AC0 (-GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetLayoutParameters@CSwapchainRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAU3@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801B3DE0 (-GetLayoutParameters@CSwapchainRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAU3@PEA.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::PrependTranslate(CMILMatrix *this, float a2, float a3, float a4)
{
  char v7; // al
  float v8; // xmm0_4
  float v9; // xmm3_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm4_4
  float v13; // xmm1_4

  if ( COERCE_FLOAT(LODWORD(a2) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(LODWORD(a3) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(LODWORD(a4) & _xmm) >= 0.000081380211 )
  {
    v7 = *((_BYTE *)this + 65);
    v8 = a3 * *((float *)this + 6);
    v9 = (float)((float)(a2 * *((float *)this + 1)) + (float)(a3 * *((float *)this + 5)))
       + (float)(a4 * *((float *)this + 9));
    v10 = a4 * *((float *)this + 10);
    *((float *)this + 12) = (float)((float)((float)(a3 * *((float *)this + 4)) + (float)(a2 * *(float *)this))
                                  + (float)(a4 * *((float *)this + 8)))
                          + *((float *)this + 12);
    v11 = (float)(a2 * *((float *)this + 2)) + v8;
    *((float *)this + 13) = v9 + *((float *)this + 13);
    *((float *)this + 14) = (float)(v11 + v10) + *((float *)this + 14);
    if ( (char)(4 * v7) >> 6 == 1 )
    {
LABEL_5:
      v12 = a2 * *((float *)this + 3);
      *((_DWORD *)this + 16) = 0;
      *((float *)this + 15) = (float)((float)(v12 + (float)(a3 * *((float *)this + 7)))
                                    + (float)(a4 * *((float *)this + 11)))
                            + *((float *)this + 15);
      return;
    }
    if ( (char)(4 * v7) >> 6 >= 0 )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)this + 7) & _xmm) * 61440.0)
                                        + (float)(COERCE_FLOAT(*((_DWORD *)this + 3) & _xmm) * 61440.0))
                                + COERCE_FLOAT(*((_DWORD *)this + 15) & _xmm))
                        - 1.0) & _xmm) >= 0.000081380211 )
        goto LABEL_5;
      LODWORD(v13) = *((_DWORD *)this + 11) & _xmm;
      *((_BYTE *)this + 65) = v7 | 0x30;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v13 * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
        goto LABEL_5;
    }
    else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)this + 11) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
    {
      goto LABEL_5;
    }
    *((_BYTE *)this + 64) &= 0xFCu;
  }
}
