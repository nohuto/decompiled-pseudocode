/*
 * XREFs of KiRemoveCurrentThreadSharedReadyQueueEnumerator @ 0x1402D8B1C
 * Callers:
 *     KiSearchForNewThreadsOnTarget @ 0x1403BD660 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     KiUpdateSharedReadyQueueStatisticsOnRemoval @ 0x1402D8EC4 (KiUpdateSharedReadyQueueStatisticsOnRemoval.c)
 */

__int64 __fastcall KiRemoveCurrentThreadSharedReadyQueueEnumerator(__int64 *a1, __int64 a2)
{
  char v2; // r10
  __int64 v3; // rcx
  _QWORD *v4; // r8
  _QWORD *v5; // rax

  v2 = *((_BYTE *)a1 + 12);
  a1[2] = *(_QWORD *)(a1[2] + 8);
  v3 = *a1;
  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(a2 + 968), 0xFFFBFFFF);
  v4 = *(_QWORD **)(a2 + 216);
  v5 = *(_QWORD **)(a2 + 224);
  if ( v4[1] != a2 + 216 || *v5 != a2 + 216 )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  if ( v5 == v4 )
    *(_DWORD *)(v3 + 8) ^= 1 << v2;
  return KiUpdateSharedReadyQueueStatisticsOnRemoval(v3);
}
