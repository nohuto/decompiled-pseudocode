/*
 * XREFs of PsIsProcessInSilo @ 0x14041A2C0
 * Callers:
 *     PsIsThreadInSilo @ 0x14041A27C (PsIsThreadInSilo.c)
 *     PsLookupThreadByThreadId @ 0x14084E700 (PsLookupThreadByThreadId.c)
 *     PsOpenProcess @ 0x1408572E0 (PsOpenProcess.c)
 *     PspThreadFromTicket @ 0x1408B93E0 (PspThreadFromTicket.c)
 *     ExProcessCounterSetCallback @ 0x1408DE7B0 (ExProcessCounterSetCallback.c)
 *     PsLookupProcessByProcessId @ 0x140921F20 (PsLookupProcessByProcessId.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409A4E30 (NtAlertThreadByThreadIdEx.c)
 *     NtGetNextProcess @ 0x140A32180 (NtGetNextProcess.c)
 *     ExpGetProcessInformation @ 0x140AD0210 (ExpGetProcessInformation.c)
 * Callees:
 *     PspGetJobSilo @ 0x14041A350 (PspGetJobSilo.c)
 *     PspIsSiloInSilo @ 0x1409BB234 (PspIsSiloInSilo.c)
 */

bool __fastcall PsIsProcessInSilo(struct _KPROCESS *a1, __int64 a2)
{
  __int64 JobSilo; // rax

  if ( !a2 || a1 == PsInitialSystemProcess || a1 == PsIdleProcess )
    return 1;
  JobSilo = PspGetJobSilo(a1[1].Padding[3]);
  return (unsigned __int8)PspIsSiloInSilo(JobSilo) != 0;
}
