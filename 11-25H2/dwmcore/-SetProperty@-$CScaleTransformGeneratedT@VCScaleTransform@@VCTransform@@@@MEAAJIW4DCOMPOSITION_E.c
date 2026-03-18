/*
 * XREFs of ?SetProperty@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180077B90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCacheInvalidationThresholdMinimum@?$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJM@Z @ 0x180077B3C (-SetCacheInvalidationThresholdMinimum@-$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VC.c)
 *     ?SetScaleX@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x180077C50 (-SetScaleX@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetCenterX@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x180229AD8 (-SetCenterX@-$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z.c)
 *     ?SetCenterX@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x18022B974 (-SetCenterX@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z.c)
 */

__int64 __fastcall CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetProperty(
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
  unsigned int v11; // [rsp+20h] [rbp-18h]

  if ( a3 != 18 )
  {
    v8 = -2147024809;
    v6 = -2147024809;
    v11 = 7183;
LABEL_6:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v11, 0LL);
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
        if ( v10 != 1 )
        {
          v6 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1C0Au, 0LL);
          return v6;
        }
        v5 = CScaleTransform3DGeneratedT<CScaleTransform3D,CTransform3D>::SetCenterX();
        v6 = v5;
        if ( v5 >= 0 )
          return v6;
        v11 = 7174;
      }
      else
      {
        v5 = CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetCenterX();
        v6 = v5;
        if ( v5 >= 0 )
          return v6;
        v11 = 7170;
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
      v11 = 7166;
    }
    goto LABEL_19;
  }
  v5 = CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetScaleX();
  v6 = v5;
  if ( v5 < 0 )
  {
    v11 = 7162;
LABEL_19:
    v8 = v5;
    goto LABEL_6;
  }
  return v6;
}
