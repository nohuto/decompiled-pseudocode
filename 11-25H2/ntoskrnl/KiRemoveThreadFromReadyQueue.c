/*
 * XREFs of KiRemoveThreadFromReadyQueue @ 0x140352274
 * Callers:
 *     KiNormalPriorityReadyScan @ 0x14031A434 (KiNormalPriorityReadyScan.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x140352764 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403D04C0 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     KiUpdateSoftParkElectionStatisticsOnRemoval @ 0x140352650 (KiUpdateSoftParkElectionStatisticsOnRemoval.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall KiRemoveThreadFromReadyQueue(__int64 a1, _QWORD *a2, char a3)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rcx
  _QWORD *v6; // rax

  v3 = a2 - 27;
  if ( (*(_DWORD *)(a2 - 12) & 0x400000) != 0 )
    _InterlockedAnd((volatile signed __int32 *)v3[121], 0xFFFBFFFF);
  v5 = (_QWORD *)*a2;
  v6 = (_QWORD *)a2[1];
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v6 != a2 )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = v6;
  if ( v6 == v5 )
    *(_DWORD *)(a1 + 33752) ^= 1 << a3;
  --*(_DWORD *)(a1 + 34420);
  if ( (unsigned int)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v5)
    && !*(_DWORD *)(a1 + 34420)
    && !*(_QWORD *)(a1 + 33840) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 192) + 384LL), ~*(_QWORD *)(a1 + 200));
  }
  *(_QWORD *)(a1 + 34424) -= *((unsigned int *)v3 + 446);
  return KiUpdateSoftParkElectionStatisticsOnRemoval(*(_QWORD *)(a1 + 36424), v3, 0LL);
}
