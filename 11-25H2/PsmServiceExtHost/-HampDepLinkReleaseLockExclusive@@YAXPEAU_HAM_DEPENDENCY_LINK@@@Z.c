/*
 * XREFs of ?HampDepLinkReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_LINK@@@Z @ 0x180083EAC
 * Callers:
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180082D80 (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x1800381B0 (CempLockTrackerMarkReleased.c)
 */

void __fastcall HampDepLinkReleaseLockExclusive(struct _HAM_DEPENDENCY_LINK *a1, __int64 a2)
{
  CempLockTrackerMarkReleased(HampLockTrackerId, a2, 2u);
  *((_DWORD *)a1 + 14) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 48);
}
