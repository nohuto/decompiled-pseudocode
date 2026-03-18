/*
 * XREFs of WheaExitCriticalState @ 0x14065BBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void WheaExitCriticalState()
{
  _InterlockedDecrement(&WheapCriticalStateRefCount);
}
