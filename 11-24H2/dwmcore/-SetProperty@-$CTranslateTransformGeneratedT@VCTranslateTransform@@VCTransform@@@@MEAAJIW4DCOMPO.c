/*
 * XREFs of ?SetProperty@?$CTranslateTransformGeneratedT@VCTranslateTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18020AC90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetScaleX@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x1802029C0 (-SetScaleX@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z.c)
 *     ?SetCacheInvalidationThresholdMinimum@?$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJM@Z @ 0x1802029EC (-SetCacheInvalidationThresholdMinimum@-$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VC.c)
 */

__int64 __fastcall CTranslateTransformGeneratedT<CTranslateTransform,CTransform>::SetProperty(
        float *a1,
        int a2,
        int a3,
        float *a4)
{
  int v4; // edx
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // r9d
  unsigned int v9; // [rsp+20h] [rbp-18h]

  if ( a3 != 18 )
  {
    v8 = -2147024809;
    v6 = -2147024809;
    v9 = 7729;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, v9, 0LL);
    return v6;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v5 = CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetScaleX(a1, *a4);
    v6 = v5;
    if ( v5 >= 0 )
      return v6;
    v9 = 7716;
    goto LABEL_13;
  }
  if ( v4 != 1 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x1E2Cu, 0LL);
    return v6;
  }
  v5 = CImageLegacyMilBrushGeneratedT<CImageLegacyMilBrush,CLegacyMilBrush>::SetCacheInvalidationThresholdMinimum(
         a1,
         *a4);
  v6 = v5;
  if ( v5 < 0 )
  {
    v9 = 7720;
LABEL_13:
    v8 = v5;
    goto LABEL_7;
  }
  return v6;
}
