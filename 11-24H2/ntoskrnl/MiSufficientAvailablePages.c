/*
 * XREFs of MiSufficientAvailablePages @ 0x1403526D0
 * Callers:
 *     MiPickClusterForMappedFileFault @ 0x140215358 (MiPickClusterForMappedFileFault.c)
 *     MiGetPageTablePages @ 0x14021CA98 (MiGetPageTablePages.c)
 *     MiInsertPagesInList @ 0x140226A90 (MiInsertPagesInList.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiWaitForFreePage @ 0x140260F64 (MiWaitForFreePage.c)
 *     MiFillNoReservationCluster @ 0x1402EC57C (MiFillNoReservationCluster.c)
 *     MiFindContiguousPagesEx @ 0x14030E840 (MiFindContiguousPagesEx.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiGetPoolPages @ 0x14034B598 (MiGetPoolPages.c)
 *     MiPrefetchVirtualMemory @ 0x140351B80 (MiPrefetchVirtualMemory.c)
 *     MiScanPagefiles @ 0x140353D80 (MiScanPagefiles.c)
 *     MmEnoughMemoryForWrite @ 0x140411550 (MmEnoughMemoryForWrite.c)
 *     MiRetryNonPagedAllocation @ 0x14047C730 (MiRetryNonPagedAllocation.c)
 *     MiAllocateAccessLog @ 0x1404814C0 (MiAllocateAccessLog.c)
 *     MiNoPagesLastChance @ 0x140685ADC (MiNoPagesLastChance.c)
 *     MiFindLargePageMemory @ 0x140A8F22C (MiFindLargePageMemory.c)
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
      for ( i = 0; i < dword_140E2DD0C; ++i )
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
