/*
 * XREFs of PsGetEffectiveServerSilo @ 0x140310610
 * Callers:
 *     UpcaseUnicodeToMultiByteNHelper @ 0x14041A690 (UpcaseUnicodeToMultiByteNHelper.c)
 *     EtwTraceContextSwap @ 0x140429F10 (EtwTraceContextSwap.c)
 *     PsGetJobServerSilo @ 0x1404B8060 (PsGetJobServerSilo.c)
 *     PspIsSiloInServerSilo @ 0x1405D8E38 (PspIsSiloInServerSilo.c)
 *     ObpCreateDosDevicesDirectory @ 0x14073773C (ObpCreateDosDevicesDirectory.c)
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 *     PspImplicitAssignProcessToJob @ 0x1408D7F4C (PspImplicitAssignProcessToJob.c)
 *     PspGetMemoryPartitionImplicit @ 0x1408D81A0 (PspGetMemoryPartitionImplicit.c)
 *     PspEstimateNewProcessServerSilo @ 0x1409BD31C (PspEstimateNewProcessServerSilo.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140A58CFC (PspValidateJobAssignmentSiloPolicy.c)
 * Callees:
 *     PsIsServerSilo @ 0x1403104CC (PsIsServerSilo.c)
 */

__int64 __fastcall PsGetEffectiveServerSilo(__int64 a1)
{
  __int64 v2; // rcx

  if ( !a1 )
    return 0LL;
  if ( !PsIsServerSilo(a1) )
  {
    while ( !PsIsServerSilo(*(_QWORD *)(v2 + 1304)) )
      ;
  }
  return v2;
}
