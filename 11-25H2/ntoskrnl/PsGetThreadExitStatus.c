/*
 * XREFs of PsGetThreadExitStatus @ 0x1409C4C30
 * Callers:
 *     MiInjectThreadForHotPatch @ 0x1407E32BC (MiInjectThreadForHotPatch.c)
 *     NtQueryInformationThread @ 0x1409C32F0 (NtQueryInformationThread.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 */

NTSTATUS __stdcall PsGetThreadExitStatus(PETHREAD Thread)
{
  struct _EX_RUNDOWN_REF *p_WaitStatus; // rdi

  p_WaitStatus = (struct _EX_RUNDOWN_REF *)&Thread[1].WaitStatus;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
    return Thread[1].Timer.DueTime.LowPart;
  ExReleaseRundownProtection_0(p_WaitStatus);
  return 259;
}
