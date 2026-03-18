/*
 * XREFs of AcpiIrqLibInitializeGlobalState @ 0x1400C43B4
 * Callers:
 *     ACPIInitialize @ 0x1400C4008 (ACPIInitialize.c)
 * Callees:
 *     PcisuppInitGlobalState @ 0x140097684 (PcisuppInitGlobalState.c)
 *     ArbInitializeArbiterInstance @ 0x140097CD8 (ArbInitializeArbiterInstance.c)
 *     LinkNodeInitGlobalState @ 0x1400A8FC8 (LinkNodeInitGlobalState.c)
 *     IcInitGlobalState @ 0x1400AAD8C (IcInitGlobalState.c)
 *     ProcessorInitGlobalState @ 0x1400C895C (ProcessorInitGlobalState.c)
 */

__int64 __fastcall AcpiIrqLibInitializeGlobalState(__int64 a1)
{
  __int64 result; // rax

  qword_140089978 = (__int64)IrqArbTestAllocation;
  qword_140089980 = (__int64)IrqArbRetestAllocation;
  qword_140089988 = (__int64)IrqArbCommitAllocation;
  qword_140089998 = (__int64)IrqArbBootAllocation;
  qword_1400899A8 = (__int64)IrqArbQueryConflict;
  qword_1400899C0 = (__int64)IrqArbPreprocessEntry;
  qword_1400899D0 = (__int64)IrqArbGetNextAllocationRange;
  qword_1400899D8 = (__int64)IrqArbFindSuitableRange;
  qword_1400899F0 = (__int64)IrqArbOverrideConflict;
  qword_1400899E0 = (__int64)IrqArbAddAllocation;
  qword_1400899E8 = (__int64)IrqArbBacktrackAllocation;
  qword_140089958 = (__int64)IrqArbUnpackRequirement;
  qword_140089960 = (__int64)IrqArbPackResource;
  qword_140089968 = (__int64)IrqArbUnpackResource;
  qword_140089970 = (__int64)IrqArbScoreRequirement;
  qword_1400899C8 = (__int64)IrqArbAllocateEntry;
  result = ArbInitializeArbiterInstance((__int64)&IrqLibArbiterInstance, a1, 2, (__int64)L"ACPI_IRQ");
  if ( (int)result >= 0 )
  {
    result = PcisuppInitGlobalState();
    if ( (int)result >= 0 )
    {
      result = LinkNodeInitGlobalState();
      if ( (int)result >= 0 )
      {
        result = IcInitGlobalState();
        if ( (int)result >= 0 )
          return ProcessorInitGlobalState();
      }
    }
  }
  return result;
}
