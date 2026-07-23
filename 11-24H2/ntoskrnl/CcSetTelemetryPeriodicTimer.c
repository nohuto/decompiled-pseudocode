/*
 * XREFs of CcSetTelemetryPeriodicTimer @ 0x140ABD89C
 * Callers:
 *     CcSetValidData @ 0x14025ABE4 (CcSetValidData.c)
 *     CcAsyncCopyRead @ 0x140273E20 (CcAsyncCopyRead.c)
 *     CcFlushCachePreProcess @ 0x140278C74 (CcFlushCachePreProcess.c)
 *     CcCopyWriteEx @ 0x14049CDC0 (CcCopyWriteEx.c)
 *     CcCopyReadEx @ 0x1404D5990 (CcCopyReadEx.c)
 *     CcInitializeTelemetry @ 0x140BE06B0 (CcInitializeTelemetry.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1402BE6B0 (KeSetCoalescableTimer.c)
 */

char __fastcall CcSetTelemetryPeriodicTimer(LARGE_INTEGER DueTime)
{
  signed __int32 v1; // eax

  v1 = _InterlockedCompareExchange(&dword_140F8E804, 1, 0);
  if ( !v1 )
    LOBYTE(v1) = KeSetCoalescableTimer(&Timer, DueTime, 0, 0x3A98u, &stru_140F8E810);
  return v1;
}
