/*
 * XREFs of ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180005180
 * Callers:
 *     ?RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180003AE4 (-RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x180003F68 (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ?RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180004750 (-RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180004950 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180004FEC (-RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000B2C4 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180053CF4 (-HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F7E0 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmHamHostActOnProcesses(
        struct _RM_ACTIVITY_HOST *a1,
        int a2,
        int a3,
        int (*a4)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *),
        void *a5)
{
  PVOID Heap; // rdi
  int v8; // eax
  int v9; // ebx
  unsigned int v10; // esi
  unsigned __int64 v11; // r12
  char v12; // r12
  unsigned int v13; // edi
  int (*v14)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *); // rsi
  HANDLE *v15; // rdi
  __int64 v16; // rsi
  PVOID v18; // rax
  int v19; // ecx
  PVOID v20; // rax
  ACCESS_MASK v21; // r13d
  unsigned int i; // r14d
  unsigned int v23; // r12d
  NTSTATUS v24; // eax
  __int64 v25; // rdx
  PVOID P[2]; // [rsp+58h] [rbp-51h]
  unsigned int v27; // [rsp+68h] [rbp-41h]
  void *ProcessHandle; // [rsp+70h] [rbp-39h] BYREF
  __int64 v29; // [rsp+78h] [rbp-31h]
  _CLIENT_ID ClientId; // [rsp+80h] [rbp-29h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-19h] BYREF
  unsigned int v32; // [rsp+110h] [rbp+67h] BYREF
  int v33; // [rsp+118h] [rbp+6Fh]
  int (*v34)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *); // [rsp+120h] [rbp+77h]

  v34 = a4;
  v33 = a3;
  v32 = 1;
  ProcessHandle = 0LL;
  *(_OWORD *)P = 0LL;
  v27 = 0;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( !Heap )
  {
    v9 = -1073741801;
    goto LABEL_12;
  }
  while ( 1 )
  {
    v8 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, PVOID, unsigned int *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 72LL))(
           (char *)a1 + 552,
           *((unsigned int *)a1 + 155),
           (char *)a1 + 88,
           *((unsigned int *)a1 + 156),
           *((_QWORD *)a1 + 4),
           *((_BYTE *)a1 + 656) != 0 ? 4 : 0,
           Heap,
           &v32);
    v9 = v8;
    if ( v8 >= 0 )
      break;
    if ( v8 != -2147483643 )
    {
      HampFreeHeap(Heap);
      goto LABEL_12;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v32);
    if ( !Heap )
    {
      v9 = -1073741801;
      goto LABEL_12;
    }
  }
  v10 = v32;
  if ( !v32 )
    goto LABEL_31;
  v11 = v32;
  v29 = 0LL;
  if ( !is_mul_ok(v32, 8uLL) )
  {
    v12 = v33;
    v9 = -1073741675;
    goto LABEL_6;
  }
  LODWORD(v29) = v32;
  v18 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 8LL * v32);
  v19 = -1073741801;
  P[0] = v18;
  if ( v18 )
  {
    if ( !is_mul_ok(v11, 4uLL) )
    {
      v12 = v33;
      v9 = -1073741675;
      goto LABEL_6;
    }
    v20 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 4 * v11);
    P[1] = v20;
    v19 = -1073741801;
    if ( v20 )
      v19 = 0;
    v10 = v29;
    if ( v20 )
    {
      v10 = v29;
      goto LABEL_31;
    }
  }
  v9 = v19;
  if ( v19 >= 0 )
  {
LABEL_31:
    v21 = a2 | 0x1000;
    ProcessHandle = 0LL;
    for ( i = 0; i < v10; ++i )
    {
      ClientId.UniqueThread = 0LL;
      memset(&ObjectAttributes.RootDirectory, 0, 40);
      v23 = *((_DWORD *)Heap + 2 * i);
      ClientId.UniqueProcess = (HANDLE)v23;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      v24 = NtOpenProcess(&ProcessHandle, v21, &ObjectAttributes, &ClientId);
      v9 = v24;
      if ( v24 < 0 )
      {
        v12 = v33;
        if ( (v33 & 1) == 0 && v24 != -1073741813 )
          goto LABEL_6;
      }
      else if ( (*(unsigned __int8 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, void *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 80LL))(
                  (char *)a1 + 552,
                  *((unsigned int *)a1 + 155),
                  (char *)a1 + 88,
                  *((unsigned int *)a1 + 156),
                  *((_QWORD *)a1 + 4),
                  *((_BYTE *)a1 + 656) != 0 ? 4 : 0,
                  ProcessHandle) )
      {
        v25 = v27++;
        *((_QWORD *)P[0] + v25) = ProcessHandle;
        *((_DWORD *)P[1] + v25) = v23;
      }
      else
      {
        NtClose(ProcessHandle);
      }
    }
    v12 = v33;
    v9 = 0;
    goto LABEL_6;
  }
  v12 = v33;
LABEL_6:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  if ( v9 >= 0 )
  {
    v13 = 0;
    v14 = v34;
    while ( v13 < v27 )
    {
      v9 = ((__int64 (__fastcall *)(struct _RM_ACTIVITY_HOST *, _QWORD, _QWORD, void *))v14)(
             a1,
             *((_QWORD *)P[0] + v13),
             *((unsigned int *)P[1] + v13),
             a5);
      if ( v9 < 0 && (v12 & 1) == 0 )
        goto LABEL_12;
      ++v13;
    }
    v9 = 0;
  }
LABEL_12:
  if ( v27 )
  {
    v15 = (HANDLE *)P[0];
    v16 = v27;
    do
    {
      NtClose(*v15++);
      --v16;
    }
    while ( v16 );
  }
  if ( P[0] )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[0]);
  if ( P[1] )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[1]);
  return (unsigned int)v9;
}
