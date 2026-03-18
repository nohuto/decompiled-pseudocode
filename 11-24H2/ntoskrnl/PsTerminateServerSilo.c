/*
 * XREFs of PsTerminateServerSilo @ 0x1407723C0
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x140772C80 (PspInitializeServerSiloDeferred.c)
 *     PsShutdownSystem @ 0x140778944 (PsShutdownSystem.c)
 *     PspCatchCriticalBreak @ 0x140778EB8 (PspCatchCriticalBreak.c)
 *     NtSetSystemPowerState @ 0x140B5F390 (NtSetSystemPowerState.c)
 *     ExpSystemErrorHandler2 @ 0x140B61470 (ExpSystemErrorHandler2.c)
 * Callees:
 *     PsIsServerSilo @ 0x140349B68 (PsIsServerSilo.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1408EAFCC (PspTerminateAllProcessesInJobHierarchy.c)
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
