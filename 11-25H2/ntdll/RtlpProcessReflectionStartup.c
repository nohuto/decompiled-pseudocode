/*
 * XREFs of RtlpProcessReflectionStartup @ 0x180134F90
 * Callers:
 *     RtlCreateProcessReflection @ 0x1801349F0 (RtlCreateProcessReflection.c)
 * Callees:
 *     RtlCloneUserProcess @ 0x180160780 (RtlCloneUserProcess.c)
 *     NtWaitForSingleObject @ 0x1801632A0 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x1801633E0 (ZwSetEvent.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 *     ZwTerminateProcess @ 0x1801637A0 (ZwTerminateProcess.c)
 *     NtWriteVirtualMemory @ 0x180163960 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1801639A0 (ZwDuplicateObject.c)
 *     ZwCreateEvent @ 0x180163B20 (ZwCreateEvent.c)
 *     ZwResumeProcess @ 0x180166350 (ZwResumeProcess.c)
 *     NtSuspendThread @ 0x180166BF0 (NtSuspendThread.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
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
  _QWORD v20[2]; // [rsp+40h] [rbp-69h] BYREF
  _BYTE v21[4]; // [rsp+50h] [rbp-59h] BYREF
  int v22; // [rsp+54h] [rbp-55h]
  HANDLE v23; // [rsp+58h] [rbp-51h]
  HANDLE v24; // [rsp+60h] [rbp-49h]
  __int64 v25; // [rsp+68h] [rbp-41h]
  __int64 v26; // [rsp+70h] [rbp-39h]
  __int64 v27; // [rsp+110h] [rbp+67h] BYREF
  HANDLE v28; // [rsp+118h] [rbp+6Fh] BYREF
  HANDLE v29; // [rsp+120h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+128h] [rbp+7Fh] BYREF

  Handle = 0LL;
  v22 = 0;
  memset_thunk_772440563353939046(v21, 0, 0x64uLL);
  v27 = 0LL;
  v29 = 0LL;
  v20[0] = 0LL;
  v28 = 0LL;
  v2 = ZwAllocateVirtualMemory(-1LL, &v27, 0LL, a1, 12288, 4);
  if ( v2 < 0 )
  {
    *(_OWORD *)(a1 + 56) = 0LL;
    *(_OWORD *)(a1 + 72) = 0LL;
    goto LABEL_28;
  }
  LOBYTE(v19) = 0;
  v3 = v27;
  *(_OWORD *)v27 = *(_OWORD *)a1;
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
    v5 = RtlCloneUserProcess(v4 | 1u, 0, 0, 0, (__int64)v21);
    v2 = v5;
    if ( v5 )
    {
      if ( v5 == 297 )
      {
        NtCurrentPeb()->Ldr->ShutdownInProgress = 1;
        ZwSetEvent(v28, 0LL);
        NtClose(v28);
        if ( v29 )
        {
          NtWaitForSingleObject(v29, 0, 0LL);
          NtClose(v29);
        }
        v16 = *(void (__fastcall **)(_QWORD))(v27 + 16);
        if ( v16 )
        {
          v16(*(_QWORD *)(v27 + 24));
        }
        else if ( (*(_DWORD *)(v27 + 8) & 4) == 0 )
        {
          NtSuspendThread(-2LL, 0LL);
        }
        v20[0] = *(_QWORD *)v27;
        v8 = ZwFreeVirtualMemory(-1LL, &v27, v20, 0x8000LL);
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
      v6 = v23;
      v7 = Handle;
      *(_QWORD *)(a1 + 64) = v24;
      *(_QWORD *)(a1 + 72) = v25;
      *(_QWORD *)(a1 + 80) = v26;
      *(_QWORD *)(a1 + 56) = v6;
      v8 = ZwDuplicateObject(-1LL, v7, v6, &v28, 2031619, 0, 2);
      v9 = (__int64)v23;
      v2 = v8;
      if ( v8 < 0 )
      {
LABEL_8:
        ZwTerminateProcess(v9, (unsigned int)v8);
        goto LABEL_28;
      }
      v8 = NtWriteVirtualMemory(v23, &v28, &v28, 8LL, 0LL);
      v2 = v8;
      if ( v8 < 0 )
        goto LABEL_10;
      v10 = *(_QWORD *)(a1 + 48);
      if ( v10 )
      {
        v8 = ZwDuplicateObject(-1LL, v10, v23, &v29, 2031619, 0, 2);
        v2 = v8;
        if ( v8 < 0 )
          goto LABEL_10;
        if ( (*(_DWORD *)(a1 + 8) & 0x10) == 0 )
          NtClose(*(HANDLE *)(a1 + 48));
        v8 = NtWriteVirtualMemory(v23, &v29, &v29, 8LL, 0LL);
        v2 = v8;
        if ( v8 < 0 )
        {
LABEL_10:
          v9 = (__int64)v23;
          goto LABEL_8;
        }
      }
      ZwResumeProcess(v23);
      NtWaitForSingleObject(Handle, 0, 0LL);
      v11 = *(void **)(a1 + 32);
      if ( v11 )
      {
        v12 = v23;
        v13 = v24;
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
  if ( v27 )
  {
    v20[0] = *(_QWORD *)v27;
    ZwFreeVirtualMemory(-1LL, &v27, v20, 0x8000LL);
  }
  return (unsigned int)v2;
}
