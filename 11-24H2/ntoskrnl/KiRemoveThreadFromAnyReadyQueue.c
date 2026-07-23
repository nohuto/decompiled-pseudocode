/*
 * XREFs of KiRemoveThreadFromAnyReadyQueue @ 0x1402D8B94
 * Callers:
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1403A09F0 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiApplyForegroundBoostThread @ 0x1404F4630 (KiApplyForegroundBoostThread.c)
 * Callees:
 *     KiRemoveThreadFromReadyQueue @ 0x1402D8C40 (KiRemoveThreadFromReadyQueue.c)
 *     KiUpdateSharedReadyQueueStatisticsOnRemoval @ 0x1402D8EC4 (KiUpdateSharedReadyQueueStatisticsOnRemoval.c)
 *     KiRemoveThreadFromScbQueue @ 0x1402D8F60 (KiRemoveThreadFromScbQueue.c)
 */

__int64 __fastcall KiRemoveThreadFromAnyReadyQueue(struct _KPRCB *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rax

  if ( (*(_DWORD *)(a3 + 116) & 0x2000) != 0 )
    return KiRemoveThreadFromScbQueue(a1);
  if ( *(int *)(a3 + 536) >= 0 )
    return KiRemoveThreadFromReadyQueue(a1, a3 + 216, a4);
  if ( (*(_DWORD *)(a3 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(a3 + 968), 0xFFFBFFFF);
  v4 = *(_QWORD **)(a3 + 216);
  v5 = *(_QWORD **)(a3 + 224);
  if ( v4[1] != a3 + 216 || *v5 != a3 + 216 )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  if ( v5 == v4 )
    *(_DWORD *)(a2 + 8) ^= 1 << a4;
  return KiUpdateSharedReadyQueueStatisticsOnRemoval(a2);
}
