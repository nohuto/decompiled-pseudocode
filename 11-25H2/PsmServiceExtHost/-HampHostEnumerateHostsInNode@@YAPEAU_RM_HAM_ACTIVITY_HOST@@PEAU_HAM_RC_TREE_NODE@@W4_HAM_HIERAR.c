/*
 * XREFs of ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x1800416C4
 * Callers:
 *     ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AF94 (-HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPdcDamEnterWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003ADF0 (-HampPdcDamEnterWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampPdcDamExitWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003B170 (-HampPdcDamExitWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampManagerSystemStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18003B470 (-HampManagerSystemStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?HampPdcPlmUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z @ 0x18003B7C8 (-HampPdcPlmUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z.c)
 *     ?HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18003BC30 (-HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x1800435CC (-HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@.c)
 *     ?HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180046AFC (-HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU.c)
 *     ?HampSessionGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180046C34 (-HampSessionGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampManagerOnDplKeyStateChanged@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_EDP_DPL_WNF_KEYS_STATE_DATA@@@Z @ 0x180046E74 (-HampManagerOnDplKeyStateChanged@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_EDP_DPL_WNF_KEYS_STATE_DAT.c)
 *     ?HampPkgLogRundownEvents@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180053C00 (-HampPkgLogRundownEvents@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180053CD4 (-HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180055894 (-HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HamSrvQueryPackageState@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAT_HAM_EXTERNAL_STATE_SUMMARY@@PEAPEAU_HAM_HOST_STATE_SUMMARY@@PEAK@Z @ 0x180068D40 (-HamSrvQueryPackageState@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAT_HAM_EXTERNAL_STATE_SUMMARY@@PEAPEAU.c)
 *     ?HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x1800715A8 (-HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180081150 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@K@Z @ 0x180083504 (-HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@.c)
 *     ?HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800835B4 (-HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampUserTerminate@@YAJPEAU_HAM_USER@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180084718 (-HampUserTerminate@@YAJPEAU_HAM_USER@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_C.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180014F60 (CemRcObjectDereference.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x1800169D0 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x1800173C4 (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180026BA4 (-HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x1800431E0 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 */

struct _RM_HAM_ACTIVITY_HOST *__fastcall HampHostEnumerateHostsInNode(struct _HAM_RC_TREE_NODE *a1, int a2, __int64 a3)
{
  struct _RM_HAM_ACTIVITY_HOST *v3; // rdi
  struct _HAM_RC_TREE_NODE *First; // rbx
  struct _RM_HAM_ACTIVITY_HOST *NextHost; // rax

  v3 = (struct _RM_HAM_ACTIVITY_HOST *)a3;
  if ( a3 )
  {
    First = *(struct _HAM_RC_TREE_NODE **)(a3 + 792);
    if ( _InterlockedIncrement64((volatile signed __int64 *)First + 3) <= 1 )
      __fastfail(0xEu);
  }
  else
  {
    First = HamRcNodeGetFirst(a1, 4 - a2);
    v3 = 0LL;
  }
  if ( First )
  {
    do
    {
      if ( v3 )
        NextHost = HampAppGetNextHost(v3);
      else
        NextHost = HampAppGetFirstHost(First);
      v3 = NextHost;
      if ( NextHost )
        break;
      First = HamRcNodeGetSuccessor(a1, First);
    }
    while ( First );
    if ( First )
      CemRcObjectDereference(First);
  }
  return v3;
}
