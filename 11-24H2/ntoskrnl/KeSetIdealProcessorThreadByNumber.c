/*
 * XREFs of KeSetIdealProcessorThreadByNumber @ 0x1403B4160
 * Callers:
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 *     NtQueryInformationThread @ 0x1409A7C80 (NtQueryInformationThread.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140352BB0 (KeGetProcessorIndexFromNumber.c)
 *     KeGetProcessorNumberFromIndex @ 0x1403B41E0 (KeGetProcessorNumberFromIndex.c)
 *     KeSetIdealProcessorThreadEx @ 0x1403B422C (KeSetIdealProcessorThreadEx.c)
 */

__int64 __fastcall KeSetIdealProcessorThreadByNumber(
        struct _KTHREAD *a1,
        struct _PROCESSOR_NUMBER *a2,
        struct _PROCESSOR_NUMBER *a3)
{
  ULONG ProcessorIndexFromNumber; // eax
  unsigned int v6; // edi
  ULONG IdealProcessor; // ecx
  unsigned int v9; // eax

  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(a2);
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
