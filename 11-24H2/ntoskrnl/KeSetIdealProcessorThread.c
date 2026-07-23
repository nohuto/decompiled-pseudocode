/*
 * XREFs of KeSetIdealProcessorThread @ 0x140370950
 * Callers:
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140370440 (KeGetProcessorIndexFromNumber.c)
 *     KeSetIdealProcessorThreadEx @ 0x140370A64 (KeSetIdealProcessorThreadEx.c)
 */

UCHAR __stdcall KeSetIdealProcessorThread(PKTHREAD Thread, UCHAR Processor)
{
  unsigned __int16 AffinityPrimaryGroup; // ax
  ULONG ProcessorIndexFromNumber; // eax
  unsigned int IdealProcessor; // eax
  int v6; // eax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp+10h] BYREF
  int v9; // [rsp+40h] [rbp+18h]

  v9 = 0;
  if ( Thread == KeGetCurrentThread() )
    AffinityPrimaryGroup = Thread->AffinityPrimaryGroup;
  else
    AffinityPrimaryGroup = Thread->UserAffinityPrimaryGroup;
  ProcNumber.Group = AffinityPrimaryGroup;
  ProcNumber.Number = Processor;
  ProcNumber.Reserved = 0;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
  if ( ProcessorIndexFromNumber == -1 )
  {
    if ( Thread == KeGetCurrentThread() )
      IdealProcessor = Thread->IdealProcessor;
    else
      IdealProcessor = Thread->UserIdealProcessor;
  }
  else
  {
    KeSetIdealProcessorThreadEx(Thread, ProcessorIndexFromNumber);
    IdealProcessor = 0;
  }
  if ( IdealProcessor && IdealProcessor < KeMaximumProcessors && (v6 = *((_DWORD *)KiGlobalState + IdealProcessor)) != 0 )
    return v6 & 0x3F;
  else
    return BYTE2(v9);
}
