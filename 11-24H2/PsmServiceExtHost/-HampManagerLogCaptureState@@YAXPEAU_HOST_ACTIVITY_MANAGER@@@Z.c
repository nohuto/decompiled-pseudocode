/*
 * XREFs of ?HampManagerLogCaptureState@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180081588
 * Callers:
 *     ?HampManagerTracingControlCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x18006F8D0 (-HampManagerTracingControlCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?HampPdcPlmWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18006F960 (-HampPdcPlmWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180016950 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180043160 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HampPkgLogRundownEvents@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180053B80 (-HampPkgLogRundownEvents@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampManagerEnumerateDependencyGroups@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU1@@Z @ 0x180081280 (-HampManagerEnumerateDependencyGroups@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@.c)
 *     ?HampDepGroupLogRundownEvents@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180082D3C (-HampDepGroupLogRundownEvents@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

void __fastcall HampManagerLogCaptureState(struct _HOST_ACTIVITY_MANAGER *a1)
{
  struct _HAM_PACKAGE *i; // rax
  __int64 v3; // rdx
  int v4; // r8d
  int v5; // r9d
  struct _HAM_PACKAGE *v6; // rbx
  struct _HAM_DEPENDENCY_GROUP *v7; // rdx
  struct _HOST_ACTIVITY_MANAGER *v8; // rcx
  struct _HAM_DEPENDENCY_GROUP *v9; // rax
  struct _HAM_DEPENDENCY_GROUP *v10; // rbx

  for ( i = HamRcNodeGetFirst((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 352), 3);
        ;
        i = HamRcNodeGetSuccessor(
              (struct _HAM_RC_TREE_NODE *)((*(_QWORD *)(*(_QWORD *)((*((_QWORD *)v6 + 4) & 0xFFFFFFFFFFFFFFFCuLL) + 120)
                                                      + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                         - 40),
              v6) )
  {
    v6 = i;
    if ( !i )
      break;
    HampPkgLogRundownEvents(i, v3, v4, v5);
  }
  v7 = 0LL;
  v8 = a1;
  while ( 1 )
  {
    v9 = HampManagerEnumerateDependencyGroups(v8, v7);
    v10 = v9;
    if ( !v9 )
      break;
    HampDepGroupLogRundownEvents(v9);
    v8 = (struct _HOST_ACTIVITY_MANAGER *)*((_QWORD *)v10 + 4);
    v7 = v10;
  }
}
