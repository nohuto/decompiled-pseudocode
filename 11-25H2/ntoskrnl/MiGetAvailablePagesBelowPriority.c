/*
 * XREFs of MiGetAvailablePagesBelowPriority @ 0x1403C2290
 * Callers:
 *     MiResolveMappedFileFault @ 0x1402276BC (MiResolveMappedFileFault.c)
 *     MiGetHardFaultPages @ 0x140339578 (MiGetHardFaultPages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140342DE0 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiStoreUpdateMemoryConditions @ 0x1403C1B60 (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1403C1F98 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiComputeZeroClusterMaximum @ 0x1403C2038 (MiComputeZeroClusterMaximum.c)
 *     MiGetAvailablePagesForTrimPass @ 0x1403C2270 (MiGetAvailablePagesForTrimPass.c)
 *     MmGetAvailablePagesBelowPriority @ 0x1404A34E4 (MmGetAvailablePagesBelowPriority.c)
 *     MiAllocateCrcList @ 0x1409F49B8 (MiAllocateCrcList.c)
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
