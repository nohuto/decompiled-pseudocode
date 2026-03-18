/*
 * XREFs of IsCurrentSessionInServerSilo @ 0x14014C424
 * Callers:
 *     SetConnectCompletedState @ 0x14014C390 (SetConnectCompletedState.c)
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 *     InitializeGre @ 0x1402E6D50 (InitializeGre.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsCurrentSessionInServerSilo()
{
  return (unsigned int)RtlGetCurrentServiceSessionId() != 0;
}
