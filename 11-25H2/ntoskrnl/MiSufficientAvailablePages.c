/*
 * XREFs of MiSufficientAvailablePages @ 0x14037A4B0
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14021E3E0 (MiFindContiguousPagesEx.c)
 *     MiPickClusterForMappedFileFault @ 0x140229A24 (MiPickClusterForMappedFileFault.c)
 *     MiGetPageTablePages @ 0x14022A2B8 (MiGetPageTablePages.c)
 *     MiInsertPagesInList @ 0x14024F050 (MiInsertPagesInList.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MmEnoughMemoryForWrite @ 0x14034DFE0 (MmEnoughMemoryForWrite.c)
 *     MiGetPoolPages @ 0x140378DE4 (MiGetPoolPages.c)
 *     MiScanPagefiles @ 0x140379364 (MiScanPagefiles.c)
 *     MiPrefetchVirtualMemory @ 0x1403799D0 (MiPrefetchVirtualMemory.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiWaitForFreePage @ 0x1403BFC64 (MiWaitForFreePage.c)
 *     MiFillNoReservationCluster @ 0x14040D3B0 (MiFillNoReservationCluster.c)
 *     MiRetryNonPagedAllocation @ 0x1404807B0 (MiRetryNonPagedAllocation.c)
 *     MiAllocateAccessLog @ 0x1404853C8 (MiAllocateAccessLog.c)
 *     MiNoPagesLastChance @ 0x140679124 (MiNoPagesLastChance.c)
 *     MiFindLargePageMemory @ 0x140A8E124 (MiFindLargePageMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSufficientAvailablePages(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned int v3; // eax
  __int64 v4; // rbp
  __int64 v5; // rbx
  _QWORD *v6; // rdi
  unsigned int i; // r9d

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
      for ( i = 0; i < dword_140E2D98C; ++i )
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
