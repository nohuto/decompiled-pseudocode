/*
 * XREFs of KiEpfCompletionDpcRoutine @ 0x1405C34B0
 * Callers:
 *     <none>
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x1405C34CC (KiEpfDrainCompletionQueue.c)
 */

__int64 KiEpfCompletionDpcRoutine()
{
  _InterlockedIncrement(&dword_140F0FFAC);
  return KiEpfDrainCompletionQueue();
}
