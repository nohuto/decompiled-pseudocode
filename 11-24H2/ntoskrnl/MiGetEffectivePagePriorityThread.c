/*
 * XREFs of MiGetEffectivePagePriorityThread @ 0x1402E44B0
 * Callers:
 *     MiUnlockWsle @ 0x1402C7B94 (MiUnlockWsle.c)
 *     MiGetInPageSupportBlock @ 0x1402E42D0 (MiGetInPageSupportBlock.c)
 *     MiInitializeInPageSupport @ 0x1402E44F8 (MiInitializeInPageSupport.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiPrivateFixup @ 0x1402EE4F0 (MiPrivateFixup.c)
 *     MiInitializeImageProtos @ 0x140313060 (MiInitializeImageProtos.c)
 *     MiGetPageForHeader @ 0x1403133D4 (MiGetPageForHeader.c)
 *     MmCopyMemory @ 0x140395E40 (MmCopyMemory.c)
 *     MiIssueHardFault @ 0x140397B2C (MiIssueHardFault.c)
 *     NtLockVirtualMemory @ 0x1403FD910 (NtLockVirtualMemory.c)
 *     MiPrefetchRestOfCluster @ 0x14047AE34 (MiPrefetchRestOfCluster.c)
 *     MiSetPagesModified @ 0x140492C90 (MiSetPagesModified.c)
 *     MiSwitchToTransition @ 0x1404F1388 (MiSwitchToTransition.c)
 *     MmPrefetchVirtualAddresses @ 0x140953070 (MmPrefetchVirtualAddresses.c)
 *     NtSetInformationVirtualMemory @ 0x1409E8FB0 (NtSetInformationVirtualMemory.c)
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
