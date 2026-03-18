/*
 * XREFs of ?ScaleAndOffset@@YAMMMMMM@Z @ 0x14019AE78
 * Callers:
 *     ?AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x140196D9C (-AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUS.c)
 * Callees:
 *     <none>
 */

float __fastcall ScaleAndOffset(float a1, float a2, float a3, float a4, float a5)
{
  float result; // xmm0_4

  result = (float)(a1 * a2) + a3;
  if ( result > a5 )
    return a5;
  if ( a4 > result )
    return a4;
  return result;
}
