/*
 * XREFs of KiEpfHandleNotification @ 0x1405BF470
 * Callers:
 *     KiVirtualizationException @ 0x1406B0A00 (KiVirtualizationException.c)
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x1405BF3EC (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x1405BF494 (KiEpfStart.c)
 */

__int64 __fastcall KiEpfHandleNotification(__int64 a1)
{
  KiEpfDrainCompletionQueue();
  return KiEpfStart(a1);
}
