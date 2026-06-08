/*
 * XREFs of ProcLibDriverCleanup @ 0x140023B7C
 * Callers:
 *     DriverEntry @ 0x14004214C (DriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS ProcLibDriverCleanup()
{
  REGHANDLE v0; // rcx
  NTSTATUS result; // eax

  if ( ProcLibEtwRegistered )
  {
    v0 = RegHandle;
    RegHandle = 0LL;
    dword_1400140F8 = 0;
    EtwUnregister(v0);
    result = EtwUnregister((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink);
    ProcLibEtwRegistered = 0;
  }
  return result;
}
