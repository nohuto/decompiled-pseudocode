/*
 * XREFs of ?RecomputeOrientationBiasPixels@DragRecognizer@@AEAAXXZ @ 0x1801ADF10
 * Callers:
 *     ?ResetConfigValues@DragRecognizer@@UEAAXXZ @ 0x1801ADFE0 (-ResetConfigValues@DragRecognizer@@UEAAXXZ.c)
 *     ?SetConfigValue@DragRecognizer@@UEAA_NPEBUGestureRecognizerConfigValue@@@Z @ 0x1801AE030 (-SetConfigValue@DragRecognizer@@UEAA_NPEBUGestureRecognizerConfigValue@@@Z.c)
 * Callees:
 *     _o_tan_0 @ 0x18009D368 (_o_tan_0.c)
 */

void __fastcall DragRecognizer::RecomputeOrientationBiasPixels(DragRecognizer *this)
{
  int v1; // eax

  v1 = 44;
  if ( *((_WORD *)this + 9) <= 0x2Cu )
    v1 = *((unsigned __int16 *)this + 9);
  *((_WORD *)this + 10) = (int)((o_tan_0(((double)v1 + 45.0) * 0.01745329251994333) - 1.0)
                              * (double)*((unsigned __int16 *)this + 8)
                              + 0.5);
}
