/*
 * XREFs of ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18005FA88
 * Callers:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x1800183C8 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 * Callees:
 *     CempListEntryRemoveAndClear @ 0x180027644 (CempListEntryRemoveAndClear.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027680 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180029F10 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x1800573E0 (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x18005FBBC (-RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x18008E46C (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RmpActivityHostZeroProcessNotification(struct _RM_ACTIVITY_HOST *a1)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  HANDLE *v5; // rsi
  __int64 v6; // rdx
  char *v7; // rcx

  v2 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 6) + 3536LL) + 88LL);
  v3 = (_QWORD *)*v2;
  while ( v3 != v2 )
  {
    v5 = (HANDLE *)v3[4];
    (*((void (__fastcall **)(HANDLE *))*v5 + 1))(v5);
    v7 = (char *)v5[167];
    v3 = (_QWORD *)*v3;
    if ( a1 == (struct _RM_ACTIVITY_HOST *)v7 )
    {
      if ( v7 )
      {
        RmpObjectRelease(v7, v6);
        v5[167] = 0LL;
      }
      if ( (*((unsigned __int8 (__fastcall **)(HANDLE *))*v5 + 7))(v5) )
        ExecutionModel::ExternalResourceSet::ReleaseResourcesWithoutNotify(v5);
      else
        ExecutionModel::ExternalResourceSet::Revoke((ExecutionModel::ExternalResourceSet *)v5, 1);
    }
    (*((void (__fastcall **)(HANDLE *))*v5 + 2))(v5);
  }
  *((_QWORD *)a1 + 173) = 0LL;
  *((_QWORD *)a1 + 174) = 0LL;
  *((_DWORD *)a1 + 350) = 0;
  RmpActivityHostResourceSetsChanged(a1);
  if ( *((_QWORD *)a1 + 162) && *((_QWORD *)a1 + 163) )
  {
    CempListEntryRemoveAndClear((_QWORD *)a1 + 162);
    RmpObjectRelease((char *)a1, v4);
  }
  if ( *((_QWORD *)a1 + 178) )
    RmpActivityHostRemoveFromRemediationGroup(a1, 1u);
  else
    SetEvent(*(HANDLE *)(*((_QWORD *)a1 + 7) + 80LL));
  RmpActivityHostCheckQueueDelete(a1);
}
