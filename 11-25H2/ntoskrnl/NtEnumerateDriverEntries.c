/*
 * XREFs of NtEnumerateDriverEntries @ 0x1407AE400
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x1402D31E0 (ExUnlockUserBuffer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExpTranslateDriverEntryNameToId @ 0x1407ADCC0 (ExpTranslateDriverEntryNameToId.c)
 *     ExpSafeWcslen @ 0x140820FC8 (ExpSafeWcslen.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x140821D28 (IoEnumerateEnvironmentVariablesEx.c)
 *     ExLockUserBuffer @ 0x140823168 (ExLockUserBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtEnumerateDriverEntries(PVOID Buffer, PULONG BufferLength)
{
  PULONG v2; // r15
  unsigned int *v4; // r12
  NTSTATUS result; // eax
  __int64 v6; // r8
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v8; // rcx
  unsigned int v9; // edi
  _DWORD *v10; // rsi
  int v11; // ebx
  _DWORD *v12; // r13
  struct _KTHREAD *v13; // rax
  NTSTATUS v14; // r14d
  __int64 Pool2; // rax
  unsigned int *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rax
  char *v19; // r8
  unsigned int v20; // eax
  __int64 v21; // r8
  unsigned int v22; // r9d
  unsigned int v23; // r10d
  unsigned __int64 v24; // rcx
  unsigned int v25; // edx
  BOOL v26; // r8d
  unsigned int v27; // edx
  BOOL v28; // eax
  BOOL v29; // r8d
  unsigned int v30; // ecx
  unsigned int v31; // eax
  _DWORD *v32; // rcx
  size_t v33; // r8
  __int64 v34; // rax
  BOOL v35; // [rsp+38h] [rbp-A0h]
  int v36; // [rsp+3Ch] [rbp-9Ch] BYREF
  unsigned int v37; // [rsp+40h] [rbp-98h]
  unsigned int v38; // [rsp+44h] [rbp-94h]
  unsigned int v39; // [rsp+48h] [rbp-90h]
  unsigned int v40; // [rsp+4Ch] [rbp-8Ch]
  int v41; // [rsp+50h] [rbp-88h]
  _DWORD *v42; // [rsp+58h] [rbp-80h] BYREF
  PVOID P; // [rsp+60h] [rbp-78h] BYREF
  char *v44; // [rsp+68h] [rbp-70h]
  size_t Size; // [rsp+70h] [rbp-68h]
  void *Src; // [rsp+78h] [rbp-60h]
  void *v47; // [rsp+80h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-40h]
  unsigned int v50; // [rsp+F8h] [rbp+20h] BYREF

  v2 = BufferLength;
  v42 = 0LL;
  P = 0LL;
  v4 = 0LL;
  if ( dword_140EFE810 != 2 )
    return -1073741822;
  if ( (PVOID)((unsigned __int64)Buffer & 0xFFFFFFFFFFFFFFFCuLL) != Buffer )
    return -1073741811;
  if ( PsIsCurrentThreadInServerSilo() )
    return -1073741822;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v2 < 0x7FFFFFFF0000LL )
      v8 = (__int64)v2;
    *(_DWORD *)v8 = *(_DWORD *)v8;
    v9 = Buffer != 0LL ? *v2 : 0;
    if ( v9 )
      ProbeForWrite(Buffer, v9, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v9 = Buffer != 0LL ? *v2 : 0;
  }
  if ( !v9 || (LOBYTE(v6) = PreviousMode, result = ExLockUserBuffer(Buffer, v9, v6, 1LL, &v42, &P), result >= 0) )
  {
    v10 = v42;
    v11 = 0;
    v35 = v9 != 0;
    v12 = 0LL;
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    v50 = 0;
    v14 = IoEnumerateEnvironmentVariablesEx(2LL, ExpIsDriverEntry, 0LL, &v50);
    if ( v14 == -1073741789 )
    {
      Pool2 = ExAllocatePool2(0x40uLL);
      v4 = (unsigned int *)Pool2;
      if ( Pool2 )
        v14 = IoEnumerateEnvironmentVariablesEx(2LL, ExpIsDriverEntry, Pool2, &v50);
      else
        v14 = -1073741670;
    }
    else
    {
      v50 = 0;
    }
    ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
    KeLeaveCriticalRegion();
    if ( v14 || !v50 )
      goto LABEL_54;
    v16 = v4;
    v44 = (char *)v4 + 2 * v50;
    v17 = EfiDriverVariablesGuid;
    while ( 1 )
    {
      v36 = 0;
      v18 = *((_QWORD *)v16 + 2) - v17;
      if ( !v18 )
        v18 = *((_QWORD *)v16 + 3) + 0x73D4FC671FFFF256LL;
      if ( !v18 )
        break;
LABEL_50:
      v34 = *v16;
      if ( !(_DWORD)v34 )
      {
        v2 = BufferLength;
        if ( v12 )
          *v12 = 0;
LABEL_54:
        if ( v4 )
          ExFreePoolWithTag(v4, 0);
        if ( P )
          ExUnlockUserBuffer((struct _MDL *)P);
        if ( v14 >= 0 )
          v14 = v11;
        *v2 = (_DWORD)v10 - (_DWORD)v42;
        return v14;
      }
      v16 = (unsigned int *)((char *)v16 + v34);
    }
    if ( !(unsigned int)ExpTranslateDriverEntryNameToId((wint_t *)v16 + 16, &v36) || v16[2] < 8 )
      goto LABEL_49;
    v19 = (char *)v16 + v16[1];
    v39 = *((unsigned __int16 *)v19 + 2);
    Src = v19 + 6;
    v20 = ExpSafeWcslen(v19 + 6, v44);
    if ( v20 != -1 )
      v20 = 2 * v20 + 2;
    if ( v20 == -1 || v23 >= v22 || v22 < v23 + v20 + 6 )
    {
LABEL_49:
      v17 = EfiDriverVariablesGuid;
      goto LABEL_50;
    }
    Size = v20;
    v47 = (void *)(v21 + v20 + 6LL);
    v24 = ((unsigned __int64)v10 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (_DWORD *)v24 != v10 )
    {
      v25 = v24 - (_DWORD)v10;
      v10 = (_DWORD *)(((unsigned __int64)v10 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v9 < v25 )
      {
        v26 = 0;
        v9 = 0;
        v11 = -1073741789;
LABEL_38:
        v37 = (v20 + 23) & 0xFFFFFFFC;
        v38 = v23 + v37 + 12;
        v27 = v38 + 4;
        v40 = v38 + 4;
        if ( v9 < v38 + 4 )
          v11 = -1073741789;
        v41 = v11;
        v28 = 0;
        if ( v9 >= v27 )
          v28 = v26;
        v29 = v28;
        v35 = v28;
        v30 = v9;
        v31 = v9 - v27;
        v9 = 0;
        if ( v30 >= v27 )
          v9 = v31;
        if ( v29 )
        {
          memset_0(v10, 0, v27);
          v10[1] = 1;
          v10[2] = v38;
          v10[3] = v36;
          v10[4] = 20;
          v10[5] = v37;
          memmove(v10 + 6, Src, Size);
          v32 = (_DWORD *)((char *)v10 + v37 + 4);
          *v32 = 1;
          v33 = v39;
          v32[1] = v39 + 12;
          v32[2] = 4;
          memmove(v32 + 3, v47, v33);
          if ( v12 )
            *v12 = (_DWORD)v10 - (_DWORD)v12;
          v12 = v10;
          v27 = v40;
          v11 = v41;
        }
        v10 = (_DWORD *)((char *)v10 + v27);
        goto LABEL_49;
      }
      v9 -= v25;
    }
    v26 = v35;
    goto LABEL_38;
  }
  return result;
}
