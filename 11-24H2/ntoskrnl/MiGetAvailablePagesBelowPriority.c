/*
 * XREFs of MiGetAvailablePagesBelowPriority @ 0x1402F51E0
 * Callers:
 *     MiResolveMappedFileFault @ 0x140214824 (MiResolveMappedFileFault.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14024DC50 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiGetHardFaultPages @ 0x1402F4630 (MiGetHardFaultPages.c)
 *     MiStoreUpdateMemoryConditions @ 0x1402F4DDC (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1402F5124 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiGetAvailablePagesForTrimPass @ 0x1402F51C4 (MiGetAvailablePagesForTrimPass.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MmGetAvailablePagesBelowPriority @ 0x14049DE88 (MmGetAvailablePagesBelowPriority.c)
 *     MiAllocateCrcList @ 0x1409E7240 (MiAllocateCrcList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAvailablePagesBelowPriority(_QWORD *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 *v3; // r8
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx

  result = a1[376] + a1[360];
  v3 = a1 + 408;
  v4 = (unsigned __int64)&a1[11 * a2 + 408];
  if ( (unsigned __int64)(a1 + 408) < v4 )
  {
    do
    {
      v5 = *v3;
      v3 += 11;
      result += v5;
    }
    while ( (unsigned __int64)v3 < v4 );
  }
  return result;
}
