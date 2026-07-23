/*
 * XREFs of NtRestoreKey @ 0x1407D11D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x140414BC0 (CmpIsRegistryLockAcquired.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     CmRestoreKey @ 0x1407CD414 (CmRestoreKey.c)
 *     CmPostCallbackNotificationEx @ 0x140843EE0 (CmPostCallbackNotificationEx.c)
 *     CmpCallCallBacksEx @ 0x140843FD0 (CmpCallCallBacksEx.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     CmCheckNoTxContext @ 0x14092F760 (CmCheckNoTxContext.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140A676F0 (IoConvertFileHandleToKernelHandle.c)
 *     CmObReferenceObjectByHandle @ 0x140BBB350 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 */

NTSTATUS __cdecl NtRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  int v3; // esi
  char v6; // r12
  struct _KTHREAD *CurrentThread; // rcx
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  NTSTATUS v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // r8d
  int v16; // r9d
  HANDLE v17; // rdi
  int v18; // eax
  _QWORD *v19; // rsi
  struct _KTHREAD *v20; // rax
  int v21; // r9d
  int v22; // eax
  HANDLE Handle; // [rsp+40h] [rbp-79h]
  PVOID Object; // [rsp+48h] [rbp-71h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-69h] BYREF
  __int128 v27; // [rsp+60h] [rbp-59h] BYREF
  __int64 v28; // [rsp+70h] [rbp-49h]
  __int128 v29; // [rsp+78h] [rbp-41h] BYREF
  __int128 v30; // [rsp+88h] [rbp-31h]
  __int128 v31; // [rsp+98h] [rbp-21h]
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-11h] BYREF

  Object = 0LL;
  Handle = 0LL;
  v3 = (int)KeyHandle;
  v28 = 0LL;
  v26[1] = v26;
  v6 = 0;
  v26[0] = v26;
  v27 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v27);
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( (unsigned __int8)CmpAcquireShutdownRundown(CurrentThread, v9, v10, v11) )
  {
    v12 = CmCheckNoTxContext();
    if ( v12 < 0 )
    {
LABEL_28:
      CmpReleaseShutdownRundown(v13);
      goto LABEL_29;
    }
    if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
    {
      v12 = -1073741727;
      goto LABEL_28;
    }
    if ( PreviousMode == 1 )
    {
      LOBYTE(v14) = 1;
      v17 = 0LL;
      v12 = IoConvertFileHandleToKernelHandle(FileHandle, v14, 1LL);
      if ( v12 < 0 )
      {
LABEL_25:
        if ( v17 && v17 != FileHandle )
          ZwClose(v17);
        goto LABEL_28;
      }
    }
    else
    {
      v17 = FileHandle;
      Handle = FileHandle;
    }
    LOBYTE(v16) = PreviousMode;
    v18 = CmObReferenceObjectByHandle(v3, 0, v15, v16, (__int64)&Object, 0LL);
    v19 = Object;
    v12 = v18;
    if ( v18 < 0 )
    {
LABEL_23:
      if ( v19 )
        ObfDereferenceObject(v19);
      goto LABEL_25;
    }
    v13 = *(unsigned int *)(*((_QWORD *)Object + 1) + 8LL);
    if ( (v13 & 0x80u) != 0LL )
    {
      v12 = -1073741790;
      goto LABEL_23;
    }
    v20 = KeGetCurrentThread();
    v19 = Object;
    v17 = Handle;
    --v20->KernelApcDisable;
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
    {
      *(_QWORD *)&v29 = v19;
      *((_QWORD *)&v29 + 1) = Handle;
      LOBYTE(v21) = 1;
      LODWORD(v30) = Flags;
      v22 = CmpCallCallBacksEx(41, (unsigned int)&v29, 0, v21, 42, 0LL, (__int64)v26);
      if ( v22 < 0 )
      {
        v12 = 0;
        if ( v22 != -1073740541 )
          v12 = v22;
LABEL_22:
        KeLeaveCriticalRegion();
        goto LABEL_23;
      }
      v6 = 1;
    }
    CmpAttachToRegistryProcess(&ApcState);
    v12 = CmRestoreKey(v19, (ULONG_PTR)Handle, Flags, PreviousMode);
    CmpDetachFromRegistryProcess(&ApcState);
    if ( v6 )
      v12 = CmPostCallbackNotificationEx(42, (_DWORD)v19, v12, (unsigned int)&v29, 0LL, (__int64)v26);
    goto LABEL_22;
  }
  v12 = -1073741431;
LABEL_29:
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v27);
  return v12;
}
