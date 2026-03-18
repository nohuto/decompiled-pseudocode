/*
 * XREFs of ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x14010CDDC
 * Callers:
 *     ?Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x14010C7D0 (-Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x140042B50 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ?doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z @ 0x14010CA78 (-doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z.c)
 *     ??$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z @ 0x14010CC90 (--$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z.c)
 *     ?deRefAll@GroupedFGBoostProp@@AEAAXXZ @ 0x14010CD54 (-deRefAll@GroupedFGBoostProp@@AEAAXXZ.c)
 *     ?cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z @ 0x14010CD98 (-cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall GroupedFGBoostProp::ClearGroupedFGBoost(struct _KTHREAD ***a1)
{
  GroupedFGBoostProp *v3; // rbx
  GroupedFGBoostProp *v4; // [rsp+30h] [rbp+8h] BYREF

  LockRefactorStagingAssertOwned(a1[18]);
  v4 = 0LL;
  if ( !CWindowProp::GetProp<GroupedFGBoostProp>((__int64)a1, (__int64 *)&v4) )
    return 3221225485LL;
  v3 = v4;
  if ( *((_QWORD *)v4 + 4) )
  {
    GroupedFGBoostProp::doImmediateBoostAll((__int64)v4, 0);
    GroupedFGBoostProp::deRefAll(v3);
    GroupedFGBoostProp::cleanUpAndReplace(v3, 0, 0LL);
  }
  return 0LL;
}
