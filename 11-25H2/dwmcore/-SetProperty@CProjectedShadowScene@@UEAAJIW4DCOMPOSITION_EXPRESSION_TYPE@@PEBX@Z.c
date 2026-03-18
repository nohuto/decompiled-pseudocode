/*
 * XREFs of ?SetProperty@CProjectedShadowScene@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802AC090
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetBlurRadiusMultiplier@CProjectedShadowScene@@AEAAXM@Z @ 0x18025B32C (-SetBlurRadiusMultiplier@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetMaxBlurRadius@CProjectedShadowScene@@AEAAXM@Z @ 0x1802ABEDC (-SetMaxBlurRadius@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetMaxOpacity@CProjectedShadowScene@@AEAAXM@Z @ 0x1802ABF28 (-SetMaxOpacity@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetMinBlurRadius@CProjectedShadowScene@@AEAAXM@Z @ 0x1802ABF90 (-SetMinBlurRadius@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetMinOpacity@CProjectedShadowScene@@AEAAXM@Z @ 0x1802ABFDC (-SetMinOpacity@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetOpacityFalloff@CProjectedShadowScene@@AEAAXM@Z @ 0x1802AC044 (-SetOpacityFalloff@CProjectedShadowScene@@AEAAXM@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::SetProperty(CProjectedShadowScene *a1, int a2, int a3, float *a4)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  unsigned int v9; // ebx

  if ( a3 != 18 )
    goto LABEL_15;
  v4 = a2 - 1;
  if ( !v4 )
  {
    CProjectedShadowScene::SetBlurRadiusMultiplier(a1, *a4);
    return 0;
  }
  v5 = v4 - 3;
  if ( !v5 )
  {
    CProjectedShadowScene::SetMaxBlurRadius(a1, *a4);
    return 0;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    CProjectedShadowScene::SetMaxOpacity(a1, *a4);
    return 0;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    CProjectedShadowScene::SetMinBlurRadius(a1, *a4);
    return 0;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    CProjectedShadowScene::SetMinOpacity(a1, *a4);
    return 0;
  }
  if ( v8 != 1 )
  {
LABEL_15:
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0xDAu, 0LL);
    return v9;
  }
  CProjectedShadowScene::SetOpacityFalloff(a1, *a4);
  return 0;
}
