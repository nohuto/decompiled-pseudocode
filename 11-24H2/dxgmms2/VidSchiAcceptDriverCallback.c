/*
 * XREFs of VidSchiAcceptDriverCallback @ 0x1400A7FF0
 * Callers:
 *     VidSchiWorkerThread @ 0x1400A6B00 (VidSchiWorkerThread.c)
 *     VidSchRestartAdapter @ 0x1400A73F0 (VidSchRestartAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiAcceptDriverCallback(__int64 a1)
{
  return DpiSetSchedulerCallbackState(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 216LL), 3LL);
}
