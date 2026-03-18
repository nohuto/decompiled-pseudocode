/*
 * XREFs of ?CalculateOpacity@CProjectedShadowScene@@AEBAMM@Z @ 0x18011C048
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18011B580 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 *     ?IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ @ 0x18011BEDC (-IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CProjectedShadowScene::CalculateOpacity(CProjectedShadowScene *this, float a2)
{
  float v2; // xmm2_4
  float v4; // xmm0_4

  v2 = *((float *)this + 35);
  if ( v2 <= 0.0 )
    return *((float *)this + 33);
  v4 = fmaxf(*((float *)this + 34), 1.0 - (float)(a2 / v2));
  return fminf(*((float *)this + 33), v4);
}
