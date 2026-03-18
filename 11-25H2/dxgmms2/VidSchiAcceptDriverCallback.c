/*
 * XREFs of VidSchiAcceptDriverCallback @ 0x1400A6770
 * Callers:
 *     VidSchiWorkerThread @ 0x1400A5280 (VidSchiWorkerThread.c)
 *     VidSchRestartAdapter @ 0x1400A5B70 (VidSchRestartAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiAcceptDriverCallback(__int64 a1)
{
  return DpiSetSchedulerCallbackState(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 216LL), 3LL);
}
