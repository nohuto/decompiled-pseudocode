/*
 * XREFs of KiEpfHandleNotification @ 0x1405C0B20
 * Callers:
 *     KiVirtualizationException @ 0x1406BCC00 (KiVirtualizationException.c)
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x1405C0A9C (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x1405C0B44 (KiEpfStart.c)
 */

__int64 __fastcall KiEpfHandleNotification(__int64 a1)
{
  KiEpfDrainCompletionQueue();
  return KiEpfStart(a1);
}
