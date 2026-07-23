/*
 * XREFs of WheaEnterCriticalState @ 0x14065A290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void WheaEnterCriticalState()
{
  _InterlockedIncrement(&WheapCriticalStateRefCount);
}
