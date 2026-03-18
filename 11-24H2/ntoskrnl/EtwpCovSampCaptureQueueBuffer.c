/*
 * XREFs of EtwpCovSampCaptureQueueBuffer @ 0x1404596C0
 * Callers:
 *     EtwpCovSampSampleBufferDecRef @ 0x1406520D4 (EtwpCovSampSampleBufferDecRef.c)
 *     EtwpCoverageSamplerQuery @ 0x14095DA30 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 */

char __fastcall EtwpCovSampCaptureQueueBuffer(__int64 a1, struct _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY v3; // rax

  if ( KeGetCurrentIrql() > 2u )
  {
    v3 = RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 1072), a2);
    if ( !v3 )
      LOBYTE(v3) = KeInsertQueueDpc((PRKDPC)(a1 + 1128), 0LL, 0LL);
  }
  else
  {
    v3 = RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 1088), a2);
    if ( !v3 )
      LOBYTE(v3) = KeSetEvent((PRKEVENT)(a1 + 1104), *(_DWORD *)(a1 + 1304), 0);
  }
  return (char)v3;
}
