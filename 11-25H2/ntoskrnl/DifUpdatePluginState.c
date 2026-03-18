/*
 * XREFs of DifUpdatePluginState @ 0x14060CFB4
 * Callers:
 *     VfNotifyVerifierOfEvent @ 0x140B72EC0 (VfNotifyVerifierOfEvent.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MmManagePartitionMemoryInformation @ 0x14093BA7C (MmManagePartitionMemoryInformation.c)
 */

unsigned __int64 DifUpdatePluginState()
{
  unsigned __int64 result; // rax

  result = HIDWORD(VfRuleClasses);
  if ( (VfRuleClasses & 0x8000000000LL) != 0 && DifpSystemPartition )
  {
    memset_0(&DifpSPMemoryInfo, 0, 0xF0uLL);
    dword_140E287C4 = -1;
    dword_140E287C8 = -1;
    result = MmManagePartitionMemoryInformation(&DifpSystemPartition, &DifpSPMemoryInfo);
    if ( (result & 0x80000000) == 0LL )
    {
      DifpLwSPAvailableSystemPages = qword_140E287F8;
      result = (unsigned int)DifiPluginControlNumerator
             * (qword_140E287F8
              / (unsigned __int64)(unsigned int)DifiPluginControlDenominator);
      DifpLwSPAllowedSPPages = result;
    }
  }
  return result;
}
