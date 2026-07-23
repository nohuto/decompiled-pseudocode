/*
 * XREFs of PspEstimateNewProcessServerSilo @ 0x140A41590
 * Callers:
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1403C3570 (PsGetEffectiveServerSilo.c)
 *     PsIsHostSilo @ 0x1404329D0 (PsIsHostSilo.c)
 *     PsGetProcessServerSilo @ 0x14043D810 (PsGetProcessServerSilo.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x14047F700 (PdcCreateWatchdogAroundClientCall.c)
 */

__int64 __fastcall PspEstimateNewProcessServerSilo(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 ProcessServerSilo; // rbx
  __int64 i; // rbx
  __int64 EffectiveServerSilo; // rdi

  if ( a1 )
  {
    ProcessServerSilo = PsGetProcessServerSilo(a1);
    if ( !PsIsHostSilo(ProcessServerSilo) )
      return ProcessServerSilo;
  }
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= a3 )
      return PdcCreateWatchdogAroundClientCall();
    EffectiveServerSilo = PsGetEffectiveServerSilo(*(_QWORD *)(a2 + 8 * i));
    if ( !PsIsHostSilo(EffectiveServerSilo) )
      break;
  }
  return EffectiveServerSilo;
}
