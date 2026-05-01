/*
 * XREFs of ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x1800431E0
 * Callers:
 *     ?HampPkgComputeStateSummary@@YA?AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAU_HAM_PACKAGE@@@Z @ 0x180016464 (-HampPkgComputeStateSummary@@YA-AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800165E0 (-HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x1800169D0 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x1800416C4 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z5@Z @ 0x180041F7C (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 *     ?HamSrvHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEBGPEAXK_K@Z @ 0x1800422BC (-HamSrvHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEBGPEAXK_K@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x1800431E0 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HampPkgGetFirstApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@@Z @ 0x180044A28 (-HampPkgGetFirstApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampManagerLogCaptureState@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800810C8 (-HampManagerLogCaptureState@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180085508 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180014F60 (CemRcObjectDereference.c)
 *     CemRcTableGetNext @ 0x180016FA0 (CemRcTableGetNext.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x1800431E0 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     CemRcTableGetFirst @ 0x1800433F0 (CemRcTableGetFirst.c)
 */

struct _HAM_RC_TREE_NODE *__fastcall HamRcNodeGetFirst(struct _HAM_RC_TREE_NODE *a1, int a2)
{
  char *v2; // rcx
  struct _HAM_RC_TREE_NODE *First; // rdi
  struct _HAM_RC_TREE_NODE *i; // rax
  struct _HAM_RC_TREE_NODE *v7; // rbx

  v2 = (char *)a1 + 40;
  if ( a2 == 1 )
    return (struct _HAM_RC_TREE_NODE *)CemRcTableGetFirst(v2);
  for ( i = (struct _HAM_RC_TREE_NODE *)CemRcTableGetFirst(v2); ; i = (struct _HAM_RC_TREE_NODE *)CemRcTableGetNext(v7) )
  {
    v7 = i;
    if ( !i )
      break;
    First = HamRcNodeGetFirst(i, a2 - 1);
    if ( First )
    {
      CemRcObjectDereference(v7);
      return First;
    }
  }
  return 0LL;
}
