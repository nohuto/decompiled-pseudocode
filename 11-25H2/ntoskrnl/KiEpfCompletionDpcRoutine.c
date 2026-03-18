/*
 * XREFs of KiEpfCompletionDpcRoutine @ 0x1405BF3D0
 * Callers:
 *     <none>
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x1405BF3EC (KiEpfDrainCompletionQueue.c)
 */

__int64 KiEpfCompletionDpcRoutine()
{
  _InterlockedIncrement(&dword_140F0F7EC);
  return KiEpfDrainCompletionQueue();
}
