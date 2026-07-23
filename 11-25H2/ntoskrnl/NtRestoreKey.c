/*
 * XREFs of NtRestoreKey @ 0x1407C15D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     CmpIsRegistryLockAcquired @ 0x140206FB0 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     CmRestoreKey @ 0x1407BD70C (CmRestoreKey.c)
 *     CmPostCallbackNotificationEx @ 0x14084BF60 (CmPostCallbackNotificationEx.c)
 *     CmpCallCallBacksEx @ 0x14084C050 (CmpCallCallBacksEx.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     CmCheckNoTxContext @ 0x140914000 (CmCheckNoTxContext.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140A6C040 (IoConvertFileHandleToKernelHandle.c)
 *     CmObReferenceObjectByHandle @ 0x140BA93B0 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
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
  __int128 v28; // [rsp+70h] [rbp-49h] BYREF
  __int128 v29; // [rsp+80h] [rbp-39h]
  __int128 v30; // [rsp+90h] [rbp-29h]
  struct _KAPC_STATE ApcState; // [rsp+A0h] [rbp-19h] BYREF

  Object = 0LL;
  Handle = 0LL;
  v26[1] = v26;
  v3 = (int)KeyHandle;
  v26[0] = v26;
  v27 = 0LL;
  v6 = 0;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
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
      *(_QWORD *)&v28 = v19;
      *((_QWORD *)&v28 + 1) = Handle;
      LOBYTE(v21) = 1;
      LODWORD(v29) = Flags;
      v22 = CmpCallCallBacksEx(41, (unsigned int)&v28, 0, v21, 42, 0LL, (__int64)v26);
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
      v12 = CmPostCallbackNotificationEx(42, (_DWORD)v19, v12, (unsigned int)&v28, 0LL, (__int64)v26);
    goto LABEL_22;
  }
  v12 = -1073741431;
LABEL_29:
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v27);
  return v12;
}
