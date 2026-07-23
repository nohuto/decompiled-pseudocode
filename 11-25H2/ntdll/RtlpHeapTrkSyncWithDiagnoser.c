/*
 * XREFs of RtlpHeapTrkSyncWithDiagnoser @ 0x1801162B0
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x180092440 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHeapTrkReportResult @ 0x180092648 (RtlpHeapTrkReportResult.c)
 * Callees:
 *     ZwSetEvent @ 0x1801633E0 (ZwSetEvent.c)
 *     NtWaitForMultipleObjects @ 0x180163D70 (NtWaitForMultipleObjects.c)
 */

char RtlpHeapTrkSyncWithDiagnoser()
{
  HANDLE Handles[3]; // [rsp+30h] [rbp-18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+50h] [rbp+8h] BYREF

  if ( TrkContext )
  {
    Handles[0] = *((HANDLE *)TrkContext + 1);
    Handles[1] = *((HANDLE *)TrkContext + 3);
    Timeout.QuadPart = -100000000LL;
    ZwSetEvent(*((HANDLE *)TrkContext + 2), 0LL);
    if ( NtWaitForMultipleObjects(2u, Handles, WaitAny, 0, &Timeout) == 1 )
      return 1;
  }
  byte_1801D0868 = 1;
  return 0;
}
