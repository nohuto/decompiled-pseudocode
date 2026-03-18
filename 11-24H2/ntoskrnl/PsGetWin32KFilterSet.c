/*
 * XREFs of PsGetWin32KFilterSet @ 0x1404528B0
 * Callers:
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 PsGetWin32KFilterSet()
{
  return LODWORD(KeGetCurrentThread()->ApcState.Process[3].PerProcessorCycleTimes);
}
