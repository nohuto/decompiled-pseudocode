/*
 * XREFs of MiSufficientAvailablePages @ 0x1402AA420
 * Callers:
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiPickClusterForMappedFileFault @ 0x140239E84 (MiPickClusterForMappedFileFault.c)
 *     MiInsertPagesInList @ 0x140271500 (MiInsertPagesInList.c)
 *     MiPrefetchVirtualMemory @ 0x1402A98D0 (MiPrefetchVirtualMemory.c)
 *     MiWaitForFreePage @ 0x1402CF708 (MiWaitForFreePage.c)
 *     MiScanPagefiles @ 0x1402D2B08 (MiScanPagefiles.c)
 *     MiGetPoolPages @ 0x1402E9F58 (MiGetPoolPages.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiFindContiguousPagesEx @ 0x140304960 (MiFindContiguousPagesEx.c)
 *     MmEnoughMemoryForWrite @ 0x1403157C0 (MmEnoughMemoryForWrite.c)
 *     MiFillNoReservationCluster @ 0x14036A7DC (MiFillNoReservationCluster.c)
 *     MiGetPageTablePages @ 0x14039E9BC (MiGetPageTablePages.c)
 *     MiRetryNonPagedAllocation @ 0x140481470 (MiRetryNonPagedAllocation.c)
 *     MiAllocateAccessLog @ 0x140485ED0 (MiAllocateAccessLog.c)
 *     MiNoPagesLastChance @ 0x1406849B0 (MiNoPagesLastChance.c)
 *     MiFindLargePageMemory @ 0x140A92A7C (MiFindLargePageMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSufficientAvailablePages(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // r10
  _QWORD *v6; // r11
  unsigned int i; // r8d

  v2 = *(_QWORD *)(a1 + 18688);
  if ( v2 >= a2 )
    return 1LL;
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 16) + 14944LL;
  while ( v3 < (unsigned __int16)KeNumberNodes )
  {
    v5 = 0LL;
    v6 = (_QWORD *)v4;
    while ( v5 <= 1 )
    {
      for ( i = 0; i < dword_140E2DBCC; ++i )
      {
        v2 += *(unsigned __int16 *)(*v6 + 16LL * i);
        if ( v2 >= a2 )
          return 1LL;
      }
      ++v5;
      ++v6;
    }
    v4 += 57216LL;
    ++v3;
  }
  return 0LL;
}
