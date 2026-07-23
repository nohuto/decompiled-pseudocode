/*
 * XREFs of RtlpHeapTrkSyncWithDiagnoser @ 0x18010E570
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x18001ECD0 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHeapTrkReportResult @ 0x18001EED8 (RtlpHeapTrkReportResult.c)
 * Callees:
 *     ZwSetEvent @ 0x180160210 (ZwSetEvent.c)
 *     NtWaitForMultipleObjects @ 0x180160BA0 (NtWaitForMultipleObjects.c)
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
  byte_1801CD828 = 1;
  return 0;
}
