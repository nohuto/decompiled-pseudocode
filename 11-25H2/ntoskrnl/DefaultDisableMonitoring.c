/*
 * XREFs of DefaultDisableMonitoring @ 0x140549B10
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerStopProfileInterrupt @ 0x140547884 (HalpTimerStopProfileInterrupt.c)
 */

void __fastcall DefaultDisableMonitoring(int a1)
{
  if ( !a1 )
    HalpTimerStopProfileInterrupt();
}
