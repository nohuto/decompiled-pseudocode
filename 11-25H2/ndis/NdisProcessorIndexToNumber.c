/*
 * XREFs of NdisProcessorIndexToNumber @ 0x1400DB850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NdisProcessorIndexToNumber(ULONG ProcIndex, PPROCESSOR_NUMBER ProcNum)
{
  return KeGetProcessorNumberFromIndex(ProcIndex, ProcNum);
}
