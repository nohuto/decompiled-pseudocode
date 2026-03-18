/*
 * XREFs of MiGetAvailablePagesBelowPriority @ 0x1402D15D0
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x140220F00 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiResolveMappedFileFault @ 0x140239490 (MiResolveMappedFileFault.c)
 *     MmGetAvailablePagesBelowPriority @ 0x1402CF6C8 (MmGetAvailablePagesBelowPriority.c)
 *     MiGetHardFaultPages @ 0x1402D0AC8 (MiGetHardFaultPages.c)
 *     MiStoreUpdateMemoryConditions @ 0x1402D10D4 (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1402D1508 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiGetAvailablePagesForTrimPass @ 0x1402D15A8 (MiGetAvailablePagesForTrimPass.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiAllocateCrcList @ 0x1409F2EE0 (MiAllocateCrcList.c)
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
