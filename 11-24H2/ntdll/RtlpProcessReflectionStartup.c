/*
 * XREFs of RtlpProcessReflectionStartup @ 0x1801334B0
 * Callers:
 *     RtlCreateProcessReflection @ 0x180132F10 (RtlCreateProcessReflection.c)
 * Callees:
 *     RtlCloneUserProcess @ 0x18015F270 (RtlCloneUserProcess.c)
 *     NtWaitForSingleObject @ 0x180161D10 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x180161E50 (ZwSetEvent.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x180161F90 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x180162050 (ZwFreeVirtualMemory.c)
 *     ZwTerminateProcess @ 0x180162210 (ZwTerminateProcess.c)
 *     NtWriteVirtualMemory @ 0x1801623D0 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x180162410 (ZwDuplicateObject.c)
 *     ZwCreateEvent @ 0x180162590 (ZwCreateEvent.c)
 *     ZwResumeProcess @ 0x180164DC0 (ZwResumeProcess.c)
 *     NtSuspendThread @ 0x180165660 (NtSuspendThread.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpProcessReflectionStartup(__int64 a1)
{
  int v2; // r14d
  __int64 v3; // rax
  int v4; // ecx
  int v5; // eax
  HANDLE v6; // r8
  HANDLE v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  void *v11; // r15
  HANDLE v12; // rbx
  HANDLE v13; // rdi
  __int64 v14; // rcx
  void *v15; // rsi
  void (__fastcall *v16)(_QWORD); // rax
  __int64 v17; // rcx
  int v19; // [rsp+20h] [rbp-89h]
  int v20; // [rsp+30h] [rbp-79h]
  __int64 v21; // [rsp+30h] [rbp-79h]
  _QWORD v22[2]; // [rsp+40h] [rbp-69h] BYREF
  _BYTE v23[4]; // [rsp+50h] [rbp-59h] BYREF
  int v24; // [rsp+54h] [rbp-55h]
  HANDLE v25; // [rsp+58h] [rbp-51h]
  HANDLE v26; // [rsp+60h] [rbp-49h]
  __int64 v27; // [rsp+68h] [rbp-41h]
  __int64 v28; // [rsp+70h] [rbp-39h]
  __int64 v29; // [rsp+110h] [rbp+67h] BYREF
  HANDLE v30; // [rsp+118h] [rbp+6Fh] BYREF
  HANDLE v31; // [rsp+120h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+128h] [rbp+7Fh] BYREF

  Handle = 0LL;
  v24 = 0;
  memset_thunk_772440563353939046(v23, 0, 0x64uLL);
  v29 = 0LL;
  v31 = 0LL;
  v22[0] = 0LL;
  v30 = 0LL;
  v2 = ZwAllocateVirtualMemory(-1LL, &v29, 0LL, a1, 12288, 4);
  if ( v2 < 0 )
  {
    *(_OWORD *)(a1 + 56) = 0LL;
    *(_OWORD *)(a1 + 72) = 0LL;
    goto LABEL_28;
  }
  LOBYTE(v19) = 0;
  v3 = v29;
  *(_OWORD *)v29 = *(_OWORD *)a1;
  *(_OWORD *)(v3 + 16) = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(v3 + 32) = *(_OWORD *)(a1 + 32);
  *(_OWORD *)(v3 + 48) = *(_OWORD *)(a1 + 48);
  *(_OWORD *)(v3 + 64) = *(_OWORD *)(a1 + 64);
  *(_QWORD *)(v3 + 80) = *(_QWORD *)(a1 + 80);
  v2 = ZwCreateEvent(&Handle, 2031619LL, 0LL, 0LL, v19);
  if ( v2 >= 0 )
  {
    v4 = *(_DWORD *)(a1 + 8) & 2 | 4;
    if ( (*(_DWORD *)(a1 + 8) & 8) == 0 )
      v4 = *(_DWORD *)(a1 + 8) & 2;
    v5 = RtlCloneUserProcess(v4 | 1u, 0, 0, 0, (__int64)v23);
    v2 = v5;
    if ( v5 )
    {
      if ( v5 == 297 )
      {
        NtCurrentPeb()->Ldr->ShutdownInProgress = 1;
        ZwSetEvent(v30, 0LL);
        NtClose(v30);
        if ( v31 )
        {
          NtWaitForSingleObject(v31, 0, 0LL);
          NtClose(v31);
        }
        v16 = *(void (__fastcall **)(_QWORD))(v29 + 16);
        if ( v16 )
        {
          v16(*(_QWORD *)(v29 + 24));
        }
        else if ( (*(_DWORD *)(v29 + 8) & 4) == 0 )
        {
          NtSuspendThread(-2LL, 0LL);
        }
        v22[0] = *(_QWORD *)v29;
        v8 = ZwFreeVirtualMemory(-1LL, &v29, v22, 0x8000LL);
        v2 = v8;
        v9 = -1LL;
        goto LABEL_8;
      }
      *(_QWORD *)(a1 + 56) = 0LL;
      *(_QWORD *)(a1 + 64) = 0LL;
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_QWORD *)(a1 + 80) = 0LL;
      v17 = *(_QWORD *)(a1 + 32);
      if ( v17 )
        ZwSetEvent(v17, 0LL);
    }
    else
    {
      v6 = v25;
      v7 = Handle;
      *(_QWORD *)(a1 + 64) = v26;
      *(_QWORD *)(a1 + 72) = v27;
      v20 = 2;
      *(_QWORD *)(a1 + 80) = v28;
      *(_QWORD *)(a1 + 56) = v6;
      v8 = ZwDuplicateObject(-1LL, v7, v6, &v30, 2031619, 0, v20);
      v9 = (__int64)v25;
      v2 = v8;
      if ( v8 < 0 )
      {
LABEL_8:
        ZwTerminateProcess(v9, (unsigned int)v8);
        goto LABEL_28;
      }
      v8 = NtWriteVirtualMemory(v25, &v30, &v30, 8LL, 0LL);
      v2 = v8;
      if ( v8 < 0 )
        goto LABEL_10;
      v10 = *(_QWORD *)(a1 + 48);
      if ( v10 )
      {
        LODWORD(v21) = 2;
        v8 = ZwDuplicateObject(-1LL, v10, v25, &v31, 2031619, 0, v21);
        v2 = v8;
        if ( v8 < 0 )
          goto LABEL_10;
        if ( (*(_DWORD *)(a1 + 8) & 0x10) == 0 )
          NtClose(*(HANDLE *)(a1 + 48));
        v8 = NtWriteVirtualMemory(v25, &v31, &v31, 8LL, 0LL);
        v2 = v8;
        if ( v8 < 0 )
        {
LABEL_10:
          v9 = (__int64)v25;
          goto LABEL_8;
        }
      }
      ZwResumeProcess(v25);
      NtWaitForSingleObject(Handle, 0, 0LL);
      v11 = *(void **)(a1 + 32);
      if ( v11 )
      {
        v12 = v25;
        v13 = v26;
        v14 = *(_QWORD *)(a1 + 32);
        v15 = *(void **)(a1 + 40);
        v2 = ZwSetEvent(v14, 0LL);
        NtWaitForSingleObject(v15, 0, 0LL);
        NtClose(v12);
        NtClose(v13);
        NtClose(v11);
        NtClose(v15);
      }
    }
  }
LABEL_28:
  if ( Handle )
    NtClose(Handle);
  if ( v29 )
  {
    v22[0] = *(_QWORD *)v29;
    ZwFreeVirtualMemory(-1LL, &v29, v22, 0x8000LL);
  }
  return (unsigned int)v2;
}
