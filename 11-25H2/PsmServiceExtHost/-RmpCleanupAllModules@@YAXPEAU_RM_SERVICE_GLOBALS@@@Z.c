/*
 * XREFs of ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180085508
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x1800778B0 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F7E0 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     CemRcObjectDereference @ 0x180014F60 (CemRcObjectDereference.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x1800169D0 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029F10 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x1800431E0 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HampPdcCleanup@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18008324C (-HampPdcCleanup@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?RmpEnforcerContextCleanup@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180088DEC (-RmpEnforcerContextCleanup@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpObjectTableCleanup@@YAXPEAU_RM_OBJECT_TABLE@@@Z @ 0x180089678 (-RmpObjectTableCleanup@@YAXPEAU_RM_OBJECT_TABLE@@@Z.c)
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180089C6C (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x18008B8D8 (-RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RmpCleanupAllModules(struct _RM_SERVICE_GLOBALS *a1)
{
  __int64 v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  _QWORD *i; // rsi
  void *v6; // rcx
  __int64 v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  __int64 v10; // rcx
  struct _HAM_RC_TREE_NODE *j; // rax
  struct _HAM_RC_TREE_NODE *v12; // rdi

  v2 = *((_QWORD *)a1 + 442);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)a1 + 442) = 0LL;
  }
  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 536));
  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 16));
  if ( *((_QWORD *)a1 + 422) )
    TpReleasePool();
  v3 = (void *)*((_QWORD *)a1 + 419);
  if ( v3 )
    HampFreeHeap(v3);
  v4 = (void *)*((_QWORD *)a1 + 421);
  if ( v4 )
    HampFreeHeap(v4);
  RmpAcquireGlobalLock();
  for ( i = (_QWORD *)((char *)a1 + 688);
        (_QWORD *)*i != i;
        RmpCpuSetManagerReleaseClientContext((struct _RM_CPU_SET_CLIENT_CONTEXT *)(*i - 8LL)) )
  {
    ;
  }
  RmpCpuSetManagerApplyAllPolicyChanges((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 680));
  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 704));
  RmpObjectTableCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 728));
  v6 = (void *)*((_QWORD *)a1 + 95);
  if ( v6 )
    HampFreeHeap(v6);
  RmpReleaseGlobalLock();
  RmpEnforcerContextCleanup(a1);
  v7 = *((_QWORD *)a1 + 270);
  if ( v7 )
    TpReleaseWork(v7);
  v8 = (void *)*((_QWORD *)a1 + 45);
  if ( v8 )
    NtClose(v8);
  v9 = (void *)*((_QWORD *)a1 + 47);
  if ( v9 )
    HampFreeHeap(v9);
  v10 = *((_QWORD *)a1 + 70);
  if ( v10 )
    TpReleaseTimer(v10);
  *((_DWORD *)a1 + 168) &= ~1u;
  HampPdcCleanup((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 2808));
  for ( j = HamRcNodeGetFirst((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 3064), 4);
        ;
        j = HamRcNodeGetSuccessor((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 3064), v12) )
  {
    v12 = j;
    if ( !j )
      break;
    CemRcObjectDereference(j);
  }
  if ( *((_QWORD *)a1 + 402) )
    TpReleasePool();
}
