/*
 * XREFs of ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C924
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800253A0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000CA28 (-RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyResizeScratchBuffers@@YAJPEAU_RM_POLICY_WORK_BUFFER@@KK@Z @ 0x18000CC50 (-RmpPolicyResizeScratchBuffers@@YAJPEAU_RM_POLICY_WORK_BUFFER@@KK@Z.c)
 *     ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000CDF8 (-RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000CED4 (-RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x18005FBBC (-RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RmpActivityHostDelete(unsigned __int64 a1)
{
  char *v2; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx

  if ( *(_QWORD *)(a1 + 1424) )
    RmpActivityHostRemoveFromRemediationGroup((PVOID)a1, 1u);
  v2 = (char *)(a1 + 64);
  if ( *(_QWORD *)(a1 + 872) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)((a1 & -(__int64)(v2 != 0LL)) + 0x30) + 40LL) + 176LL))();
    *(_QWORD *)(a1 + 872) = 0LL;
  }
  v3 = (_QWORD *)(a1 + 1072);
  v4 = *(_QWORD *)(a1 + 1072);
  if ( v4 )
  {
    v5 = a1 & -(__int64)(v2 != 0LL);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 40LL) + 192LL))(v4, 0LL);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 40LL) + 176LL))(*v3);
    *v3 = 0LL;
  }
  RmpActivityHostRemoveFromTables((struct _RM_ACTIVITY_HOST *)a1);
  RmpPsmAppFamilyTableTryRemoveActivityHost((struct _RM_ACTIVITY_HOST *)a1);
  RmpActivityHostCleanupCommonState((struct _RM_ACTIVITY_HOST *)a1);
  v6 = *(_QWORD *)(a1 + 56);
  RmpPolicyResizeScratchBuffers((struct _RM_POLICY_WORK_BUFFER *)(v6 + 160), --*(_DWORD *)(v6 + 208), 0);
  RmpObjectRelease((PVOID)a1);
}
