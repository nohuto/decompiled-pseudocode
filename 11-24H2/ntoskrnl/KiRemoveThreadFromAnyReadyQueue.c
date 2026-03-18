/*
 * XREFs of KiRemoveThreadFromAnyReadyQueue @ 0x14030D3E8
 * Callers:
 *     KiSetPriorityThread @ 0x14024FBBC (KiSetPriorityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1403B21E0 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiApplyForegroundBoostThread @ 0x1404F6D4C (KiApplyForegroundBoostThread.c)
 * Callees:
 *     KiRemoveThreadFromReadyQueue @ 0x14030D494 (KiRemoveThreadFromReadyQueue.c)
 *     KiUpdateSharedReadyQueueStatisticsOnRemoval @ 0x14030D724 (KiUpdateSharedReadyQueueStatisticsOnRemoval.c)
 *     KiRemoveThreadFromScbQueue @ 0x14030D7C0 (KiRemoveThreadFromScbQueue.c)
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
