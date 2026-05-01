/*
 * XREFs of ?RmpPolicyCompareActivityHostsByPriorityAndCommitQSortThunk@@YAHPEAXPEBX1@Z @ 0x180068F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RmpPolicyCompareActivityHostsByPriorityAndCommitQSortThunk(
        struct _RM_POLICY_RECLAIM_CONTEXT *a1,
        const struct _RM_ACTIVITY_HOST_METRICS *a2,
        const struct _RM_ACTIVITY_HOST_METRICS *a3)
{
  return RmpPolicyCompareActivityHostsByPriorityAndCommitEx(a1, a2, a3);
}
