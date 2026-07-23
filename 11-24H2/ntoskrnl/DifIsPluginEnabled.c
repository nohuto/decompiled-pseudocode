/*
 * XREFs of DifIsPluginEnabled @ 0x140617D44
 * Callers:
 *     DifIsValidTrackingObject @ 0x14061617C (DifIsValidTrackingObject.c)
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
