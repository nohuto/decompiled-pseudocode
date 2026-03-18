/*
 * XREFs of DefaultDisableMonitoring @ 0x14054C400
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerStopProfileInterrupt @ 0x14054A174 (HalpTimerStopProfileInterrupt.c)
 */

void __fastcall DefaultDisableMonitoring(int a1)
{
  if ( !a1 )
    HalpTimerStopProfileInterrupt();
}
