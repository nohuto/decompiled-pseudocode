/*
 * XREFs of DifIsPluginEnabled @ 0x14060D7C4
 * Callers:
 *     DifIsValidTrackingObject @ 0x14060BBFC (DifIsValidTrackingObject.c)
 * Callees:
 *     <none>
 */

char __fastcall DifIsPluginEnabled(unsigned int a1)
{
  if ( a1 < 0x40 )
    return DifPluginStates[a1];
  else
    return 0;
}
