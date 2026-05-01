/*
 * XREFs of ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x1800238B0
 * Callers:
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180010B10 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x1800123D0 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x1800233E0 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF80 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F7E0 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180023D70 (-RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180044C40 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmpActivityHostQueryCommitDebt(struct _RM_ACTIVITY_HOST *a1, unsigned __int64 *a2)
{
  PVOID i; // rax
  void *v4; // rdi
  int v5; // eax
  int v6; // ebx
  unsigned int v7; // esi
  unsigned __int64 v8; // r13
  void *v9; // r14
  SIZE_T v10; // rax
  void *v11; // rdi
  unsigned int j; // ebx
  HANDLE *v13; // rdi
  __int64 v14; // rsi
  PVOID v16; // rdi
  PVOID ProcessHeap; // rcx
  signed int v18; // edx
  SIZE_T v19; // rax
  PVOID v20; // rdi
  PVOID v21; // rcx
  unsigned int k; // r14d
  unsigned int v23; // r12d
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  struct _CLIENT_ID ClientId; // [rsp+58h] [rbp-31h] BYREF
  PVOID P[2]; // [rsp+68h] [rbp-21h]
  __int64 v30; // [rsp+78h] [rbp-11h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-9h] BYREF
  void *v32; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v33; // [rsp+100h] [rbp+77h] BYREF
  void *ProcessHandle; // [rsp+108h] [rbp+7Fh] BYREF

  v32 = a2;
  LODWORD(v33) = 1;
  *a2 = 0LL;
  ProcessHandle = 0LL;
  v30 = 0LL;
  *(_OWORD *)P = 0LL;
  for ( i = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL); ; i = HampAllocateHeap(8LL * (unsigned int)v33) )
  {
    v4 = i;
    if ( !i )
    {
      v6 = -1073741801;
      goto LABEL_16;
    }
    v5 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, PVOID, __int64 *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL)
                                                                                                  + 72LL))(
           (char *)a1 + 552,
           *((unsigned int *)a1 + 155),
           (char *)a1 + 88,
           *((unsigned int *)a1 + 156),
           *((_QWORD *)a1 + 4),
           *((_BYTE *)a1 + 656) != 0 ? 4 : 0,
           i,
           &v33);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v7 = v33;
      if ( (int)v33 + (int)v30 < (unsigned int)v30 )
      {
LABEL_7:
        v6 = -1073741675;
LABEL_9:
        if ( v4 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
        if ( v6 >= 0 )
        {
          v11 = v32;
          for ( j = 0; j < (unsigned int)v30; ++j )
            RmpActivityHostCommitDebtCallback(a1, *((void **)P[0] + j), *((_DWORD *)P[1] + j), v11);
          v6 = 0;
        }
        goto LABEL_16;
      }
      if ( (unsigned int)(v33 + v30) <= HIDWORD(v30) )
      {
LABEL_38:
        ProcessHandle = 0LL;
        for ( k = 0; k < v7; ++k )
        {
          *(_QWORD *)&ObjectAttributes.Length = 48LL;
          ClientId.UniqueThread = 0LL;
          memset(&ObjectAttributes.RootDirectory, 0, 40);
          v23 = *((_DWORD *)v4 + 2 * k);
          ClientId.UniqueProcess = (HANDLE)v23;
          if ( NtOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) >= 0 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, void *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 80LL))(
                   (char *)a1 + 552,
                   *((unsigned int *)a1 + 155),
                   (char *)a1 + 88,
                   *((unsigned int *)a1 + 156),
                   *((_QWORD *)a1 + 4),
                   *((_BYTE *)a1 + 656) != 0 ? 4 : 0,
                   ProcessHandle) )
            {
              v24 = (unsigned int)v30;
              LODWORD(v30) = v30 + 1;
              *((_QWORD *)P[0] + v24) = ProcessHandle;
              *((_DWORD *)P[1] + v24) = v23;
            }
            else
            {
              NtClose(ProcessHandle);
            }
          }
        }
        v6 = 0;
        goto LABEL_9;
      }
      v8 = (unsigned int)(v33 + v30);
      v9 = v4;
      v10 = 8 * v8;
      if ( !is_mul_ok(v8, 8uLL) )
        goto LABEL_7;
      v6 = -1073741801;
      v16 = P[0];
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( P[0] )
      {
        P[0] = RtlReAllocateHeap(ProcessHeap, 8u, P[0], v10);
        if ( !P[0] )
        {
          P[0] = v16;
          v4 = v9;
          goto LABEL_9;
        }
      }
      else
      {
        P[0] = RtlAllocateHeap(ProcessHeap, 8u, v10);
        v18 = P[0] == 0LL ? 0xC0000017 : 0;
        v4 = v9;
        if ( !P[0] )
        {
LABEL_37:
          v6 = v18;
          if ( v18 < 0 )
            goto LABEL_9;
          goto LABEL_38;
        }
      }
      v19 = 4 * v8;
      if ( !is_mul_ok(v8, 4uLL) )
      {
        v4 = v9;
        goto LABEL_7;
      }
      v20 = P[1];
      v21 = NtCurrentPeb()->ProcessHeap;
      if ( P[1] )
      {
        P[1] = RtlReAllocateHeap(v21, 8u, P[1], v19);
        if ( !P[1] )
        {
          P[1] = v20;
          v4 = v9;
          goto LABEL_9;
        }
        goto LABEL_36;
      }
      P[1] = RtlAllocateHeap(v21, 8u, v19);
      v18 = P[1] == 0LL ? 0xC0000017 : 0;
      v4 = v9;
      if ( P[1] )
      {
LABEL_36:
        v4 = v9;
        goto LABEL_38;
      }
      goto LABEL_37;
    }
    if ( v5 != -2147483643 )
      break;
    HampFreeHeap(v4);
  }
  if ( v4 )
    HampFreeHeap(v4);
LABEL_16:
  if ( (_DWORD)v30 )
  {
    v13 = (HANDLE *)P[0];
    v14 = (unsigned int)v30;
    do
    {
      NtClose(*v13++);
      --v14;
    }
    while ( v14 );
  }
  if ( P[0] )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[0]);
  if ( P[1] )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[1]);
  if ( v6 < 0 )
  {
    if ( (unsigned int)dword_1800E7278 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E7278, 1LL) )
    {
      v33 = *((_QWORD *)a1 + 4);
      LODWORD(v32) = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v25,
        (unsigned int)&unk_1800DA09D,
        v26,
        v27,
        (__int64)&v32,
        (__int64)&v33);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v6;
}
