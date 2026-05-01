/*
 * XREFs of ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x180037460
 * Callers:
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180036E80 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z @ 0x180059A48 (-HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z.c)
 *     ?HampHostTryEnterModsPlmPhase@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18007DEDC (-HampHostTryEnterModsPlmPhase@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF80 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F7E0 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?HampHostQueryProcessDebuggedCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x1800378E8 (-HampHostQueryProcessDebuggedCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     ?HampHostSnapshotPackageDebugState@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180037A0C (-HampHostSnapshotPackageDebugState@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HampHostQueryIsDebugEnabled(struct _RM_HAM_ACTIVITY_HOST *a1, unsigned int *a2)
{
  unsigned int *v2; // r15
  unsigned __int64 v4; // r14
  unsigned int *Heap; // rdi
  int v6; // eax
  int v7; // ebx
  unsigned int v8; // esi
  unsigned __int64 v9; // r13
  unsigned int *v10; // r15
  SIZE_T v11; // rax
  __int64 j; // rdi
  HANDLE *v13; // rdi
  __int64 v14; // rsi
  PVOID v16; // rdi
  PVOID ProcessHeap; // rcx
  signed int v18; // edx
  SIZE_T v19; // rax
  PVOID v20; // rdi
  PVOID v21; // rcx
  __int64 i; // r15
  void *v23; // r12
  NTSTATUS v24; // eax
  __int64 v25; // rdx
  void *ProcessHandle; // [rsp+50h] [rbp-49h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+60h] [rbp-39h] BYREF
  PVOID Ptr[2]; // [rsp+70h] [rbp-29h]
  __int64 v29; // [rsp+80h] [rbp-19h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-11h] BYREF
  unsigned int v32; // [rsp+110h] [rbp+77h] BYREF
  unsigned int v33; // [rsp+118h] [rbp+7Fh] BYREF

  v2 = a2;
  if ( HampHostSnapshotPackageDebugState(a1) )
  {
    *v2 = 1;
    return 0;
  }
  v33 = 0;
  v32 = 1;
  *(_OWORD *)Ptr = 0LL;
  v4 = ((unsigned __int64)a1 - 64) & -(__int64)(a1 != 0LL);
  ProcessHandle = 0LL;
  v29 = 0LL;
  Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( !Heap )
  {
    v7 = -1073741801;
    goto LABEL_15;
  }
  while ( 1 )
  {
    v6 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, _QWORD, _QWORD, int, unsigned int *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 40LL) + 72LL))(
           v4 + 552,
           *(unsigned int *)(v4 + 620),
           v4 + 88,
           *(unsigned int *)(v4 + 624),
           *(_QWORD *)(v4 + 32),
           *(_BYTE *)(v4 + 656) != 0 ? 4 : 0,
           Heap,
           &v32);
    v7 = v6;
    if ( v6 >= 0 )
      break;
    if ( v6 != -2147483643 )
    {
      HampFreeHeap(Heap);
      goto LABEL_14;
    }
    HampFreeHeap(Heap);
    Heap = (unsigned int *)HampAllocateHeap(8LL * v32);
    if ( !Heap )
    {
      v7 = -1073741801;
      goto LABEL_14;
    }
  }
  v8 = v32;
  if ( v32 + (unsigned int)v29 < (unsigned int)v29 )
    goto LABEL_7;
  if ( v32 + (unsigned int)v29 > HIDWORD(v29) )
  {
    v9 = v32 + (unsigned int)v29;
    v10 = Heap;
    v11 = 8 * v9;
    if ( !is_mul_ok(v9, 8uLL) )
    {
LABEL_7:
      v7 = -1073741675;
      goto LABEL_8;
    }
    v7 = -1073741801;
    v16 = Ptr[0];
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( Ptr[0] )
    {
      Ptr[0] = RtlReAllocateHeap(ProcessHeap, 8u, Ptr[0], v11);
      if ( !Ptr[0] )
      {
        Ptr[0] = v16;
        goto LABEL_48;
      }
    }
    else
    {
      Ptr[0] = RtlAllocateHeap(ProcessHeap, 8u, v11);
      v18 = Ptr[0] == 0LL ? 0xC0000017 : 0;
      Heap = v10;
      if ( !Ptr[0] )
        goto LABEL_38;
    }
    v19 = 4 * v9;
    if ( !is_mul_ok(v9, 4uLL) )
    {
      Heap = v10;
      goto LABEL_7;
    }
    v20 = Ptr[1];
    v21 = NtCurrentPeb()->ProcessHeap;
    if ( !Ptr[1] )
    {
      Ptr[1] = RtlAllocateHeap(v21, 8u, v19);
      v18 = Ptr[1] == 0LL ? 0xC0000017 : 0;
      Heap = v10;
      if ( Ptr[1] )
      {
LABEL_37:
        Heap = v10;
        goto LABEL_39;
      }
LABEL_38:
      v7 = v18;
      if ( v18 < 0 )
        goto LABEL_8;
      goto LABEL_39;
    }
    Ptr[1] = RtlReAllocateHeap(v21, 8u, Ptr[1], v19);
    if ( Ptr[1] )
      goto LABEL_37;
    Ptr[1] = v20;
LABEL_48:
    Heap = v10;
    goto LABEL_8;
  }
LABEL_39:
  ProcessHandle = 0LL;
  for ( i = 0LL; (unsigned int)i < v8; i = (unsigned int)(i + 1) )
  {
    v23 = (void *)Heap[2 * i];
    memset(&ObjectAttributes.Length + 1, 0, 44);
    ClientId.UniqueThread = 0LL;
    ClientId.UniqueProcess = v23;
    ObjectAttributes.Length = 48;
    v24 = NtOpenProcess(&ProcessHandle, 0x1400u, &ObjectAttributes, &ClientId);
    v7 = v24;
    if ( v24 < 0 )
    {
      if ( v24 != -1073741813 )
        goto LABEL_8;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, _QWORD, _QWORD, int, void *))(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 40LL) + 80LL))(
                v4 + 552,
                *(unsigned int *)(v4 + 620),
                v4 + 88,
                *(unsigned int *)(v4 + 624),
                *(_QWORD *)(v4 + 32),
                *(_BYTE *)(v4 + 656) != 0 ? 4 : 0,
                ProcessHandle) )
    {
      v25 = (unsigned int)v29;
      LODWORD(v29) = v29 + 1;
      *((_QWORD *)Ptr[0] + v25) = ProcessHandle;
      *((_DWORD *)Ptr[1] + v25) = (_DWORD)v23;
    }
    else
    {
      NtClose(ProcessHandle);
    }
  }
  v7 = 0;
LABEL_8:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  if ( v7 >= 0 )
  {
    for ( j = 0LL; (unsigned int)j < (unsigned int)v29; j = (unsigned int)(j + 1) )
    {
      v7 = HampHostQueryProcessDebuggedCallback(
             (struct _RM_ACTIVITY_HOST *)v4,
             *((void **)Ptr[0] + j),
             *((_DWORD *)Ptr[1] + j),
             &v33);
      if ( v7 < 0 )
        goto LABEL_14;
    }
    v7 = 0;
  }
LABEL_14:
  v2 = a2;
LABEL_15:
  if ( (_DWORD)v29 )
  {
    v13 = (HANDLE *)Ptr[0];
    v14 = (unsigned int)v29;
    do
    {
      NtClose(*v13++);
      --v14;
    }
    while ( v14 );
  }
  if ( Ptr[0] )
    HampFreeHeap(Ptr[0]);
  if ( Ptr[1] )
    HampFreeHeap(Ptr[1]);
  if ( v7 >= 0 )
  {
    *v2 = v33;
    return 0;
  }
  return (unsigned int)v7;
}
