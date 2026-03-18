/*
 * XREFs of ?ScaleAndOffset@@YAGGMM@Z @ 0x14019AE34
 * Callers:
 *     ?AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x140196D9C (-AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUS.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall ScaleAndOffset(unsigned __int16 a1, float a2, float a3)
{
  int v3; // eax

  v3 = (int)(float)((float)((float)((float)((float)a1 / 65535.0) * a2) + a3) * 65535.0);
  if ( v3 <= 0xFFFF )
  {
    if ( v3 < 0 )
      LOWORD(v3) = 0;
  }
  else
  {
    LOWORD(v3) = -1;
  }
  return v3;
}
