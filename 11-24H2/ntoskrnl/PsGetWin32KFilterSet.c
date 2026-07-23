/*
 * XREFs of PsGetWin32KFilterSet @ 0x140447960
 * Callers:
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 PsGetWin32KFilterSet()
{
  return LODWORD(KeGetCurrentThread()->ApcState.Process[3].PerProcessorCycleTimes);
}
