/*
 * XREFs of ?RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x1800071A0
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180008680 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180038178 (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostPlmServiceDesktopBridgeHost@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003C850 (-HampHostPlmServiceDesktopBridgeHost@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180071398 (-HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F760 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmHamHostGetProcessesInfo(
        struct _RM_ACTIVITY_HOST *a1,
        int a2,
        char a3,
        struct _HAM_PROCESS_SNAPSHOT *a4)
{
  PVOID Heap; // rdi
  int v7; // ebp
  unsigned int v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // ecx
  unsigned __int64 v11; // rbp
  SIZE_T v12; // rax
  PVOID v13; // r12
  unsigned int v14; // ebx
  __int64 v16; // rdi
  PVOID ProcessHeap; // rcx
  PVOID v18; // rax
  int v19; // ecx
  SIZE_T v20; // rax
  PVOID v21; // rax
  __int64 v22; // rdi
  PVOID v23; // rcx
  PVOID v24; // rax
  unsigned int v25; // edx
  unsigned int v26; // ebp
  ACCESS_MASK v27; // ecx
  unsigned int v28; // r12d
  NTSTATUS v29; // eax
  __int64 v30; // rdx
  PVOID v31; // rax
  unsigned int v32; // [rsp+50h] [rbp-98h] BYREF
  void *ProcessHandle; // [rsp+58h] [rbp-90h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+68h] [rbp-80h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-70h] BYREF
  int v37; // [rsp+F8h] [rbp+10h]

  v32 = 1;
  ProcessHandle = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( !Heap )
    return 3221225495LL;
  while ( 1 )
  {
    v7 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, PVOID, unsigned int *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 72LL))(
           (char *)a1 + 552,
           *((unsigned int *)a1 + 155),
           (char *)a1 + 88,
           *((unsigned int *)a1 + 156),
           *((_QWORD *)a1 + 4),
           *((_BYTE *)a1 + 656) != 0 ? 4 : 0,
           Heap,
           &v32);
    if ( v7 >= 0 )
    {
      v8 = *((_DWORD *)a4 + 4);
      v9 = v32;
      v10 = v32 + v8;
      if ( v32 + v8 < v8 )
      {
LABEL_8:
        v14 = -1073741675;
LABEL_10:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        return v14;
      }
      LODWORD(v11) = *((_DWORD *)a4 + 5);
      if ( v10 <= (unsigned int)v11 )
      {
LABEL_32:
        v26 = 0;
        v27 = a2 | 0x1000;
        v37 = a2 | 0x1000;
        ProcessHandle = 0LL;
        while ( v26 < v9 )
        {
          ClientId.UniqueThread = 0LL;
          memset(&ObjectAttributes.RootDirectory, 0, 40);
          v28 = *((_DWORD *)Heap + 2 * v26);
          ClientId.UniqueProcess = (HANDLE)v28;
          *(_QWORD *)&ObjectAttributes.Length = 48LL;
          v29 = NtOpenProcess(&ProcessHandle, v27, &ObjectAttributes, &ClientId);
          v14 = v29;
          if ( v29 < 0 )
          {
            if ( (a3 & 1) == 0 && v29 != -1073741813 )
              goto LABEL_10;
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
            v30 = *((unsigned int *)a4 + 4);
            *(_QWORD *)(*(_QWORD *)a4 + 8 * v30) = ProcessHandle;
            *(_DWORD *)(*((_QWORD *)a4 + 1) + 4 * v30) = v28;
            ++*((_DWORD *)a4 + 4);
          }
          else
          {
            NtClose(ProcessHandle);
          }
          v27 = v37;
          ++v26;
        }
        v14 = 0;
        goto LABEL_10;
      }
      if ( (_DWORD)v11 )
      {
        while ( (unsigned int)v11 < v10 )
        {
          v11 = 2LL * (unsigned int)v11;
          if ( v11 > 0xFFFFFFFF )
          {
            v14 = -1073741675;
            goto LABEL_10;
          }
        }
      }
      else
      {
        LODWORD(v11) = v32 + v8;
      }
      v12 = 8LL * (unsigned int)v11;
      v13 = Heap;
      if ( !is_mul_ok((unsigned int)v11, 8uLL) )
        goto LABEL_8;
      v14 = -1073741801;
      v16 = *(_QWORD *)a4;
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( *(_QWORD *)a4 )
      {
        v21 = RtlReAllocateHeap(ProcessHeap, 8u, *(PVOID *)a4, v12);
        *(_QWORD *)a4 = v21;
        if ( !v21 )
        {
          *(_QWORD *)a4 = v16;
          Heap = v13;
          goto LABEL_10;
        }
      }
      else
      {
        v18 = RtlAllocateHeap(ProcessHeap, 8u, v12);
        v19 = -1073741801;
        *(_QWORD *)a4 = v18;
        if ( v18 )
          v19 = 0;
        Heap = v13;
        if ( !v18 )
        {
LABEL_31:
          v14 = v19;
          if ( v19 < 0 )
            goto LABEL_10;
          goto LABEL_32;
        }
      }
      v20 = 4LL * (unsigned int)v11;
      if ( !is_mul_ok((unsigned int)v11, 4uLL) )
      {
        Heap = v13;
        goto LABEL_8;
      }
      v22 = *((_QWORD *)a4 + 1);
      v23 = NtCurrentPeb()->ProcessHeap;
      if ( v22 )
      {
        v31 = RtlReAllocateHeap(v23, 8u, *((PVOID *)a4 + 1), v20);
        *((_QWORD *)a4 + 1) = v31;
        if ( !v31 )
        {
          *((_QWORD *)a4 + 1) = v22;
          Heap = v13;
          goto LABEL_10;
        }
        v25 = v9;
        goto LABEL_29;
      }
      v24 = RtlAllocateHeap(v23, 8u, v20);
      v19 = -1073741801;
      *((_QWORD *)a4 + 1) = v24;
      if ( v24 )
        v19 = 0;
      v25 = v9;
      Heap = v13;
      if ( v24 )
      {
LABEL_29:
        *((_DWORD *)a4 + 5) = v11;
        v9 = v25;
        Heap = v13;
        goto LABEL_32;
      }
      goto LABEL_31;
    }
    if ( v7 != -2147483643 )
      break;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v32);
    if ( !Heap )
      return 3221225495LL;
  }
  HampFreeHeap(Heap);
  return (unsigned int)v7;
}
