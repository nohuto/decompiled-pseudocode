/*
 * XREFs of ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x1800530D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivityHostHasEmptiedWorkingSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180053260 (-RmpActivityHostHasEmptiedWorkingSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800532D0 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyCompareActivityHostsByPriorityAndCommitEx@@YAHPEAU_RM_POLICY_RECLAIM_CONTEXT@@PEBU_RM_ACTIVITY_HOST_METRICS@@1@Z @ 0x180053380 (-RmpPolicyCompareActivityHostsByPriorityAndCommitEx@@YAHPEAU_RM_POLICY_RECLAIM_CONTEXT@@PEBU_RM_.c)
 */

__int64 __fastcall RmpMemoryMonitorCompareActivityHostsForEmpty(
        const struct _RM_ACTIVITY_HOST_METRICS *a1,
        const struct _RM_ACTIVITY_HOST_METRICS *a2)
{
  struct _RM_ACTIVITY_HOST *v2; // rdi
  unsigned int v3; // ebx
  __int64 v5; // rsi
  unsigned int v7; // r10d
  unsigned __int8 HasEmptiedWorkingSet; // al
  char v9; // si
  char v10; // r11
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx

  v2 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a1 + 6);
  v3 = 0;
  v5 = *((_QWORD *)a2 + 6);
  if ( *((__int16 *)a1 + 30) < 0 )
  {
    if ( *((__int16 *)a2 + 30) < 0 )
    {
      v7 = RmpPolicyCompareActivityHostsByPriorityAndCommitEx(0LL, a1, a2);
      if ( v7 )
        return v7;
      goto LABEL_10;
    }
    return (unsigned int)-1;
  }
  if ( *((__int16 *)a2 + 30) < 0 )
    return 1;
  if ( RmpPolicyActivityHostIsValidEmptyTarget(v2)
    && !RmpPolicyActivityHostIsValidEmptyTarget((struct _RM_ACTIVITY_HOST *)v5) )
  {
    return (unsigned int)-1;
  }
  if ( !RmpPolicyActivityHostIsValidEmptyTarget(v2)
    && RmpPolicyActivityHostIsValidEmptyTarget((struct _RM_ACTIVITY_HOST *)v5) )
  {
    return 1;
  }
LABEL_10:
  if ( !RmpPolicyActivityHostIsValidEmptyTarget(v2) )
    return 0LL;
  if ( !RmpActivityHostHasEmptiedWorkingSet(v2) && RmpActivityHostHasEmptiedWorkingSet((struct _RM_ACTIVITY_HOST *)v5) )
    return 0xFFFFFFFFLL;
  HasEmptiedWorkingSet = RmpActivityHostHasEmptiedWorkingSet(v2);
  LOBYTE(v7) = 1;
  if ( HasEmptiedWorkingSet && !RmpActivityHostHasEmptiedWorkingSet((struct _RM_ACTIVITY_HOST *)v5) )
    return v7;
  v9 = v7 & *(_BYTE *)(v5 + 1457);
  if ( RmpActivityHostHasEmptiedWorkingSet(v2) )
  {
    v14 = *((_QWORD *)a1 + 4) >> 1;
    if ( !v10 )
      v14 = *((_QWORD *)a1 + 4);
    v15 = *((_QWORD *)a2 + 4) >> 1;
    if ( !v9 )
      v15 = *((_QWORD *)a2 + 4);
    if ( v14 <= v15 )
    {
      LOBYTE(v3) = v14 < v15;
      return v3;
    }
    return 0xFFFFFFFFLL;
  }
  v11 = *((_QWORD *)a1 + 3) >> 1;
  if ( !v10 )
    v11 = *((_QWORD *)a1 + 3);
  v12 = *((_QWORD *)a2 + 3) >> 1;
  if ( !v9 )
    v12 = *((_QWORD *)a2 + 3);
  if ( v11 > v12 )
    return 0xFFFFFFFFLL;
  if ( v11 < v12 )
    return v7;
  return 0LL;
}
