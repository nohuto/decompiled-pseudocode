/*
 * XREFs of NtFlushKey @ 0x140A73170
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406EB400 (ExpWatchProductTypeWork.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     CmpIsRegistryLockAcquired @ 0x140206FB0 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x14031CDD0 (EtwGetKernelTraceTimestamp.c)
 *     CmpDoFlushAll @ 0x14032401C (CmpDoFlushAll.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     CmPostCallbackNotificationEx @ 0x14084BF60 (CmPostCallbackNotificationEx.c)
 *     CmpCallCallBacksEx @ 0x14084C050 (CmpCallCallBacksEx.c)
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x140884780 (CmpLockRegistryFreezeAware.c)
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140BA9340 (CmpLockKcbShared.c)
 *     CmObReferenceObjectByHandle @ 0x140BA93B0 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BA9880 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 */

NTSTATUS __cdecl NtFlushKey(HANDLE KeyHandle)
{
  int v1; // ebx
  ULONG_PTR *v2; // rdi
  char v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // r9d
  char v11; // r13
  char PreviousMode; // si
  int v13; // ebx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v15; // rcx
  struct _EX_RUNDOWN_REF *v16; // rsi
  __int64 v17; // rcx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  PVOID Object; // [rsp+48h] [rbp-79h] BYREF
  __int64 v23; // [rsp+50h] [rbp-71h] BYREF
  _QWORD v24[2]; // [rsp+58h] [rbp-69h] BYREF
  __int128 v25; // [rsp+68h] [rbp-59h] BYREF
  _OWORD v26[2]; // [rsp+78h] [rbp-49h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-29h] BYREF
  _OWORD v28[2]; // [rsp+C8h] [rbp+7h] BYREF

  v23 = 0LL;
  v1 = (int)KeyHandle;
  v25 = 0LL;
  memset(v26, 0, sizeof(v26));
  memset(&ApcState, 0, sizeof(ApcState));
  memset(v28, 0, sizeof(v28));
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v28, 0x20000u);
  v2 = 0LL;
  v24[1] = v24;
  Object = 0LL;
  v24[0] = v24;
  v3 = 0;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v25);
  v11 = CmpAcquireShutdownRundown(v5, v4, v6, v7);
  if ( v11 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    LOBYTE(v10) = PreviousMode;
    v13 = CmObReferenceObjectByHandle(v1, 0, v9, v10, (__int64)&Object, (__int64)&v23);
    if ( v13 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v2 = (ULONG_PTR *)Object;
      --CurrentThread->KernelApcDisable;
      if ( (*(_DWORD *)(*(_QWORD *)(v2[1] + 32) + 160LL) & 2) != 0 && PreviousMode && (~HIDWORD(v23) & 0x20006) != 0 )
      {
        v13 = -1073741790;
LABEL_15:
        KeLeaveCriticalRegion();
        goto LABEL_16;
      }
      if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
      {
        *(_QWORD *)&v26[0] = v2;
        v20 = CmpCallCallBacksEx(0x1Eu, (__int64)v26, 0LL, 1, 0x1Fu, (__int64)v2, (__int64)v24);
        if ( v20 < 0 )
        {
          v13 = 0;
          if ( v20 != -1073740541 )
            v13 = v20;
          goto LABEL_15;
        }
        v3 = 1;
      }
      CmpLockRegistryFreezeAware(0);
      CmpLockKcbShared(v2[1]);
      v13 = CmpPerformKeyBodyDeletionCheck(v2, 0LL);
      if ( v13 >= 0 )
      {
        v15 = v2[1];
        v16 = *(struct _EX_RUNDOWN_REF **)(v15 + 32);
        if ( v16 == (struct _EX_RUNDOWN_REF *)CmpMasterHive )
        {
          CmpUnlockKcb(v15);
          CmpUnlockRegistry(v19);
          CmpAttachToRegistryProcess(&ApcState);
          CmpDoFlushAll(0);
          CmpDetachFromRegistryProcess(&ApcState);
          v13 = 0;
          goto LABEL_13;
        }
        if ( ExAcquireRundownProtection_0(v16 + 205) )
        {
          CmpUnlockKcb(v2[1]);
          CmpUnlockRegistry(v17);
          CmpAttachToRegistryProcess(&ApcState);
          v13 = CmpFlushHive((ULONG_PTR)v16, 0);
          if ( v13 < 0 )
            v13 = -1073741491;
          CmpDetachFromRegistryProcess(&ApcState);
          ExReleaseRundownProtection_0(v16 + 205);
          goto LABEL_13;
        }
        v13 = -1073740763;
      }
      CmpUnlockKcb(v2[1]);
      CmpUnlockRegistry(v21);
LABEL_13:
      if ( v3 )
        v13 = CmPostCallbackNotificationEx(31, (__int64)v2, v13, (__int64)v26, 0LL, v24);
      goto LABEL_15;
    }
    v2 = (ULONG_PTR *)Object;
  }
  else
  {
    v13 = -1073741431;
  }
LABEL_16:
  if ( v2 )
    ObfDereferenceObject(v2);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v8) = 21;
    guard_dispatch_icall_no_overrides(v8);
  }
  if ( v11 )
    CmpReleaseShutdownRundown(v8);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v25);
  return v13;
}
