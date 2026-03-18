/*
 * XREFs of ?SetProperty@?$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180076F30
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCacheInvalidationThresholdMinimum@?$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJM@Z @ 0x180077B3C (-SetCacheInvalidationThresholdMinimum@-$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VC.c)
 *     ?SetScaleX@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x180077C50 (-SetScaleX@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetAxisZ@?$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x18022E58C (-SetAxisZ@-$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@QEAAJM@Z.c)
 *     ?SetAxisY@?$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x180230850 (-SetAxisY@-$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@QEAAJM@Z.c)
 *     ?SetCenterY@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x18028321C (-SetCenterY@-$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z.c)
 *     ?SetCenterZ@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x180283248 (-SetCenterZ@-$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z.c)
 *     ?SetCenterZ@?$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x180283274 (-SetCenterZ@-$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@QEAAJM@Z.c)
 */

__int64 __fastcall CRotateTransform3DGeneratedT<CRotateTransform3D,CTransform3D>::SetProperty(
        __int64 a1,
        int a2,
        int a3)
{
  int v3; // edx
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // r9d
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  unsigned int v13; // [rsp+20h] [rbp-18h]

  if ( a3 != 18 )
  {
    v7 = -2147024809;
    v5 = -2147024809;
    v13 = 6377;
LABEL_6:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v13, 0LL);
    return v5;
  }
  v3 = a2 - 1;
  if ( v3 )
  {
    v8 = v3 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              if ( v12 != 1 )
              {
                v5 = -2147024809;
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x18E4u, 0LL);
                return v5;
              }
              v4 = CRotateTransform3DGeneratedT<CRotateTransform3D,CTransform3D>::SetCenterZ();
              v5 = v4;
              if ( v4 >= 0 )
                return v5;
              v13 = 6368;
            }
            else
            {
              v4 = CScaleTransform3DGeneratedT<CScaleTransform3D,CTransform3D>::SetCenterZ();
              v5 = v4;
              if ( v4 >= 0 )
                return v5;
              v13 = 6364;
            }
          }
          else
          {
            v4 = CScaleTransform3DGeneratedT<CScaleTransform3D,CTransform3D>::SetCenterY();
            v5 = v4;
            if ( v4 >= 0 )
              return v5;
            v13 = 6360;
          }
        }
        else
        {
          v4 = CRotateTransform3DGeneratedT<CRotateTransform3D,CTransform3D>::SetAxisZ();
          v5 = v4;
          if ( v4 >= 0 )
            return v5;
          v13 = 6356;
        }
      }
      else
      {
        v4 = CRotateTransform3DGeneratedT<CRotateTransform3D,CTransform3D>::SetAxisY();
        v5 = v4;
        if ( v4 >= 0 )
          return v5;
        v13 = 6352;
      }
    }
    else
    {
      v4 = CImageLegacyMilBrushGeneratedT<CImageLegacyMilBrush,CLegacyMilBrush>::SetCacheInvalidationThresholdMinimum();
      v5 = v4;
      if ( v4 >= 0 )
        return v5;
      v13 = 6348;
    }
    goto LABEL_28;
  }
  v4 = CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetScaleX();
  v5 = v4;
  if ( v4 < 0 )
  {
    v13 = 6344;
LABEL_28:
    v7 = v4;
    goto LABEL_6;
  }
  return v5;
}
