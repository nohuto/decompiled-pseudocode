/*
 * XREFs of HalpPreprocessNmi @ 0x140559D80
 * Callers:
 *     <none>
 * Callees:
 *     HalpWatchdogCheckPreResetNMI @ 0x14054B0C4 (HalpWatchdogCheckPreResetNMI.c)
 *     HalpInterruptRebootService @ 0x14055A1D0 (HalpInterruptRebootService.c)
 */

char __fastcall HalpPreprocessNmi(int a1)
{
  char result; // al

  if ( a1 )
  {
    if ( a1 == 1 )
      return HalpWatchdogCheckPreResetNMI();
  }
  else
  {
    result = HalpInterruptNmiRebootInProgress;
    if ( HalpInterruptNmiRebootInProgress )
      HalpInterruptRebootService(0LL, 0LL);
  }
  return result;
}
