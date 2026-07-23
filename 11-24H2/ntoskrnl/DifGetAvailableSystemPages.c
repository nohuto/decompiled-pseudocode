/*
 * XREFs of DifGetAvailableSystemPages @ 0x140617CB4
 * Callers:
 *     DifRegisterObjectTracking @ 0x140616910 (DifRegisterObjectTracking.c)
 *     VfLwSPEntry @ 0x140648690 (VfLwSPEntry.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MmCreatePartition @ 0x1407FD07C (MmCreatePartition.c)
 *     MmManagePartitionMemoryInformation @ 0x1408F7014 (MmManagePartitionMemoryInformation.c)
 */

__int64 DifGetAvailableSystemPages()
{
  __int64 v0; // rbx

  v0 = 0LL;
  if ( DifIsVolatileMode )
    return *(_QWORD *)(*(_QWORD *)qword_140E300C8 + 18688LL);
  if ( (int)MmCreatePartition(&DifpSystemPartition, 1LL) >= 0 )
  {
    if ( DifpSystemPartition )
    {
      memset_0(&DifpSPMemoryInfo, 0, 0xF0uLL);
      dword_140E28B44 = -1;
      dword_140E28B48 = -1;
      if ( (int)MmManagePartitionMemoryInformation(&DifpSystemPartition, &DifpSPMemoryInfo) >= 0 )
        return qword_140E28B78;
    }
  }
  return v0;
}
