/*
 * XREFs of GetProcessorEfficiencyClass @ 0x140028D44
 * Callers:
 *     RetrieveEfficiencyClassInformation @ 0x140029798 (RetrieveEfficiencyClassInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetProcessorEfficiencyClass(__int64 a1, _BYTE *a2)
{
  ULONG v2; // ecx
  NTSTATUS ProcessorNumberFromIndex; // ebx
  unsigned __int32 v5; // eax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *Pool2; // rax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v7; // rdi
  ULONG Length; // [rsp+30h] [rbp+8h] BYREF
  struct _PROCESSOR_NUMBER ProcessorNumber; // [rsp+40h] [rbp+18h] BYREF

  v2 = *(_DWORD *)(a1 + 56);
  ProcessorNumber = 0;
  ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(v2, &ProcessorNumber);
  if ( ProcessorNumberFromIndex >= 0 )
  {
    v5 = 80;
    Length = 80;
    while ( 1 )
    {
      Pool2 = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePool2(256LL, v5, 1919119952LL);
      v7 = Pool2;
      if ( !Pool2 )
        break;
      ProcessorNumberFromIndex = KeQueryLogicalProcessorRelationship(
                                   &ProcessorNumber,
                                   RelationProcessorCore,
                                   Pool2,
                                   &Length);
      if ( ProcessorNumberFromIndex >= 0 )
        *a2 = v7->Processor.Reserved[0];
      ExFreePoolWithTag(v7, (ULONG)1919119952);
      v5 = 2 * Length;
      Length *= 2;
      if ( ProcessorNumberFromIndex != -1073741820 )
        return (unsigned int)ProcessorNumberFromIndex;
    }
    return (unsigned int)-1073741670;
  }
  return (unsigned int)ProcessorNumberFromIndex;
}
