/*
 * XREFs of SSHSupportQueryIsLibraryEnabled @ 0x1404C926C
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     <none>
 */

bool SSHSupportQueryIsLibraryEnabled()
{
  return SleepstudyHelperAccountingEnabled != 0;
}
