/*
 * XREFs of ?RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180022CD0
 * Callers:
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x1800228D0 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x180024340 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F760 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmpActivityHostQueryOfferedMemory(struct _RM_ACTIVITY_HOST *a1, unsigned __int64 *a2)
{
  bool v2; // zf
  unsigned __int64 *v4; // r15
  SIZE_T v5; // r8
  PVOID Heap; // rax
  void *v7; // rsi
  int v8; // eax
  int v9; // ebx
  unsigned int v10; // r14d
  unsigned int v11; // ecx
  unsigned __int64 v12; // r15
  SIZE_T v13; // rax
  void *v14; // r12
  __int64 v15; // rdx
  bool v16; // al
  void (__fastcall *v18)(struct _RM_ACTIVITY_HOST *, _QWORD, _QWORD, __int64 *); // rsi
  unsigned int k; // ebx
  HANDLE *v20; // rsi
  __int64 v21; // r14
  PVOID v22; // rsi
  PVOID ProcessHeap; // rcx
  PVOID v24; // rax
  int v25; // ecx
  SIZE_T v26; // rax
  PVOID v27; // rsi
  PVOID v28; // rcx
  PVOID v29; // rax
  unsigned int v30; // edx
  unsigned int j; // r15d
  unsigned int v32; // r12d
  __int64 v33; // rdx
  bool v34; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int i; // [rsp+54h] [rbp-ACh] BYREF
  int v36; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-A0h]
  __int64 v38; // [rsp+70h] [rbp-90h]
  void *ProcessHandle; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 *v40; // [rsp+80h] [rbp-80h]
  __int64 v41; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v42; // [rsp+90h] [rbp-70h] BYREF
  __int64 v43; // [rsp+98h] [rbp-68h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-50h]
  struct _CLIENT_ID ClientId; // [rsp+B8h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES UserData; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 *v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  __int64 *v50; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+118h] [rbp+18h]
  bool *v52; // [rsp+120h] [rbp+20h]
  __int64 v53; // [rsp+128h] [rbp+28h]

  v2 = (*((_BYTE *)a1 + 1268) & 0x10) == 0;
  v4 = a2;
  v40 = a2;
  if ( v2 )
  {
    *(_QWORD *)&EventDescriptor.Id = RmpActivityHostQueryOfferedMemoryDxgCallback;
  }
  else
  {
    if ( (*((_BYTE *)a1 + 1264) & 4) != 0 )
    {
      v15 = 0LL;
      *v4 = 0LL;
      v41 = 0LL;
      goto LABEL_20;
    }
    *(_QWORD *)&EventDescriptor.Id = RmpActivityHostQueryOfferedMemoryCommitSaveCallback;
  }
  v41 = 0LL;
  *(_OWORD *)P = 0LL;
  v5 = 8LL;
  v38 = 0LL;
  ProcessHandle = 0LL;
  for ( i = 1; ; v5 = 8LL * i )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    v7 = Heap;
    if ( !Heap )
    {
      v9 = -1073741801;
      goto LABEL_35;
    }
    v8 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, PVOID, unsigned int *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 72LL))(
           (char *)a1 + 552,
           *((unsigned int *)a1 + 155),
           (char *)a1 + 88,
           *((unsigned int *)a1 + 156),
           *((_QWORD *)a1 + 4),
           *((_BYTE *)a1 + 656) != 0 ? 4 : 0,
           Heap,
           &i);
    v9 = v8;
    if ( v8 >= 0 )
      break;
    if ( v8 != -2147483643 )
    {
      HampFreeHeap(v7);
      goto LABEL_35;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  }
  v10 = i;
  v11 = i + v38;
  if ( i + (unsigned int)v38 < (unsigned int)v38 )
    goto LABEL_11;
  LODWORD(v12) = HIDWORD(v38);
  if ( v11 <= HIDWORD(v38) )
    goto LABEL_59;
  if ( HIDWORD(v38) )
  {
    while ( (unsigned int)v12 < v11 )
    {
      v12 = 2LL * (unsigned int)v12;
      if ( v12 > 0xFFFFFFFF )
      {
        v9 = -1073741675;
        goto LABEL_27;
      }
    }
  }
  else
  {
    LODWORD(v12) = i + v38;
  }
  v13 = 8LL * (unsigned int)v12;
  v14 = v7;
  v42 = (unsigned int)v12;
  v45 = ((unsigned int)v12 * (unsigned __int128)8uLL) >> 64;
  if ( !is_mul_ok((unsigned int)v12, 8uLL) )
    goto LABEL_11;
  v9 = -1073741801;
  v22 = P[0];
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( P[0] )
  {
    P[0] = RtlReAllocateHeap(ProcessHeap, 8u, P[0], v13);
    if ( !P[0] )
    {
      P[0] = v22;
      v7 = v14;
      goto LABEL_27;
    }
  }
  else
  {
    v24 = RtlAllocateHeap(ProcessHeap, 8u, v13);
    P[0] = v24;
    v25 = -1073741801;
    if ( v24 )
      v25 = 0;
    v7 = v14;
    if ( !v24 )
      goto LABEL_58;
  }
  v26 = 4 * v42;
  v43 = (v42 * (unsigned __int128)4uLL) >> 64;
  if ( !is_mul_ok(v42, 4uLL) )
  {
    v7 = v14;
LABEL_11:
    v9 = -1073741675;
    goto LABEL_27;
  }
  v27 = P[1];
  v28 = NtCurrentPeb()->ProcessHeap;
  if ( P[1] )
  {
    P[1] = RtlReAllocateHeap(v28, 8u, P[1], v26);
    if ( !P[1] )
    {
      P[1] = v27;
      v7 = v14;
      goto LABEL_27;
    }
    v30 = v10;
    goto LABEL_57;
  }
  v29 = RtlAllocateHeap(v28, 8u, v26);
  P[1] = v29;
  v25 = -1073741801;
  if ( v29 )
    v25 = 0;
  v30 = v10;
  v7 = v14;
  if ( !v29 )
  {
LABEL_58:
    v9 = v25;
    if ( v25 < 0 )
      goto LABEL_27;
    goto LABEL_59;
  }
LABEL_57:
  HIDWORD(v38) = v12;
  v10 = v30;
  v7 = v14;
LABEL_59:
  ProcessHandle = 0LL;
  for ( j = 0; j < v10; ++j )
  {
    *(_QWORD *)&UserData.Length = 48LL;
    ClientId.UniqueThread = 0LL;
    v32 = *((_DWORD *)v7 + 2 * j);
    ClientId.UniqueProcess = (HANDLE)v32;
    memset(&UserData.RootDirectory, 0, 40);
    if ( NtOpenProcess(&ProcessHandle, 0x1000u, &UserData, &ClientId) >= 0 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, void *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL)
                                                                                                  + 80LL))(
             (char *)a1 + 552,
             *((unsigned int *)a1 + 155),
             (char *)a1 + 88,
             *((unsigned int *)a1 + 156),
             *((_QWORD *)a1 + 4),
             *((_BYTE *)a1 + 656) != 0 ? 4 : 0,
             ProcessHandle) )
      {
        v33 = (unsigned int)v38;
        LODWORD(v38) = v38 + 1;
        *((_QWORD *)P[0] + v33) = ProcessHandle;
        *((_DWORD *)P[1] + v33) = v32;
      }
      else
      {
        NtClose(ProcessHandle);
      }
    }
  }
  v9 = 0;
LABEL_27:
  if ( v7 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  if ( v9 >= 0 )
  {
    v18 = *(void (__fastcall **)(struct _RM_ACTIVITY_HOST *, _QWORD, _QWORD, __int64 *))&EventDescriptor.Id;
    for ( k = 0; k < (unsigned int)v38; ++k )
      v18(a1, *((_QWORD *)P[0] + k), *((unsigned int *)P[1] + k), &v41);
    v9 = 0;
  }
  v4 = v40;
LABEL_35:
  if ( (_DWORD)v38 )
  {
    v20 = (HANDLE *)P[0];
    v21 = (unsigned int)v38;
    do
    {
      NtClose(*v20++);
      --v21;
    }
    while ( v21 );
  }
  if ( P[0] )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[0]);
  if ( P[1] )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[1]);
  if ( v9 < 0 )
  {
    v15 = -1LL;
    v41 = -1LL;
    goto LABEL_21;
  }
  v15 = v41;
  *v4 = v41;
LABEL_20:
  v9 = 0;
LABEL_21:
  if ( (unsigned int)dword_1800E8278 > 5 && (byte_1800E8288 & 1) != 0 && (qword_1800E8290 & 1) == qword_1800E8290 )
  {
    v16 = (*((_DWORD *)a1 + 317) & 0x10) != 0;
    v43 = v15;
    v34 = v16;
    v42 = *((_QWORD *)a1 + 4);
    v52 = &v34;
    v50 = &v43;
    v48 = &v42;
    UserData.SecurityDescriptor = &v36;
    *(_DWORD *)&EventDescriptor.Level = 5;
    *(_QWORD *)&UserData.Length = off_1800E8280;
    v36 = v9;
    v53 = 1LL;
    v51 = 8LL;
    v49 = 8LL;
    UserData.SecurityQualityOfService = (PVOID)4;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    LODWORD(UserData.RootDirectory) = *(unsigned __int16 *)off_1800E8280;
    UserData.ObjectName = (PUNICODE_STRING)&unk_1800D8688;
    HIDWORD(UserData.RootDirectory) = 2;
    *(_QWORD *)&UserData.Attributes = 0x100000053LL;
    i = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E8298, &EventDescriptor, 0LL, 0LL, 6u, (PEVENT_DATA_DESCRIPTOR)&UserData);
  }
  return (unsigned int)v9;
}
