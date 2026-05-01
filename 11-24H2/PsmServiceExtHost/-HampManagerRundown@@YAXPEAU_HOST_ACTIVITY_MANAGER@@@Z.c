/*
 * XREFs of ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180081610
 * Callers:
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180085E40 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180007744 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18002B184 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18002B1E0 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800354A4 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x180035B3C (-HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 *     ?HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180035B90 (-HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180036128 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800363B8 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003642C (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18003B520 (-HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180041644 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z5@Z @ 0x180041EFC (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 *     ?HampHostIdStoreReleaseLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x1800431D4 (-HampHostIdStoreReleaseLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180043230 (-HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampPdcExitDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180054148 (-HampPdcExitDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180070574 (-HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampManagerEnumerateDependencyGroups@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU1@@Z @ 0x180081280 (-HampManagerEnumerateDependencyGroups@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@.c)
 *     ?HamRcRootWaitForEmpty@@YAXPEAU_HAM_RC_TREE_ROOT@@@Z @ 0x180083FF0 (-HamRcRootWaitForEmpty@@YAXPEAU_HAM_RC_TREE_ROOT@@@Z.c)
 *     ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180084D94 (-HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampSystemNotificationClientUnregister@@YAXPEAX@Z @ 0x180090648 (-HampSystemNotificationClientUnregister@@YAXPEAX@Z.c)
 *     CemRcTableBeginRundown @ 0x18009C80C (CemRcTableBeginRundown.c)
 *     CemRcTableWaitForEmpty @ 0x18009C85C (CemRcTableWaitForEmpty.c)
 */

void __fastcall HampManagerRundown(struct _HOST_ACTIVITY_MANAGER *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  _QWORD *v4; // rbx
  __int64 v5; // rsi
  char *v6; // rbx
  __int64 v7; // rsi
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  struct _RM_HAM_ACTIVITY_HOST *v9; // rbx
  struct _HAM_DEPENDENCY_GROUP *v10; // rdx
  struct _HOST_ACTIVITY_MANAGER *v11; // rcx
  struct _HAM_HOST_DEPENDENCY *j; // rax
  struct _HAM_DEPENDENCY_GROUP *v13; // rax
  struct _HAM_DEPENDENCY_GROUP *v14; // rbx
  unsigned int v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  HampWakeManagerPreRundown((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 688));
  if ( *((_QWORD *)a1 + 65) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  if ( *((_QWORD *)a1 + 64) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  if ( *((_QWORD *)a1 + 80) )
    HampPdcExitDamPhase((struct _HOST_ACTIVITY_MANAGER **)a1 + 70, 0);
  if ( *((_QWORD *)a1 + 79) )
    HampPdcExitPlmPhase((struct _HOST_ACTIVITY_MANAGER **)a1 + 70);
  v2 = (void *)*((_QWORD *)a1 + 72);
  if ( v2 )
  {
    HampSystemNotificationClientUnregister(v2);
    *((_QWORD *)a1 + 72) = 0LL;
  }
  v3 = (void *)*((_QWORD *)a1 + 71);
  if ( v3 )
  {
    HampSystemNotificationClientUnregister(v3);
    *((_QWORD *)a1 + 71) = 0LL;
  }
  *((_DWORD *)a1 + 156) |= 2u;
  if ( *((_QWORD *)a1 + 75) )
  {
    SleepstudyHelperDestroyLibrary();
    *((_QWORD *)a1 + 75) = 0LL;
  }
  v4 = (_QWORD *)((char *)a1 + 528);
  v5 = 4LL;
  do
  {
    if ( *v4 )
      RtlUnsubscribeWnfNotificationWaitForCompletion();
    ++v4;
    --v5;
  }
  while ( v5 );
  v6 = (char *)a1 + 16;
  v7 = 7LL;
  do
  {
    CemRcTableBeginRundown(v6);
    CemRcTableWaitForEmpty(v6);
    v6 += 48;
    --v7;
  }
  while ( v7 );
  for ( i = HampHostEnumerateHostsInNode((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 352), 0, 0LL);
        ;
        i = HampManagerGetNextHost(v9) )
  {
    v9 = i;
    if ( !i )
      break;
    v15 = 0;
    HampHostQueueTerminateEx((__int64)i, 3, 0xB00u, 0LL, 0, 0, 0LL, &v15);
  }
  v10 = 0LL;
  v11 = a1;
  while ( 1 )
  {
    v13 = HampManagerEnumerateDependencyGroups(v11, v10);
    v14 = v13;
    if ( !v13 )
      break;
    HampDepGroupWaitEnterStateChange(v13);
    HampDepGroupAcquireLockExclusive(v14);
    for ( j = HampDepGroupGetFirstDependency(v14); j; j = HampDepGroupGetNextDependency(j) )
    {
      if ( *((_BYTE *)j + 40) != 2 )
        *((_DWORD *)j + 9) |= 1u;
    }
    HampDepGroupReleaseLockExclusive(v14);
    HampDepGroupRunStateChangeWorker(v14);
    v11 = (struct _HOST_ACTIVITY_MANAGER *)*((_QWORD *)v14 + 4);
    v10 = v14;
  }
  HampManagerAcquireLockShared(a1);
  while ( 1 )
  {
    v16 = *((_QWORD *)a1 + 61);
    HampManagerReleaseLockShared(a1);
    if ( !v16 )
      break;
    RtlWaitOnAddress((char *)a1 + 488, &v16, 8LL);
    HampManagerAcquireLockShared(a1);
  }
  HamRcRootWaitForEmpty((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 352));
  CemRcTableBeginRundown((char *)a1 + 440);
  CemRcTableWaitForEmpty((char *)a1 + 440);
  CemRcTableBeginRundown((char *)a1 + 720);
  CemRcTableWaitForEmpty((char *)a1 + 720);
  HampHostIdStoreAcquireLockExclusive((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 800));
  HampHostIdStoreEnumerateMatchingEntries(
    (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 800),
    0LL,
    0LL,
    0LL,
    (unsigned int (*)(struct _HAM_HOSTID_ENTRY *, void *))HampHostIdStoreInvalidateEntryCallback,
    0LL);
  HampHostIdStoreReleaseLockExclusive((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 800));
  HamRcRootWaitForEmpty((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 816));
}
