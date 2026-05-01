/*
 * XREFs of ?HampDepLinkAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_LINK@@@Z @ 0x180083E34
 * Callers:
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180082D80 (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x1800380B0 (CempLockTrackerMarkAcquired.c)
 */

void __fastcall HampDepLinkAcquireLockExclusive(struct _HAM_DEPENDENCY_LINK *a1, __int64 a2)
{
  CempLockTrackerMarkAcquired(HampLockTrackerId, a2, 2u, 0);
  CempLockAcquireExclusive((__int64)a1 + 48);
}
