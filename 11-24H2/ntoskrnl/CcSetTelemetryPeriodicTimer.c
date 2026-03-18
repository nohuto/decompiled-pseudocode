/*
 * XREFs of CcSetTelemetryPeriodicTimer @ 0x140AC25B4
 * Callers:
 *     CcAsyncCopyRead @ 0x1402A94F0 (CcAsyncCopyRead.c)
 *     CcFlushCachePreProcess @ 0x1402AC290 (CcFlushCachePreProcess.c)
 *     CcSetValidData @ 0x140372324 (CcSetValidData.c)
 *     CcCopyWriteEx @ 0x1404A1E30 (CcCopyWriteEx.c)
 *     CcCopyReadEx @ 0x1404DBF70 (CcCopyReadEx.c)
 *     CcInitializeTelemetry @ 0x140BDE6B0 (CcInitializeTelemetry.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140334000 (KeSetCoalescableTimer.c)
 */

char __fastcall CcSetTelemetryPeriodicTimer(LARGE_INTEGER DueTime)
{
  signed __int32 v1; // eax

  v1 = _InterlockedCompareExchange(&dword_140F8E624, 1, 0);
  if ( !v1 )
    LOBYTE(v1) = KeSetCoalescableTimer(&Timer, DueTime, 0, 0x3A98u, &stru_140F8E630);
  return v1;
}
