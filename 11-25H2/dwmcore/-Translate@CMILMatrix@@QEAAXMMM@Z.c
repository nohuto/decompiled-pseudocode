/*
 * XREFs of ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x1801B4220
 * Callers:
 *     ?GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001B180 (-GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z @ 0x1801B3710 (-GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801B3AC0 (-GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Translate(CMILMatrix *this, float a2, float a3, float a4)
{
  char v7; // dl
  float v8; // xmm2_4
  float v9; // xmm3_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm3_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm3_4
  float v23; // xmm1_4
  float v24; // xmm8_4
  float v25; // xmm7_4

  if ( COERCE_FLOAT(LODWORD(a2) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(LODWORD(a3) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(LODWORD(a4) & _xmm) >= 0.000081380211 )
  {
    v7 = *((_BYTE *)this + 65);
    if ( (char)(4 * v7) >> 6 != 1 )
    {
      if ( (char)(4 * v7) >> 6 >= 0 )
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                            (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)this + 7) & _xmm) * 61440.0)
                                          + (float)(COERCE_FLOAT(*((_DWORD *)this + 3) & _xmm) * 61440.0))
                                  + COERCE_FLOAT(*((_DWORD *)this + 15) & _xmm))
                          - 1.0) & _xmm) < 0.000081380211 )
        {
          v7 |= 0x30u;
          LODWORD(v23) = *((_DWORD *)this + 11) & _xmm;
          *((_BYTE *)this + 65) = v7;
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v23 * 61440.0) - 0.0) & _xmm) < 0.000081380211 )
          {
LABEL_11:
            v24 = a3 + *((float *)this + 13);
            v25 = a4 + *((float *)this + 14);
            *((float *)this + 12) = a2 + *((float *)this + 12);
            *((float *)this + 13) = v24;
            *((float *)this + 14) = v25;
            goto LABEL_12;
          }
        }
        else
        {
          v7 = v7 & 0xCF | 0x10;
        }
      }
      else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)this + 11) & _xmm) * 61440.0) - 0.0) & _xmm) < 0.000081380211 )
      {
        goto LABEL_11;
      }
    }
    v8 = *((float *)this + 3);
    v9 = *((float *)this + 7);
    v10 = v8 * a2;
    *((_BYTE *)this + 65) = v7 & 0xF3;
    v11 = (float)(v8 * a3) + *((float *)this + 1);
    v12 = (float)(v8 * a4) + *((float *)this + 2);
    *(float *)this = v10 + *(float *)this;
    *((float *)this + 1) = v11;
    v13 = (float)(v9 * a2) + *((float *)this + 4);
    v14 = (float)(v9 * a3) + *((float *)this + 5);
    *((float *)this + 2) = v12;
    v15 = (float)(v9 * a4) + *((float *)this + 6);
    v16 = *((float *)this + 11);
    *((float *)this + 4) = v13;
    *((float *)this + 5) = v14;
    v17 = (float)(v16 * a2) + *((float *)this + 8);
    *((float *)this + 6) = v15;
    v18 = (float)(v16 * a3) + *((float *)this + 9);
    v19 = *((float *)this + 15);
    *((float *)this + 8) = v17;
    *((float *)this + 9) = v18;
    v20 = (float)(v19 * a2) + *((float *)this + 12);
    v21 = (float)(v19 * a3) + *((float *)this + 13);
    *((float *)this + 10) = (float)(v16 * a4) + *((float *)this + 10);
    v22 = (float)(v19 * a4) + *((float *)this + 14);
    *((float *)this + 12) = v20;
    *((float *)this + 13) = v21;
    *((float *)this + 14) = v22;
LABEL_12:
    *((_BYTE *)this + 64) &= 0xFCu;
  }
}
