/*
 * XREFs of ?SetProperty@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180202900
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetScaleX@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x1802029C0 (-SetScaleX@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z.c)
 *     ?SetCacheInvalidationThresholdMinimum@?$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJM@Z @ 0x1802029EC (-SetCacheInvalidationThresholdMinimum@-$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VC.c)
 *     ?SetCenterX@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x18021E4C0 (-SetCenterX@-$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z.c)
 *     ?SetCenterX@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x1802208D4 (-SetCenterX@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z.c)
 */

__int64 __fastcall CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetProperty(__int64 a1, int a2, int a3)
{
  int v3; // edx
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // r9d
  int v8; // edx
  int v9; // edx
  unsigned int v10; // [rsp+20h] [rbp-18h]

  if ( a3 != 18 )
  {
    v7 = -2147024809;
    v5 = -2147024809;
    v10 = 7183;
LABEL_6:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, v10, 0LL);
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
        if ( v9 != 1 )
        {
          v5 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x1C0Au, 0LL);
          return v5;
        }
        v4 = CScaleTransform3DGeneratedT<CScaleTransform3D,CTransform3D>::SetCenterX();
        v5 = v4;
        if ( v4 >= 0 )
          return v5;
        v10 = 7174;
      }
      else
      {
        v4 = CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetCenterX();
        v5 = v4;
        if ( v4 >= 0 )
          return v5;
        v10 = 7170;
      }
    }
    else
    {
      v4 = CImageLegacyMilBrushGeneratedT<CImageLegacyMilBrush,CLegacyMilBrush>::SetCacheInvalidationThresholdMinimum();
      v5 = v4;
      if ( v4 >= 0 )
        return v5;
      v10 = 7166;
    }
    goto LABEL_19;
  }
  v4 = CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetScaleX();
  v5 = v4;
  if ( v4 < 0 )
  {
    v10 = 7162;
LABEL_19:
    v7 = v4;
    goto LABEL_6;
  }
  return v5;
}
