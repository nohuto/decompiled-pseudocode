/*
 * XREFs of ?RmpCpuSetManagerInvalidateProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18008B348
 * Callers:
 *     ?RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18008B2F4 (-RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18008BDB8 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 * Callees:
 *     CempListEntryIsNull @ 0x18000C00C (CempListEntryIsNull.c)
 *     CempListEntryRemoveAndClear @ 0x180027644 (CempListEntryRemoveAndClear.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027680 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18008B3B4 (-RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 */

void __fastcall RmpCpuSetManagerInvalidateProcessRegistration(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_PROCESS_REGISTRATION *a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // r8
  struct _RM_CPU_SET_MANAGER *v5; // r9
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  char *v8; // r8
  __int64 v9; // rdx

  if ( !(unsigned int)CempListEntryIsNull((_QWORD *)a2 + 11) )
  {
    CempListEntryRemoveAndClear(v3);
    --*(_DWORD *)(v4 + 60);
    RmpCpuSetManagerMarkProcessDirty(v5, (struct _RM_CPU_SET_PROCESS *)v4);
  }
  if ( !(unsigned int)CempListEntryIsNull((_QWORD *)a2 + 13) )
  {
    CempListEntryRemoveAndClear(v6);
    *((_QWORD *)a2 + 8) = 0LL;
    RmpObjectRelease(v8, v7);
    RmpObjectRelease((char *)a2, v9);
  }
}
