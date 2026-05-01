/*
 * XREFs of ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180016950
 * Callers:
 *     ?HampPkgComputeStateSummary@@YA?AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAU_HAM_PACKAGE@@@Z @ 0x1800163E4 (-HampPkgComputeStateSummary@@YA-AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180016560 (-HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180016950 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18003B520 (-HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180041644 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z5@Z @ 0x180041EFC (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 *     ?HamSrvHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEBGPEAXK_K@Z @ 0x18004223C (-HamSrvHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEBGPEAXK_K@Z.c)
 *     ?HampPkgGetStateSnapshot@@YA?AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_PACKAGE@@PEBG@Z @ 0x180044384 (-HampPkgGetStateSnapshot@@YA-AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_PACKAGE@@PEBG@Z.c)
 *     ?HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z @ 0x1800445F0 (-HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z.c)
 *     ?HampPkgGetNextApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU1@@Z @ 0x180066348 (-HampPkgGetNextApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU1@@Z.c)
 *     ?HampManagerLogCaptureState@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180081588 (-HampManagerLogCaptureState@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180085964 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180016950 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     CemRcTableGetNext @ 0x180016F20 (CemRcTableGetNext.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180043160 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 */

struct _HAM_RC_TREE_NODE *__fastcall HamRcNodeGetSuccessor(struct _HAM_RC_TREE_NODE *a1, struct _HAM_RC_TREE_NODE *a2)
{
  struct _HAM_RC_TREE_NODE *v2; // rax
  struct _HAM_RC_TREE_NODE *v4; // rdi
  struct _HAM_RC_TREE_NODE *result; // rax
  struct _HAM_RC_TREE_NODE *First; // rsi

  v2 = (struct _HAM_RC_TREE_NODE *)(*((_QWORD *)a2 + 4) & 0xFFFFFFFFFFFFFFFCuLL);
  if ( v2 == (struct _HAM_RC_TREE_NODE *)((char *)a1 + 40) )
    return (struct _HAM_RC_TREE_NODE *)CemRcTableGetNext(a2);
  v4 = (struct _HAM_RC_TREE_NODE *)((char *)v2 - 40);
  if ( _InterlockedIncrement64((volatile signed __int64 *)v2 - 2) <= 1 )
    __fastfail(0xEu);
  result = (struct _HAM_RC_TREE_NODE *)CemRcTableGetNext(a2);
  First = result;
  if ( result )
  {
    if ( v4 )
    {
LABEL_5:
      CemRcObjectDereference(v4);
      return First;
    }
  }
  else
  {
    while ( 1 )
    {
      result = HamRcNodeGetSuccessor(a1, v4);
      v4 = result;
      if ( !result )
        break;
      First = HamRcNodeGetFirst(result, 1u);
      if ( First )
        goto LABEL_5;
    }
  }
  return result;
}
