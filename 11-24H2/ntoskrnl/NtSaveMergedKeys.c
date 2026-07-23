/*
 * XREFs of NtSaveMergedKeys @ 0x1407D1580
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
 *     CmSaveMergedKeys @ 0x1407CE550 (CmSaveMergedKeys.c)
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

NTSTATUS __cdecl NtSaveMergedKeys(HANDLE HighPrecedenceKeyHandle, HANDLE LowPrecedenceKeyHandle, HANDLE FileHandle)
{
  void *v3; // rsi
  void *v4; // r14
  HANDLE v5; // rdi
  char v7; // r13
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  NTSTATUS v11; // ebx
  __int64 v12; // rcx
  KPROCESSOR_MODE PreviousMode; // r15
  int v14; // r8d
  int v15; // r9d
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rdx
  struct _KTHREAD *CurrentThread; // rax
  int v21; // r9d
  int v22; // eax
  HANDLE v23; // [rsp+40h] [rbp-99h]
  void *v24; // [rsp+48h] [rbp-91h] BYREF
  void *v25; // [rsp+50h] [rbp-89h] BYREF
  _QWORD v26[2]; // [rsp+58h] [rbp-81h] BYREF
  HANDLE v27; // [rsp+68h] [rbp-71h]
  HANDLE v28; // [rsp+70h] [rbp-69h]
  __int128 v29; // [rsp+78h] [rbp-61h] BYREF
  __int64 v30; // [rsp+88h] [rbp-51h]
  __int128 v31; // [rsp+90h] [rbp-49h] BYREF
  __int128 v32; // [rsp+A0h] [rbp-39h]
  __int128 v33; // [rsp+B0h] [rbp-29h]
  __int64 v34; // [rsp+C0h] [rbp-19h]
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-11h] BYREF

  v27 = HighPrecedenceKeyHandle;
  v28 = LowPrecedenceKeyHandle;
  v3 = 0LL;
  v30 = 0LL;
  v4 = 0LL;
  v34 = 0LL;
  v5 = 0LL;
  v24 = 0LL;
  v29 = 0LL;
  v25 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v23 = 0LL;
  v7 = 0;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v29);
  v26[0] = v26;
  v26[1] = v26;
  if ( !(unsigned __int8)CmpAcquireShutdownRundown(v26, v8, v9, v10) )
  {
    v11 = -1073741431;
    goto LABEL_14;
  }
  v11 = CmCheckNoTxContext();
  if ( v11 >= 0 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
    {
      v11 = -1073741727;
LABEL_6:
      v5 = 0LL;
      v4 = v25;
      v3 = v24;
      goto LABEL_7;
    }
    LOBYTE(v15) = PreviousMode;
    v11 = CmObReferenceObjectByHandle((_DWORD)v27, 0, v14, v15, (__int64)&v24, 0LL);
    if ( v11 < 0 )
      goto LABEL_6;
    LOBYTE(v18) = PreviousMode;
    v11 = CmObReferenceObjectByHandle((_DWORD)v28, 0, v17, v18, (__int64)&v25, 0LL);
    if ( v11 < 0 )
      goto LABEL_6;
    if ( PreviousMode == 1 )
    {
      LOBYTE(v19) = 1;
      v11 = IoConvertFileHandleToKernelHandle(FileHandle, v19, 2LL);
      if ( v11 < 0 )
        goto LABEL_6;
    }
    else
    {
      v23 = FileHandle;
    }
    CurrentThread = KeGetCurrentThread();
    v3 = v24;
    v4 = v25;
    v5 = v23;
    --CurrentThread->KernelApcDisable;
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
    {
      *(_QWORD *)&v32 = v3;
      *((_QWORD *)&v32 + 1) = v4;
      LOBYTE(v21) = 1;
      *((_QWORD *)&v31 + 1) = v23;
      v22 = CmpCallCallBacksEx(49, (unsigned int)&v31, 0, v21, 50, 0LL, (__int64)v26);
      if ( v22 < 0 )
      {
        v11 = 0;
        if ( v22 != -1073740541 )
          v11 = v22;
LABEL_30:
        KeLeaveCriticalRegion();
        goto LABEL_7;
      }
      v7 = 1;
    }
    CmpAttachToRegistryProcess(&ApcState);
    v11 = CmSaveMergedKeys((__int64)v3, (__int64)v4, (__int64)v23);
    CmpDetachFromRegistryProcess(&ApcState);
    if ( v7 )
      v11 = CmPostCallbackNotificationEx(50, 0, v11, (unsigned int)&v31, 0LL, (__int64)v26);
    goto LABEL_30;
  }
LABEL_7:
  CmpReleaseShutdownRundown(v12);
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( v5 && v5 != FileHandle )
    ZwClose(v5);
LABEL_14:
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v29);
  return v11;
}
