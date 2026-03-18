/*
 * XREFs of DifGetAvailableSystemPages @ 0x14060D734
 * Callers:
 *     DifRegisterObjectTracking @ 0x14060C390 (DifRegisterObjectTracking.c)
 *     VfLwSPEntry @ 0x14063E110 (VfLwSPEntry.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MmCreatePartition @ 0x1407ECA7C (MmCreatePartition.c)
 *     MmManagePartitionMemoryInformation @ 0x14093BA7C (MmManagePartitionMemoryInformation.c)
 */

__int64 DifGetAvailableSystemPages()
{
  __int64 v0; // rbx

  v0 = 0LL;
  if ( DifIsVolatileMode )
    return *(_QWORD *)(*(_QWORD *)qword_140E2FD48 + 18688LL);
  if ( (int)MmCreatePartition(&DifpSystemPartition, 1LL) >= 0 )
  {
    if ( DifpSystemPartition )
    {
      memset_0(&DifpSPMemoryInfo, 0, 0xF0uLL);
      dword_140E287C4 = -1;
      dword_140E287C8 = -1;
      if ( (int)MmManagePartitionMemoryInformation(&DifpSystemPartition, &DifpSPMemoryInfo) >= 0 )
        return qword_140E287F8;
    }
  }
  return v0;
}
