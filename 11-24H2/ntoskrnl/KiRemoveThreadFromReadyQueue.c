/*
 * XREFs of KiRemoveThreadFromReadyQueue @ 0x1402D8C40
 * Callers:
 *     KiNormalPriorityReadyScan @ 0x140282170 (KiNormalPriorityReadyScan.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1402D8B94 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403BD660 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     KiUpdateLocalReadyQueueStatisticsOnRemoval @ 0x1402D8F08 (KiUpdateLocalReadyQueueStatisticsOnRemoval.c)
 */

__int64 __fastcall KiRemoveThreadFromReadyQueue(__int64 a1, _QWORD *a2, char a3)
{
  _QWORD *v3; // r10
  _QWORD *v4; // rax

  if ( (*(_DWORD *)(a2 - 12) & 0x400000) != 0 )
    _InterlockedAnd((volatile signed __int32 *)a2[94], 0xFFFBFFFF);
  v3 = (_QWORD *)*a2;
  v4 = (_QWORD *)a2[1];
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v4 != a2 )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  if ( v4 == v3 )
    *(_DWORD *)(a1 + 33752) ^= 1 << a3;
  return KiUpdateLocalReadyQueueStatisticsOnRemoval(a1, a2 - 27);
}
