/*
 * XREFs of PsGetEffectiveServerSilo @ 0x140349B30
 * Callers:
 *     EtwpEventWriteFull @ 0x140328590 (EtwpEventWriteFull.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x1404187C0 (UpcaseUnicodeToMultiByteNHelper.c)
 *     EtwTraceContextSwap @ 0x140421D90 (EtwTraceContextSwap.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetJobServerSilo @ 0x1404B7940 (PsGetJobServerSilo.c)
 *     PspIsSiloInServerSilo @ 0x1405E4DD4 (PspIsSiloInServerSilo.c)
 *     ObpCreateDosDevicesDirectory @ 0x14074375C (ObpCreateDosDevicesDirectory.c)
 *     PspImplicitAssignProcessToJob @ 0x1408E7184 (PspImplicitAssignProcessToJob.c)
 *     PspGetMemoryPartitionImplicit @ 0x1408E7494 (PspGetMemoryPartitionImplicit.c)
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x140A4A930 (PspEstimateNewProcessServerSilo.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140A5B354 (PspValidateJobAssignmentSiloPolicy.c)
 * Callees:
 *     PsIsServerSilo @ 0x140349B68 (PsIsServerSilo.c)
 */

__int64 __fastcall PsGetEffectiveServerSilo(__int64 a1)
{
  __int64 v2; // rcx

  if ( !a1 )
    return 0LL;
  if ( !(unsigned __int8)PsIsServerSilo(a1) )
  {
    while ( !(unsigned __int8)PsIsServerSilo(*(_QWORD *)(v2 + 1304)) )
      ;
  }
  return v2;
}
