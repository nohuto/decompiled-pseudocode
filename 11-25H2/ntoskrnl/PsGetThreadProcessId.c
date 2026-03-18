/*
 * XREFs of PsGetThreadProcessId @ 0x1404678F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadProcessId(PETHREAD Thread)
{
  return (HANDLE)Thread[1].CycleTime;
}
