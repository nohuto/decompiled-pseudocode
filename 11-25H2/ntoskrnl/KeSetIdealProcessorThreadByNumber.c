/*
 * XREFs of KeSetIdealProcessorThreadByNumber @ 0x1403B2510
 * Callers:
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 *     NtQueryInformationThread @ 0x1409C32F0 (NtQueryInformationThread.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x1403B30F0 (KeGetProcessorIndexFromNumber.c)
 *     KeGetProcessorNumberFromIndex @ 0x1403B3140 (KeGetProcessorNumberFromIndex.c)
 *     KeSetIdealProcessorThreadEx @ 0x1403B3360 (KeSetIdealProcessorThreadEx.c)
 */

__int64 __fastcall KeSetIdealProcessorThreadByNumber(
        struct _KTHREAD *a1,
        PPROCESSOR_NUMBER ProcNumber,
        PPROCESSOR_NUMBER a3)
{
  ULONG ProcessorIndexFromNumber; // eax
  unsigned int v6; // edi
  ULONG IdealProcessor; // ecx
  unsigned int v9; // eax

  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  if ( ProcessorIndexFromNumber == -1 )
  {
    v6 = -1073741811;
    if ( a1 == KeGetCurrentThread() )
      IdealProcessor = a1->IdealProcessor;
    else
      IdealProcessor = a1->UserIdealProcessor;
  }
  else
  {
    v9 = KeSetIdealProcessorThreadEx(a1, ProcessorIndexFromNumber);
    IdealProcessor = 0;
    v6 = v9;
  }
  KeGetProcessorNumberFromIndex(IdealProcessor, a3);
  return v6;
}
