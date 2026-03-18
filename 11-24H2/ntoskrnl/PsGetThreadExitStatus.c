/*
 * XREFs of PsGetThreadExitStatus @ 0x1409A9660
 * Callers:
 *     MiInjectThreadForHotPatch @ 0x1407F3144 (MiInjectThreadForHotPatch.c)
 *     NtQueryInformationThread @ 0x1409A7C80 (NtQueryInformationThread.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 */

NTSTATUS __stdcall PsGetThreadExitStatus(PETHREAD Thread)
{
  struct _EX_RUNDOWN_REF *p_WaitStatus; // rdi

  p_WaitStatus = (struct _EX_RUNDOWN_REF *)&Thread[1].WaitStatus;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
    return Thread[1].Timer.DueTime.LowPart;
  ExReleaseRundownProtection_0(p_WaitStatus);
  return 259;
}
