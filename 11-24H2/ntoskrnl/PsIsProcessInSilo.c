/*
 * XREFs of PsIsProcessInSilo @ 0x140407120
 * Callers:
 *     PsIsThreadInSilo @ 0x1404070DC (PsIsThreadInSilo.c)
 *     PsLookupThreadByThreadId @ 0x140846770 (PsLookupThreadByThreadId.c)
 *     PsOpenProcess @ 0x140850610 (PsOpenProcess.c)
 *     ExProcessCounterSetCallback @ 0x14085F3F0 (ExProcessCounterSetCallback.c)
 *     NtGetNextProcess @ 0x1408615C0 (NtGetNextProcess.c)
 *     PspThreadFromTicket @ 0x1408EA5C0 (PspThreadFromTicket.c)
 *     PsLookupProcessByProcessId @ 0x1408F21F0 (PsLookupProcessByProcessId.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409892F0 (NtAlertThreadByThreadIdEx.c)
 *     ExpGetProcessInformation @ 0x140ADC640 (ExpGetProcessInformation.c)
 * Callees:
 *     PspGetJobSilo @ 0x1404071B0 (PspGetJobSilo.c)
 *     PspIsSiloInSilo @ 0x140A4F21C (PspIsSiloInSilo.c)
 */

bool __fastcall PsIsProcessInSilo(struct _KPROCESS *a1, __int64 a2)
{
  __int64 JobSilo; // rax

  if ( !a2 || a1 == PsInitialSystemProcess || a1 == PsIdleProcess )
    return 1;
  JobSilo = PspGetJobSilo(a1[1].Padding[3]);
  return (unsigned __int8)PspIsSiloInSilo(JobSilo) != 0;
}
