/*
 * XREFs of ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180043160
 * Callers:
 *     ?HampPkgComputeStateSummary@@YA?AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAU_HAM_PACKAGE@@@Z @ 0x1800163E4 (-HampPkgComputeStateSummary@@YA-AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180016560 (-HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180016950 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180041644 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z5@Z @ 0x180041EFC (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 *     ?HamSrvHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEBGPEAXK_K@Z @ 0x18004223C (-HamSrvHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEBGPEAXK_K@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180043160 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HampPkgGetFirstApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@@Z @ 0x1800449A8 (-HampPkgGetFirstApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampManagerLogCaptureState@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180081588 (-HampManagerLogCaptureState@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180085964 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     CemRcTableGetNext @ 0x180016F20 (CemRcTableGetNext.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180043160 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     CemRcTableGetFirst @ 0x180043370 (CemRcTableGetFirst.c)
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
