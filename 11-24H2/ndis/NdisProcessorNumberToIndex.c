/*
 * XREFs of NdisProcessorNumberToIndex @ 0x1400D4530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall NdisProcessorNumberToIndex(PROCESSOR_NUMBER ProcNum)
{
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp+8h] BYREF

  ProcNumber = ProcNum;
  return KeGetProcessorIndexFromNumber(&ProcNumber);
}
