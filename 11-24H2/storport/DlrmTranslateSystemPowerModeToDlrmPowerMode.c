/*
 * XREFs of DlrmTranslateSystemPowerModeToDlrmPowerMode @ 0x140139084
 * Callers:
 *     DlrmEffectivePowerModeCallback @ 0x140138A90 (DlrmEffectivePowerModeCallback.c)
 *     StorProcessDripsCallbackForDlrm @ 0x14013A828 (StorProcessDripsCallbackForDlrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DlrmTranslateSystemPowerModeToDlrmPowerMode(int a1, char a2)
{
  int v2; // ecx

  if ( (unsigned int)(a1 - 3) <= 3 )
    return 3LL;
  if ( !a2 )
  {
    if ( a1 )
    {
      v2 = a1 - 1;
      if ( v2 )
        return v2 == 1;
    }
  }
  return 2LL;
}
