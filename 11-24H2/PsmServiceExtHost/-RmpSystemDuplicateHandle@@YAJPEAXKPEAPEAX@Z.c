/*
 * XREFs of ?RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z @ 0x18003D02C
 * Callers:
 *     ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_ACTIVITY_HOST@@PEAXPEAPEAV12@@Z @ 0x18000E528 (-ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_ACTIVITY_HOST.c)
 *     ?HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x18003D168 (-HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARA.c)
 *     ?RmpPartitionStart@@YAJPEAU_RM_PARTITION@@PEAX_K@Z @ 0x1800468A4 (-RmpPartitionStart@@YAJPEAU_RM_PARTITION@@PEAX_K@Z.c)
 *     ?HampProcessBoostPriority@@YAJPEAXKW4_RM_EXECUTION_SPEED@@@Z @ 0x18006B0EC (-HampProcessBoostPriority@@YAJPEAXKW4_RM_EXECUTION_SPEED@@@Z.c)
 *     ?HampUtilActOnThreads@@YAJPEAXKKP6AJ000@Z0@Z @ 0x18007F218 (-HampUtilActOnThreads@@YAJPEAXKKP6AJ000@Z0@Z.c)
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18008BA70 (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RmpSystemDuplicateHandle(HANDLE SourceHandle, ACCESS_MASK DesiredAccess, PHANDLE TargetHandle)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v7; // rax

  CurrentProcess = GetCurrentProcess();
  v7 = GetCurrentProcess();
  return NtDuplicateObject(v7, SourceHandle, CurrentProcess, TargetHandle, DesiredAccess, 0, DesiredAccess == 0 ? 2 : 0);
}
