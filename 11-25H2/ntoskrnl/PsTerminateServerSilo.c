/*
 * XREFs of PsTerminateServerSilo @ 0x140762A00
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407632B0 (PspInitializeServerSiloDeferred.c)
 *     PsShutdownSystem @ 0x140768C94 (PsShutdownSystem.c)
 *     PspCatchCriticalBreak @ 0x140769208 (PspCatchCriticalBreak.c)
 *     NtSetSystemPowerState @ 0x140B4F250 (NtSetSystemPowerState.c)
 *     ExpSystemErrorHandler2 @ 0x140B51340 (ExpSystemErrorHandler2.c)
 * Callees:
 *     PsIsServerSilo @ 0x1403104CC (PsIsServerSilo.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1408DBBF8 (PspTerminateAllProcessesInJobHierarchy.c)
 */

void __fastcall PsTerminateServerSilo(__int64 a1)
{
  struct _KEVENT *v1; // rcx

  if ( a1 )
  {
    if ( PsIsServerSilo(a1) )
      PspTerminateAllProcessesInJobHierarchy(v1);
  }
}
