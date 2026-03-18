/*
 * XREFs of ?SetProperty@?$CRotateTransformGeneratedT@VCRotateTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180226430
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetScaleX@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x1802029C0 (-SetScaleX@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z.c)
 *     ?SetCacheInvalidationThresholdMinimum@?$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJM@Z @ 0x1802029EC (-SetCacheInvalidationThresholdMinimum@-$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VC.c)
 *     ?SetCenterX@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x1802208D4 (-SetCenterX@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z.c)
 */

__int64 __fastcall CRotateTransformGeneratedT<CRotateTransform,CTransform>::SetProperty(
        float *a1,
        int a2,
        int a3,
        float *a4)
{
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // edx
  int v7; // eax
  unsigned int v9; // [rsp+20h] [rbp-18h]

  if ( a3 == 18 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
        {
          v4 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x1B14u, 0LL);
          return v4;
        }
        v7 = CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetCenterX(a1, *a4);
        v4 = v7;
        if ( v7 >= 0 )
          return v4;
        v9 = 6928;
      }
      else
      {
        v7 = CImageLegacyMilBrushGeneratedT<CImageLegacyMilBrush,CLegacyMilBrush>::SetCacheInvalidationThresholdMinimum(
               a1,
               *a4);
        v4 = v7;
        if ( v7 >= 0 )
          return v4;
        v9 = 6924;
      }
    }
    else
    {
      v7 = CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetScaleX(a1, *a4);
      v4 = v7;
      if ( v7 >= 0 )
        return v4;
      v9 = 6920;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, v9, 0LL);
    return v4;
  }
  v4 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x1B19u, 0LL);
  return v4;
}
