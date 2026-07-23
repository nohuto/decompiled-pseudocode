/*
 * XREFs of MiGetEffectivePagePriorityThread @ 0x1403DC8F0
 * Callers:
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiPrivateFixup @ 0x14034FB30 (MiPrivateFixup.c)
 *     MiIssueHardFault @ 0x140350280 (MiIssueHardFault.c)
 *     MiSetPagesModified @ 0x1403DA5EC (MiSetPagesModified.c)
 *     MiUnlockWsle @ 0x1403DB664 (MiUnlockWsle.c)
 *     MiPrefetchRestOfCluster @ 0x1403DBB74 (MiPrefetchRestOfCluster.c)
 *     NtLockVirtualMemory @ 0x1403DBC30 (NtLockVirtualMemory.c)
 *     MiGetInPageSupportBlock @ 0x1403DC710 (MiGetInPageSupportBlock.c)
 *     MiInitializeInPageSupport @ 0x1403DC938 (MiInitializeInPageSupport.c)
 *     MiInitializeImageProtos @ 0x1403F26E0 (MiInitializeImageProtos.c)
 *     MiGetPageForHeader @ 0x1403F2A54 (MiGetPageForHeader.c)
 *     MmCopyMemory @ 0x1403F3930 (MmCopyMemory.c)
 *     MiSwitchToTransition @ 0x1404EEE28 (MiSwitchToTransition.c)
 *     MmPrefetchVirtualAddresses @ 0x140936A20 (MmPrefetchVirtualAddresses.c)
 *     NtSetInformationVirtualMemory @ 0x1409E3F70 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetEffectivePagePriorityThread(__int64 a1)
{
  unsigned int v1; // eax
  __int64 result; // rax
  __int64 v3; // rcx
  unsigned int v4; // ecx

  v1 = *(_DWORD *)(a1 + 1448);
  if ( (v1 & 0x100) != 0 )
    return (v1 >> 9) & 7;
  result = (*(_DWORD *)(a1 + 1440) >> 12) & 7;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 672LL);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 1092);
    if ( (unsigned int)result >= v4 )
      return v4;
  }
  return result;
}
