/*
 * XREFs of DifGetAvailableSystemPages @ 0x1406196F4
 * Callers:
 *     DifRegisterObjectTracking @ 0x140618350 (DifRegisterObjectTracking.c)
 *     VfLwSPEntry @ 0x14064A0D0 (VfLwSPEntry.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MmCreatePartition @ 0x1407FC90C (MmCreatePartition.c)
 *     MmManagePartitionMemoryInformation @ 0x1409344F4 (MmManagePartitionMemoryInformation.c)
 */

__int64 DifGetAvailableSystemPages()
{
  __int64 v0; // rbx

  v0 = 0LL;
  if ( DifIsVolatileMode )
    return *(_QWORD *)(*(_QWORD *)qword_140E2FF88 + 18688LL);
  if ( (int)MmCreatePartition(&DifpSystemPartition, 1LL) >= 0 )
  {
    if ( DifpSystemPartition )
    {
      memset_0(&DifpSPMemoryInfo, 0, 0xF0uLL);
      dword_140E28A04 = -1;
      dword_140E28A08 = -1;
      if ( (int)MmManagePartitionMemoryInformation(&DifpSystemPartition, &DifpSPMemoryInfo) >= 0 )
        return qword_140E28A38;
    }
  }
  return v0;
}
