/*
 * XREFs of ?RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x18008BD38
 * Callers:
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180085964 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmSrvCpuSetManagerCreateClientContext@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAX@Z @ 0x1800875F4 (-RmSrvCpuSetManagerCreateClientContext@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAX@Z.c)
 * Callees:
 *     CempListEntryIsNull @ 0x18000C00C (CempListEntryIsNull.c)
 *     CempListEntryRemoveAndClear @ 0x180027644 (CempListEntryRemoveAndClear.c)
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18008A0CC (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18008BCB8 (-RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18008BDB8 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 */

void __fastcall RmpCpuSetManagerReleaseClientContext(struct _RM_CPU_SET_CLIENT_CONTEXT *a1)
{
  struct _RM_CPU_SET_MANAGER *v1; // rsi
  _QWORD *i; // rdi
  _QWORD *j; // rdi
  _QWORD *v5; // rcx

  v1 = *(struct _RM_CPU_SET_MANAGER **)a1;
  for ( i = (_QWORD *)((char *)a1 + 24); (_QWORD *)*i != i; RmpCpuSetManagerReleaseAllocation((_QWORD *)(*i - 64LL)) )
    ;
  RmpCpuSetManagerApplyAllPolicyChanges(v1);
  for ( j = (_QWORD *)((char *)a1 + 40);
        (_QWORD *)*j != j;
        RmpCpuSetManagerReleaseProcessRegistrationEx(v1, (PVOID)(*j - 72LL), 0) )
  {
    ;
  }
  if ( !(unsigned int)CempListEntryIsNull((_QWORD *)a1 + 1) )
    CempListEntryRemoveAndClear(v5);
  HampFreeHeap(a1);
}
