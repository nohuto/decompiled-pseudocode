/*
 * XREFs of InitCoreProcessorSetAffinity @ 0x1400220D4
 * Callers:
 *     InitEnergyCountersOnCurrentProcessor @ 0x140022170 (InitEnergyCountersOnCurrentProcessor.c)
 * Callees:
 *     GetDevExtFromIndex @ 0x1400019B0 (GetDevExtFromIndex.c)
 *     memset @ 0x14000DAC0 (memset.c)
 */

__int64 InitCoreProcessorSetAffinity()
{
  ULONG Number; // ebx
  NTSTATUS ProcessorNumberFromIndex; // r8d
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+20h] [rbp-58h] BYREF
  struct _PROCESSOR_NUMBER ProcessorNumber; // [rsp+80h] [rbp+8h] BYREF
  ULONG Length; // [rsp+88h] [rbp+10h] BYREF

  ProcessorNumber = 0;
  Number = KeGetPcr()->Prcb.Number;
  ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(Number, &ProcessorNumber);
  if ( ProcessorNumberFromIndex >= 0 )
  {
    Length = 80;
    memset(&Information, 0, sizeof(Information));
    ProcessorNumberFromIndex = KeQueryLogicalProcessorRelationship(
                                 &ProcessorNumber,
                                 RelationProcessorCore,
                                 &Information,
                                 &Length);
    if ( ProcessorNumberFromIndex >= 0 )
      *(_OWORD *)(GetDevExtFromIndex(Number) + 1208) = *(_OWORD *)&Information.Group.GroupInfo[0].MaximumProcessorCount;
  }
  return (unsigned int)ProcessorNumberFromIndex;
}
