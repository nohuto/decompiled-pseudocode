/*
 * XREFs of ?RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18008AE94
 * Callers:
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18008B9C0 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18008BDEC (-RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     ?RmpCpuSetManagerInvalidateProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18008AEE8 (-RmpCpuSetManagerInvalidateProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROC.c)
 *     ?RmpCpuSetManagerReleaseAllProcessorsFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18008B79C (-RmpCpuSetManagerReleaseAllProcessorsFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET.c)
 */

void __fastcall RmpCpuSetManagerInvalidateAllocation(struct _RM_CPU_SET_MANAGER *a1, struct _RM_CPU_SET_ALLOCATION *a2)
{
  _QWORD *i; // rdi

  RmpCpuSetManagerReleaseAllProcessorsFromAllocation(a1, a2);
  for ( i = (_QWORD *)((char *)a2 + 80);
        (_QWORD *)*i != i;
        RmpCpuSetManagerInvalidateProcessRegistration(a1, (struct _RM_CPU_SET_PROCESS_REGISTRATION *)(*i - 104LL)) )
  {
    ;
  }
  RmpCpuSetManagerPublishAllocationState(a2);
}
