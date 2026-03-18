/*
 * XREFs of KiRemoveThreadFromSharedReadyQueue @ 0x14030D6C0
 * Callers:
 *     KiScanSharedReadyThreads @ 0x1404657E0 (KiScanSharedReadyThreads.c)
 *     KiSetThreadSchedulingGroup @ 0x14047C324 (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     KiUpdateSharedReadyQueueStatisticsOnRemoval @ 0x14030D724 (KiUpdateSharedReadyQueueStatisticsOnRemoval.c)
 */

__int64 __fastcall KiRemoveThreadFromSharedReadyQueue(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // rax

  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(a2 + 968), 0xFFFBFFFF);
  v3 = *(_QWORD **)(a2 + 216);
  v4 = *(_QWORD **)(a2 + 224);
  if ( v3[1] != a2 + 216 || *v4 != a2 + 216 )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  if ( v4 == v3 )
    *(_DWORD *)(a1 + 8) ^= 1 << a3;
  return KiUpdateSharedReadyQueueStatisticsOnRemoval(a1);
}
