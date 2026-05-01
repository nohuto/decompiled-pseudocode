/*
 * XREFs of ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18008B610
 * Callers:
 *     ?RmSrvCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAX_KPEA_K@Z @ 0x1800872CC (-RmSrvCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAX_KPEA_K.c)
 *     ?RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008D2D0 (-RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF80 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z @ 0x18003D0AC (-RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z.c)
 *     ?RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x180089D10 (-RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpCpuSetManagerCreateProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18008A44C (-RmpCpuSetManagerCreateProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_P.c)
 *     ?RmpCpuSetManagerDestroyProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18008A584 (-RmpCpuSetManagerDestroyProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpCpuSetManagerFindProcess@@YAPEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_MANAGER@@PEAX@Z @ 0x18008A6C8 (-RmpCpuSetManagerFindProcess@@YAPEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_MANAGER@@PEAX@Z.c)
 *     ?RmpCpuSetManagerInsertProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18008AB40 (-RmpCpuSetManagerInsertProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18008B958 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 */

__int64 __fastcall RmpCpuSetManagerRegisterProcessWithAllocation(
        struct _RM_CPU_SET_MANAGER **a1,
        HANDLE SourceHandle,
        struct _RM_CPU_SET_ALLOCATION *a3,
        PVOID *a4)
{
  struct _RM_CPU_SET_MANAGER *v4; // rsi
  struct _RM_CPU_SET_PROCESS *v9; // rbx
  struct _RM_CPU_SET_PROCESS *Process; // rax
  struct _RM_CPU_SET_PROCESS *v11; // rbp
  struct _RM_CPU_SET_PROCESS *Heap; // rax
  NTSTATUS ProcessRegistration; // edi
  DWORD ProcessId; // eax
  PVOID v15; // rdx
  _QWORD *v16; // rcx
  _QWORD *i; // rax
  PVOID P; // [rsp+20h] [rbp-38h] BYREF

  v4 = *a1;
  P = 0LL;
  v9 = 0LL;
  Process = RmpCpuSetManagerFindProcess(v4, SourceHandle);
  v11 = Process;
  if ( Process )
  {
    v16 = (_QWORD *)((char *)Process + 24);
    for ( i = (_QWORD *)*((_QWORD *)Process + 3); i != v16; i = (_QWORD *)*i )
    {
      if ( (struct _RM_CPU_SET_ALLOCATION *)*(i - 3) == a3 )
        return (unsigned int)-1073740008;
    }
  }
  else
  {
    Heap = (struct _RM_CPU_SET_PROCESS *)HampAllocateHeap(0x40uLL);
    v9 = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    v11 = Heap;
    memset_0(Heap, 0, 0x40uLL);
    *((_QWORD *)v9 + 4) = (char *)v9 + 24;
    *((_QWORD *)v9 + 3) = (char *)v9 + 24;
    ProcessRegistration = RmpSystemDuplicateHandle(SourceHandle, 0, (PHANDLE)v9 + 2);
    if ( ProcessRegistration < 0 )
    {
LABEL_17:
      RmpCpuSetManagerDestroyProcess(v4, v9);
      return (unsigned int)ProcessRegistration;
    }
    ProcessId = GetProcessId(*((HANDLE *)v9 + 2));
    *((_DWORD *)v9 + 14) = ProcessId;
    *((_QWORD *)v9 + 1) = HIBYTE(ProcessId)
                        + 37
                        * (BYTE2(ProcessId) + 37 * (BYTE1(ProcessId) + 37 * ((unsigned __int8)ProcessId + 11623883LL)));
    RmpCpuSetManagerInsertProcess(v4, v9);
  }
  ProcessRegistration = RmpCpuSetManagerCreateProcessRegistration(
                          (struct _RM_CPU_SET_CLIENT_CONTEXT *)a1,
                          v11,
                          a3,
                          (struct _RM_CPU_SET_PROCESS_REGISTRATION **)&P);
  if ( ProcessRegistration < 0 )
  {
    v15 = P;
  }
  else
  {
    v9 = 0LL;
    RmpCpuSetManagerApplyProcessPolicy(v4, v11);
    v15 = 0LL;
    *a4 = P;
  }
  if ( v15 )
    RmpCpuSetManagerReleaseProcessRegistrationEx(v4, v15, 1u);
  if ( v9 )
    goto LABEL_17;
  return (unsigned int)ProcessRegistration;
}
