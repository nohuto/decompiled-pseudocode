/*
 * XREFs of PsGetWin32KFilterSet @ 0x1404509F0
 * Callers:
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 PsGetWin32KFilterSet()
{
  return LODWORD(KeGetCurrentThread()->ApcState.Process[3].PerProcessorCycleTimes);
}
