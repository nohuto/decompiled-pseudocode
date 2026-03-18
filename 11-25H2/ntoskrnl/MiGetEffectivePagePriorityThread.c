/*
 * XREFs of MiGetEffectivePagePriorityThread @ 0x140387440
 * Callers:
 *     MiIssueHardFault @ 0x1402085EC (MiIssueHardFault.c)
 *     MiUnlockWsle @ 0x1402CC3B4 (MiUnlockWsle.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MmCopyMemory @ 0x140378030 (MmCopyMemory.c)
 *     MiPrefetchRestOfCluster @ 0x1403791B8 (MiPrefetchRestOfCluster.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiGetInPageSupportBlock @ 0x140387260 (MiGetInPageSupportBlock.c)
 *     MiInitializeInPageSupport @ 0x140387488 (MiInitializeInPageSupport.c)
 *     NtLockVirtualMemory @ 0x140388E00 (NtLockVirtualMemory.c)
 *     MiPrivateFixup @ 0x140439BB4 (MiPrivateFixup.c)
 *     MiInitializeImageProtos @ 0x140453928 (MiInitializeImageProtos.c)
 *     MiGetPageForHeader @ 0x140453C9C (MiGetPageForHeader.c)
 *     MiSetPagesModified @ 0x140493EB0 (MiSetPagesModified.c)
 *     MiSwitchToTransition @ 0x1404AC960 (MiSwitchToTransition.c)
 *     MmPrefetchVirtualAddresses @ 0x1409C6940 (MmPrefetchVirtualAddresses.c)
 *     NtSetInformationVirtualMemory @ 0x1409FCFF0 (NtSetInformationVirtualMemory.c)
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
