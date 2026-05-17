/*
 * XREFs of RtlpHeapTrkSyncWithDiagnoser @ 0x180113320
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x18003EA50 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHeapTrkReportResult @ 0x18003EC58 (RtlpHeapTrkReportResult.c)
 * Callees:
 *     ZwSetEvent @ 0x180161E50 (ZwSetEvent.c)
 *     NtWaitForMultipleObjects @ 0x1801627E0 (NtWaitForMultipleObjects.c)
 */

char RtlpHeapTrkSyncWithDiagnoser()
{
  _QWORD v1[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v2; // [rsp+50h] [rbp+8h] BYREF

  if ( TrkContext )
  {
    v1[0] = *(_QWORD *)(TrkContext + 8);
    v1[1] = *(_QWORD *)(TrkContext + 24);
    v2 = -100000000LL;
    ZwSetEvent(*(_QWORD *)(TrkContext + 16), 0LL);
    if ( (unsigned int)NtWaitForMultipleObjects(2LL, v1, 1LL, 0LL, &v2) == 1 )
      return 1;
  }
  byte_1801CE830 = 1;
  return 0;
}
