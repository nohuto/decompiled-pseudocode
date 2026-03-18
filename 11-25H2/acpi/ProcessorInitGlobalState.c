/*
 * XREFs of ProcessorInitGlobalState @ 0x1400C895C
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1400C43B4 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     memset @ 0x140070F40 (memset.c)
 *     ProcessorpInitPreferredCpuSet @ 0x1400C8A34 (ProcessorpInitPreferredCpuSet.c)
 */

__int64 ProcessorInitGlobalState()
{
  size_t v0; // rbx
  void *Pool2; // rax
  USHORT MaximumGroupCount; // ax

  v0 = 8LL * KeQueryMaximumProcessorCountEx(0xFFFFu);
  Pool2 = (void *)ExAllocatePool2(256LL, v0, 1232102209LL);
  ProcessorByNtNumber = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memset(Pool2, 0, v0);
  qword_140089808 = (__int64)&ProcessorGroupListHead;
  ProcessorGroupListHead = (__int64)&ProcessorGroupListHead;
  MaximumGroupCount = KeQueryMaximumGroupCount();
  ProcessorGroupByNumber = ExAllocatePool2(256LL, 8LL * MaximumGroupCount, 1232102209LL);
  if ( !ProcessorGroupByNumber )
  {
    ExFreePoolWithTag(ProcessorByNtNumber, 0);
    ProcessorByNtNumber = 0LL;
    return 3221225626LL;
  }
  ProcessorpInitPreferredCpuSet();
  return 0LL;
}
