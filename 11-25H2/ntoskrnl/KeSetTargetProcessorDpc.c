/*
 * XREFs of KeSetTargetProcessorDpc @ 0x14047F9F0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x1403B30F0 (KeGetProcessorIndexFromNumber.c)
 */

void __stdcall KeSetTargetProcessorDpc(PRKDPC Dpc, CCHAR Number)
{
  unsigned __int16 v4; // bx
  ULONG ProcessorIndexFromNumber; // eax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp+10h] BYREF

  if ( KeForceGroupAwareness )
    v4 = KiActiveGroups - 1;
  else
    v4 = 0;
  if ( Number < KeQueryActiveProcessorCountEx(v4) )
  {
    ProcNumber.Group = v4;
    ProcNumber.Number = Number;
    ProcNumber.Reserved = 0;
    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
    if ( ProcessorIndexFromNumber != -1 && !Dpc->DpcData )
      Dpc->Number = ProcessorIndexFromNumber + 2048;
  }
}
