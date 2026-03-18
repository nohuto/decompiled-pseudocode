/*
 * XREFs of ?SetProperty@?$CTranslateTransformGeneratedT@VCTranslateTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180077A90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCacheInvalidationThresholdMinimum@?$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJM@Z @ 0x180077B3C (-SetCacheInvalidationThresholdMinimum@-$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VC.c)
 *     ?SetScaleX@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x180077C50 (-SetScaleX@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTranslateTransformGeneratedT<CTranslateTransform,CTransform>::SetProperty(
        __int64 a1,
        int a2,
        int a3)
{
  int v3; // edx
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // r9d
  unsigned int v8; // [rsp+20h] [rbp-18h]

  if ( a3 != 18 )
  {
    v7 = -2147024809;
    v5 = -2147024809;
    v8 = 7729;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v8, 0LL);
    return v5;
  }
  v3 = a2 - 1;
  if ( !v3 )
  {
    v4 = CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetScaleX();
    v5 = v4;
    if ( v4 >= 0 )
      return v5;
    v8 = 7716;
    goto LABEL_13;
  }
  if ( v3 != 1 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1E2Cu, 0LL);
    return v5;
  }
  v4 = CImageLegacyMilBrushGeneratedT<CImageLegacyMilBrush,CLegacyMilBrush>::SetCacheInvalidationThresholdMinimum();
  v5 = v4;
  if ( v4 < 0 )
  {
    v8 = 7720;
LABEL_13:
    v7 = v4;
    goto LABEL_7;
  }
  return v5;
}
