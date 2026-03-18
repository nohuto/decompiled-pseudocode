/*
 * XREFs of DifUpdatePluginState @ 0x140618F74
 * Callers:
 *     VfNotifyVerifierOfEvent @ 0x140B82EA0 (VfNotifyVerifierOfEvent.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MmManagePartitionMemoryInformation @ 0x1409344F4 (MmManagePartitionMemoryInformation.c)
 */

unsigned __int64 DifUpdatePluginState()
{
  unsigned __int64 result; // rax

  result = HIDWORD(VfRuleClasses);
  if ( (VfRuleClasses & 0x8000000000LL) != 0 && DifpSystemPartition )
  {
    memset_0(&DifpSPMemoryInfo, 0, 0xF0uLL);
    dword_140E28A04 = -1;
    dword_140E28A08 = -1;
    result = MmManagePartitionMemoryInformation(&DifpSystemPartition, &DifpSPMemoryInfo);
    if ( (result & 0x80000000) == 0LL )
    {
      DifpLwSPAvailableSystemPages = qword_140E28A38;
      result = (unsigned int)DifiPluginControlNumerator
             * (qword_140E28A38
              / (unsigned __int64)(unsigned int)DifiPluginControlDenominator);
      DifpLwSPAllowedSPPages = result;
    }
  }
  return result;
}
