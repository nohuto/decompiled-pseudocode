/*
 * XREFs of DlrmGetActionFromPowerMode @ 0x140138BC4
 * Callers:
 *     DlrmEffectivePowerModeCallback @ 0x140138A90 (DlrmEffectivePowerModeCallback.c)
 *     DlrmHandlePowerStateAction @ 0x140138D50 (DlrmHandlePowerStateAction.c)
 *     StorProcessDripsCallbackForDlrm @ 0x14013A828 (StorProcessDripsCallbackForDlrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DlrmGetActionFromPowerMode(int a1)
{
  int v1; // ecx
  int v2; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 3LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 4LL;
  if ( v2 == 1 )
    return 5LL;
  return 0LL;
}
