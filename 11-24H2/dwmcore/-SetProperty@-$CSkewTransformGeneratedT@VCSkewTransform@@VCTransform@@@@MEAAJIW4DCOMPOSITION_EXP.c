/*
 * XREFs of ?SetProperty@?$CSkewTransformGeneratedT@VCSkewTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180279AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetScaleX@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x1802029C0 (-SetScaleX@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z.c)
 *     ?SetCacheInvalidationThresholdMinimum@?$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJM@Z @ 0x1802029EC (-SetCacheInvalidationThresholdMinimum@-$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VC.c)
 *     ?SetCenterX@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x18021E4C0 (-SetCenterX@-$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z.c)
 *     ?SetCenterX@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x1802208D4 (-SetCenterX@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z.c)
 */

__int64 __fastcall CSkewTransformGeneratedT<CSkewTransform,CTransform>::SetProperty(
        float *a1,
        int a2,
        int a3,
        float *a4)
{
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // eax
  unsigned int v10; // [rsp+20h] [rbp-18h]

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
          if ( v7 != 1 )
          {
            v4 = -2147024809;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x1CFFu, 0LL);
            return v4;
          }
          v8 = CScaleTransform3DGeneratedT<CScaleTransform3D,CTransform3D>::SetCenterX(a1, *a4);
          v4 = v8;
          if ( v8 >= 0 )
            return v4;
          v10 = 7419;
        }
        else
        {
          v8 = CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetCenterX(a1, *a4);
          v4 = v8;
          if ( v8 >= 0 )
            return v4;
          v10 = 7415;
        }
      }
      else
      {
        v8 = CImageLegacyMilBrushGeneratedT<CImageLegacyMilBrush,CLegacyMilBrush>::SetCacheInvalidationThresholdMinimum(
               a1,
               *a4);
        v4 = v8;
        if ( v8 >= 0 )
          return v4;
        v10 = 7411;
      }
    }
    else
    {
      v8 = CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetScaleX(a1, *a4);
      v4 = v8;
      if ( v8 >= 0 )
        return v4;
      v10 = 7407;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, v10, 0LL);
    return v4;
  }
  v4 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x1D04u, 0LL);
  return v4;
}
