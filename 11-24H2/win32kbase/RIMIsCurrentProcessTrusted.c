/*
 * XREFs of RIMIsCurrentProcessTrusted @ 0x1400CFC20
 * Callers:
 *     rimCheckForRegistrationConflicts @ 0x1400CFAA4 (rimCheckForRegistrationConflicts.c)
 *     RIMCreateDev @ 0x1401D15BC (RIMCreateDev.c)
 * Callees:
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CFC50 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x14014F600 (CheckDwmProcessSecurityIdentifier.c)
 */

__int64 RIMIsCurrentProcessTrusted()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( (unsigned int)IsCurrentProcessDwm() || (int)CheckDwmProcessSecurityIdentifier() >= 0 )
    return 1;
  return v0;
}
