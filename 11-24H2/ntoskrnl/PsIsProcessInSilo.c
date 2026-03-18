/*
 * XREFs of PsIsProcessInSilo @ 0x14040EF20
 * Callers:
 *     PsIsThreadInSilo @ 0x14040EEDC (PsIsThreadInSilo.c)
 *     PsLookupThreadByThreadId @ 0x14084A4B0 (PsLookupThreadByThreadId.c)
 *     PsOpenProcess @ 0x140854350 (PsOpenProcess.c)
 *     ExProcessCounterSetCallback @ 0x1408EDBC0 (ExProcessCounterSetCallback.c)
 *     NtGetNextProcess @ 0x1408EFDC0 (NtGetNextProcess.c)
 *     PspThreadFromTicket @ 0x140912E70 (PspThreadFromTicket.c)
 *     PsLookupProcessByProcessId @ 0x14094DC80 (PsLookupProcessByProcessId.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409A5CD0 (NtAlertThreadByThreadIdEx.c)
 *     ExpGetProcessInformation @ 0x140ADAE00 (ExpGetProcessInformation.c)
 * Callees:
 *     PspGetJobSilo @ 0x14040EFB0 (PspGetJobSilo.c)
 *     PspIsSiloInSilo @ 0x140A57A74 (PspIsSiloInSilo.c)
 */

bool __fastcall PsIsProcessInSilo(struct _KPROCESS *a1, __int64 a2)
{
  __int64 JobSilo; // rax

  if ( !a2 || a1 == PsInitialSystemProcess || a1 == PsIdleProcess )
    return 1;
  JobSilo = PspGetJobSilo(a1[1].Padding[3]);
  return (unsigned __int8)PspIsSiloInSilo(JobSilo) != 0;
}
