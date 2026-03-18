/*
 * XREFs of CcSetTelemetryPeriodicTimer @ 0x140ABE7C4
 * Callers:
 *     CcFlushCachePreProcess @ 0x1402D9F6C (CcFlushCachePreProcess.c)
 *     CcSetValidData @ 0x14035B530 (CcSetValidData.c)
 *     CcAsyncCopyRead @ 0x1403AAC00 (CcAsyncCopyRead.c)
 *     CcCopyWriteEx @ 0x1404A2430 (CcCopyWriteEx.c)
 *     CcCopyReadEx @ 0x1404DC880 (CcCopyReadEx.c)
 *     CcInitializeTelemetry @ 0x140BCD6B0 (CcInitializeTelemetry.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1402ECF90 (KeSetCoalescableTimer.c)
 */

char __fastcall CcSetTelemetryPeriodicTimer(LARGE_INTEGER DueTime)
{
  signed __int32 v1; // eax

  v1 = _InterlockedCompareExchange(&dword_140F8DE64, 1, 0);
  if ( !v1 )
    LOBYTE(v1) = KeSetCoalescableTimer(&Timer, DueTime, 0, 0x3A98u, &stru_140F8DE70);
  return v1;
}
