/*
 * XREFs of ?RmpPolicyCompareActivityHostsByPriorityAndCommitEx@@YAHPEAU_RM_POLICY_RECLAIM_CONTEXT@@PEBU_RM_ACTIVITY_HOST_METRICS@@1@Z @ 0x180053400
 * Callers:
 *     ?RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x1800530B4 (-RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRIC.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x180053150 (-RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z.c)
 *     ?RmpPolicyCompareActivityHostsByPriorityAndCommitQSortThunk@@YAHPEAXPEBX1@Z @ 0x180069100 (-RmpPolicyCompareActivityHostsByPriorityAndCommitQSortThunk@@YAHPEAXPEBX1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpPolicyCompareActivityHostsByPriorityAndCommitEx(
        struct _RM_POLICY_RECLAIM_CONTEXT *a1,
        const struct _RM_ACTIVITY_HOST_METRICS *a2,
        const struct _RM_ACTIVITY_HOST_METRICS *a3)
{
  __int64 v3; // r15
  unsigned int v5; // r12d
  __int64 v7; // r14
  int v8; // r9d
  int v9; // r10d
  char v10; // di
  int v12; // edx
  int v13; // r9d
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int8 v18; // dl

  v3 = *((_QWORD *)a3 + 6);
  v5 = 0;
  v7 = *((_QWORD *)a2 + 6);
  if ( a1 )
  {
    v8 = *((_DWORD *)a1 + 2);
    v9 = *((_DWORD *)a1 + 3);
    v10 = *((_BYTE *)a1 + 20);
    LOWORD(a1) = *(_WORD *)(v3 + 1184);
    if ( v8 == 1 )
    {
      if ( ((unsigned __int8)a1 & 0x10) == 0 && (*(_WORD *)(v7 + 1184) & 0x10) != 0 )
        return 0xFFFFFFFFLL;
      if ( ((unsigned __int8)a1 & 0x10) != 0 && (*(_WORD *)(v7 + 1184) & 0x10) == 0 )
        return 1LL;
    }
  }
  else
  {
    a1 = (struct _RM_POLICY_RECLAIM_CONTEXT *)*(unsigned __int16 *)(v3 + 1184);
    v8 = 0;
    v10 = 0;
    v9 = 2;
  }
  v12 = *((_DWORD *)a3 + 14);
  if ( *((_DWORD *)a2 + 14) > v12 )
    return 0xFFFFFFFFLL;
  if ( *((_DWORD *)a2 + 14) != v12 )
    return 1LL;
  if ( v10 )
  {
    v18 = *(_BYTE *)(v7 + 1458);
    if ( v18 < *(_BYTE *)(v3 + 1458) )
      return 0xFFFFFFFFLL;
    if ( v18 > *(_BYTE *)(v3 + 1458) )
      return 1LL;
  }
  v13 = v8 - 2;
  if ( v13 )
  {
    if ( v13 == 1 )
    {
      if ( ((unsigned __int8)a1 & 0x20) == 0 && (*(_WORD *)(v7 + 1184) & 0x20) != 0 )
        return 0xFFFFFFFFLL;
      if ( ((unsigned __int8)a1 & 0x20) != 0 && (*(_WORD *)(v7 + 1184) & 0x20) == 0 )
        return 1LL;
    }
  }
  else
  {
    if ( ((unsigned __int8)a1 & 0x10) == 0 && (*(_WORD *)(v7 + 1184) & 0x10) != 0 )
      return 0xFFFFFFFFLL;
    if ( ((unsigned __int8)a1 & 0x10) != 0 && (*(_WORD *)(v7 + 1184) & 0x10) == 0 )
      return 1LL;
  }
  if ( v9 != 1 )
  {
    v14 = *(_QWORD *)(v7 + 1232);
    if ( v14 <= *(_QWORD *)(v3 + 1232) )
    {
      if ( v14 < *(_QWORD *)(v3 + 1232) )
        return 1LL;
      if ( v9 == 2 || !v9 )
      {
        v15 = *(_QWORD *)a2 >> 1;
        if ( (*(_WORD *)(v7 + 1456) & 0x100) == 0 )
          v15 = *(_QWORD *)a2;
        if ( v9 == 2 )
          goto LABEL_19;
      }
      else
      {
        v15 = 0LL;
      }
      if ( v9 )
      {
        v16 = 0LL;
        goto LABEL_20;
      }
LABEL_19:
      v16 = *(_QWORD *)a3;
      goto LABEL_20;
    }
    return 0xFFFFFFFFLL;
  }
  v15 = *((_QWORD *)a2 + 5) >> 1;
  if ( (*(_WORD *)(v7 + 1456) & 0x100) == 0 )
    v15 = *((_QWORD *)a2 + 5);
  v16 = *((_QWORD *)a3 + 5);
LABEL_20:
  v17 = v16 >> 1;
  if ( (*(_WORD *)(v3 + 1456) & 0x100) == 0 )
    v17 = v16;
  if ( v15 > v17 )
    return 0xFFFFFFFFLL;
  LOBYTE(v5) = v15 < v17;
  return v5;
}
