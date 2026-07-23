/*
 * XREFs of KiEpfCompletionDpcRoutine @ 0x1405C0A80
 * Callers:
 *     <none>
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x1405C0A9C (KiEpfDrainCompletionQueue.c)
 */

__int64 KiEpfCompletionDpcRoutine()
{
  _InterlockedIncrement(&dword_140F102AC);
  return KiEpfDrainCompletionQueue();
}
