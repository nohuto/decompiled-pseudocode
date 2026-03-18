/*
 * XREFs of ?SetProperty@?$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180211EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetScaleX@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x1802029C0 (-SetScaleX@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z.c)
 *     ?SetCacheInvalidationThresholdMinimum@?$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJM@Z @ 0x1802029EC (-SetCacheInvalidationThresholdMinimum@-$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VC.c)
 *     ?SetAxisZ@?$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x180222F5C (-SetAxisZ@-$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@QEAAJM@Z.c)
 *     ?SetAxisY@?$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x180225040 (-SetAxisY@-$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@QEAAJM@Z.c)
 *     ?SetCenterY@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x180278604 (-SetCenterY@-$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z.c)
 *     ?SetCenterZ@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x180278630 (-SetCenterZ@-$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z.c)
 *     ?SetCenterZ@?$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x18027865C (-SetCenterZ@-$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@QEAAJM@Z.c)
 */

__int64 __fastcall CRotateTransform3DGeneratedT<CRotateTransform3D,CTransform3D>::SetProperty(
        float *a1,
        int a2,
        int a3,
        float *a4)
{
  int v4; // edx
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // r9d
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  unsigned int v14; // [rsp+20h] [rbp-18h]

  if ( a3 != 18 )
  {
    v8 = -2147024809;
    v6 = -2147024809;
    v14 = 6377;
LABEL_6:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, v14, 0LL);
    return v6;
  }
  v4 = a2 - 1;
  if ( v4 )
  {
    v9 = v4 - 1;
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
            v13 = v12 - 1;
            if ( v13 )
            {
              if ( v13 != 1 )
              {
                v6 = -2147024809;
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x18E4u, 0LL);
                return v6;
              }
              v5 = CRotateTransform3DGeneratedT<CRotateTransform3D,CTransform3D>::SetCenterZ();
              v6 = v5;
              if ( v5 >= 0 )
                return v6;
              v14 = 6368;
            }
            else
            {
              v5 = CScaleTransform3DGeneratedT<CScaleTransform3D,CTransform3D>::SetCenterZ();
              v6 = v5;
              if ( v5 >= 0 )
                return v6;
              v14 = 6364;
            }
          }
          else
          {
            v5 = CScaleTransform3DGeneratedT<CScaleTransform3D,CTransform3D>::SetCenterY();
            v6 = v5;
            if ( v5 >= 0 )
              return v6;
            v14 = 6360;
          }
        }
        else
        {
          v5 = CRotateTransform3DGeneratedT<CRotateTransform3D,CTransform3D>::SetAxisZ();
          v6 = v5;
          if ( v5 >= 0 )
            return v6;
          v14 = 6356;
        }
      }
      else
      {
        v5 = CRotateTransform3DGeneratedT<CRotateTransform3D,CTransform3D>::SetAxisY();
        v6 = v5;
        if ( v5 >= 0 )
          return v6;
        v14 = 6352;
      }
    }
    else
    {
      v5 = CImageLegacyMilBrushGeneratedT<CImageLegacyMilBrush,CLegacyMilBrush>::SetCacheInvalidationThresholdMinimum(
             a1,
             *a4);
      v6 = v5;
      if ( v5 >= 0 )
        return v6;
      v14 = 6348;
    }
    goto LABEL_28;
  }
  v5 = CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetScaleX(a1, *a4);
  v6 = v5;
  if ( v5 < 0 )
  {
    v14 = 6344;
LABEL_28:
    v8 = v5;
    goto LABEL_6;
  }
  return v6;
}
