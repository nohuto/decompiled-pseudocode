/*
 * XREFs of NtSaveKeyEx @ 0x140A6BD80
 * Callers:
 *     NtSaveKey @ 0x1407C1960 (NtSaveKey.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     CmpIsRegistryLockAcquired @ 0x140206FB0 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     CmDumpKeyToFile @ 0x1407BD56C (CmDumpKeyToFile.c)
 *     CmSaveKey @ 0x1407BE3E4 (CmSaveKey.c)
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

NTSTATUS __cdecl NtSaveKeyEx(HANDLE KeyHandle, HANDLE FileHandle, ULONG Format)
{
  int v3; // esi
  struct _KTHREAD *CurrentThread; // rcx
  char PreviousMode; // r15
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  NTSTATUS v12; // ebx
  __int64 v13; // rdx
  int v14; // r8d
  int v15; // r9d
  HANDLE v16; // rdi
  struct _KTHREAD *v18; // rax
  PVOID v19; // rsi
  int v20; // eax
  unsigned int v21; // eax
  int v22; // r8d
  unsigned int v23; // ebx
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
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v27);
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( !(unsigned __int8)CmpAcquireShutdownRundown(CurrentThread, v8, v9, v10) )
  {
    v12 = -1073741431;
    goto LABEL_10;
  }
  v12 = CmCheckNoTxContext();
  if ( v12 >= 0 )
  {
    if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
    {
      if ( ((Format - 1) & 0xFFFFFFFC) == 0 && Format != 3 )
      {
        if ( PreviousMode == 1 )
        {
          LOBYTE(v13) = 1;
          v16 = 0LL;
          v12 = IoConvertFileHandleToKernelHandle(FileHandle, v13, 2LL);
          if ( v12 < 0 )
          {
LABEL_8:
            if ( v16 && v16 != FileHandle )
              ZwClose(v16);
            goto LABEL_9;
          }
        }
        else
        {
          v16 = FileHandle;
          Handle = FileHandle;
        }
        LOBYTE(v15) = PreviousMode;
        v12 = CmObReferenceObjectByHandle(v3, 0, v14, v15, (__int64)&Object, 0LL);
        if ( v12 < 0 )
        {
          v19 = Object;
        }
        else
        {
          v18 = KeGetCurrentThread();
          v19 = Object;
          v16 = Handle;
          --v18->KernelApcDisable;
          if ( !CmpCallBackCount
            || CmpIsRegistryLockAcquired()
            || (*(_QWORD *)&v28 = v19,
                *((_QWORD *)&v28 + 1) = Handle,
                LODWORD(v29) = Format,
                v20 = CmpCallCallBacksEx(0x2Bu, (__int64)&v28, 0LL, 1, 0x2Cu, 0LL, (__int64)v26),
                v20 >= 0) )
          {
            CmpAttachToRegistryProcess(&ApcState);
            if ( Format == 4 )
            {
              v21 = CmDumpKeyToFile((__int64)v19, PreviousMode, Handle);
            }
            else
            {
              v22 = 5;
              if ( Format != 2 )
                v22 = 3;
              v21 = CmSaveKey((__int64)v19, (__int64)Handle, v22, PreviousMode);
            }
            v23 = v21;
            CmpDetachFromRegistryProcess(&ApcState);
            v12 = CmPostCallbackNotificationEx(44, (__int64)v19, v23, (__int64)&v28, 0LL, v26);
          }
          else
          {
            v12 = 0;
            if ( v20 != -1073740541 )
              v12 = v20;
          }
          KeLeaveCriticalRegion();
        }
        if ( v19 )
          ObfDereferenceObject(v19);
        goto LABEL_8;
      }
      v12 = -1073741811;
    }
    else
    {
      v12 = -1073741727;
    }
  }
LABEL_9:
  CmpReleaseShutdownRundown(v11);
LABEL_10:
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v27);
  return v12;
}
