/*
 * XREFs of ?AreViewIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800AE010
 * Callers:
 *     ?TryFindInputDelegation@ForegroundManager@@AEAAAEBUTargetingInfo@1@II@Z @ 0x180025DF8 (-TryFindInputDelegation@ForegroundManager@@AEAAAEBUTargetingInfo@1@II@Z.c)
 *     ?IsDelegationSourceInForeground@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@IIIII@Z @ 0x1800AF050 (-IsDelegationSourceInForeground@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@III.c)
 *     ?IsProcessIDInSameCompositeAppAsView@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800AF0A4 (-IsProcessIDInSameCompositeAppAsView@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager.c)
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800AFD6C (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 * Callees:
 *     ?GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x1800AEC20 (-GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z.c)
 */

bool __fastcall ForegroundManager::AreViewIdsInSameCompositeApp(
        ForegroundManager *this,
        struct ViewHierarchyWithWindowManager *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int TopLevelHostView; // ebx

  if ( a3 == a4 )
    return 1;
  if ( !a3 || !a4 )
    return 0;
  TopLevelHostView = ViewHierarchyWithWindowManager::GetTopLevelHostView(a2, a3);
  return TopLevelHostView == ViewHierarchyWithWindowManager::GetTopLevelHostView(a2, a4);
}
