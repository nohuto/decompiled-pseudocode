/*
 * XREFs of ?CalculateBlurRadius@CProjectedShadowScene@@AEBAMM@Z @ 0x18011C3AC
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18011B580 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     <none>
 */

float __fastcall CProjectedShadowScene::CalculateBlurRadius(CProjectedShadowScene *this, float a2)
{
  float v3; // xmm0_4

  v3 = fmaxf(*((float *)this + 31), a2 * *((float *)this + 32));
  return fminf(*((float *)this + 30), v3);
}
