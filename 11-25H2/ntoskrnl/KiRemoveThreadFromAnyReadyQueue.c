/*
 * XREFs of KiRemoveThreadFromAnyReadyQueue @ 0x140352764
 * Callers:
 *     KiRescheduleThreadAfterAffinityChange @ 0x140270C08 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1404F46AC (KiApplyForegroundBoostThread.c)
 * Callees:
 *     KiRemoveThreadFromReadyQueue @ 0x140352274 (KiRemoveThreadFromReadyQueue.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1403527C0 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiRemoveThreadFromScbQueue @ 0x140352968 (KiRemoveThreadFromScbQueue.c)
 */

__int64 __fastcall KiRemoveThreadFromAnyReadyQueue(struct _KPRCB *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  if ( (*(_DWORD *)(a3 + 116) & 0x2000) != 0 )
    return KiRemoveThreadFromScbQueue(a1);
  if ( *(int *)(a3 + 536) >= 0 )
    return KiRemoveThreadFromReadyQueue((__int64)a1, (_QWORD *)(a3 + 216), a4);
  return KiRemoveThreadFromSharedReadyQueue(a2, a3, a4);
}
