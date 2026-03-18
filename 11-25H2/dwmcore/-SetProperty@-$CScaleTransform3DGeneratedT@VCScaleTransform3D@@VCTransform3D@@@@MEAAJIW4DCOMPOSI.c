/*
 * XREFs of ?SetProperty@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180284370
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCacheInvalidationThresholdMinimum@?$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJM@Z @ 0x180077B3C (-SetCacheInvalidationThresholdMinimum@-$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VC.c)
 *     ?SetScaleX@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x180077C50 (-SetScaleX@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetCenterX@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x180229AD8 (-SetCenterX@-$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z.c)
 *     ?SetCenterX@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x18022B974 (-SetCenterX@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z.c)
 *     ?SetCenterY@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x18028321C (-SetCenterY@-$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z.c)
 *     ?SetCenterZ@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x180283248 (-SetCenterZ@-$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z.c)
 */

__int64 __fastcall CScaleTransform3DGeneratedT<CScaleTransform3D,CTransform3D>::SetProperty(
        float *a1,
        int a2,
        int a3,
        float *a4)
{
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // eax
  unsigned int v12; // [rsp+20h] [rbp-18h]

  if ( a3 == 18 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              if ( v9 != 1 )
              {
                v4 = -2147024809;
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x1A39u, 0LL);
                return v4;
              }
              v10 = CScaleTransform3DGeneratedT<CScaleTransform3D,CTransform3D>::SetCenterZ(a1, *a4);
              v4 = v10;
              if ( v10 >= 0 )
                return v4;
              v12 = 6709;
            }
            else
            {
              v10 = CScaleTransform3DGeneratedT<CScaleTransform3D,CTransform3D>::SetCenterY(a1, *a4);
              v4 = v10;
              if ( v10 >= 0 )
                return v4;
              v12 = 6705;
            }
          }
          else
          {
            v10 = CScaleTransform3DGeneratedT<CScaleTransform3D,CTransform3D>::SetCenterX(a1, *a4);
            v4 = v10;
            if ( v10 >= 0 )
              return v4;
            v12 = 6701;
          }
        }
        else
        {
          v10 = CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetCenterX(a1, *a4);
          v4 = v10;
          if ( v10 >= 0 )
            return v4;
          v12 = 6697;
        }
      }
      else
      {
        v10 = CImageLegacyMilBrushGeneratedT<CImageLegacyMilBrush,CLegacyMilBrush>::SetCacheInvalidationThresholdMinimum(
                a1,
                *a4);
        v4 = v10;
        if ( v10 >= 0 )
          return v4;
        v12 = 6693;
      }
    }
    else
    {
      v10 = CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetScaleX(a1, *a4);
      v4 = v10;
      if ( v10 >= 0 )
        return v4;
      v12 = 6689;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v12, 0LL);
    return v4;
  }
  v4 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x1A3Eu, 0LL);
  return v4;
}
