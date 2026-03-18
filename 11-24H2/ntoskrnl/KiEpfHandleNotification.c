/*
 * XREFs of KiEpfHandleNotification @ 0x1405C3550
 * Callers:
 *     KiVirtualizationException @ 0x1406BBD00 (KiVirtualizationException.c)
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x1405C34CC (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x1405C3574 (KiEpfStart.c)
 */

__int64 __fastcall KiEpfHandleNotification(__int64 a1)
{
  KiEpfDrainCompletionQueue();
  return KiEpfStart(a1);
}
