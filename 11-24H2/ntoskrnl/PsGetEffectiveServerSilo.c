/*
 * XREFs of PsGetEffectiveServerSilo @ 0x1403C3570
 * Callers:
 *     UpcaseUnicodeToMultiByteNHelper @ 0x140408570 (UpcaseUnicodeToMultiByteNHelper.c)
 *     EtwTraceContextSwap @ 0x140415C40 (EtwTraceContextSwap.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetJobServerSilo @ 0x1404B2120 (PsGetJobServerSilo.c)
 *     PspIsSiloInServerSilo @ 0x1405E22FC (PspIsSiloInServerSilo.c)
 *     ObpCreateDosDevicesDirectory @ 0x14074168C (ObpCreateDosDevicesDirectory.c)
 *     PspImplicitAssignProcessToJob @ 0x1408D79EC (PspImplicitAssignProcessToJob.c)
 *     PspGetMemoryPartitionImplicit @ 0x1408D7CF0 (PspGetMemoryPartitionImplicit.c)
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x140A41590 (PspEstimateNewProcessServerSilo.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140A52C64 (PspValidateJobAssignmentSiloPolicy.c)
 * Callees:
 *     PsIsServerSilo @ 0x1403C35A8 (PsIsServerSilo.c)
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
