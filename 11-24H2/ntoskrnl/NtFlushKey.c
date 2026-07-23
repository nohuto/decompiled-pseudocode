/*
 * XREFs of NtFlushKey @ 0x140A6F280
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406F4C60 (ExpWatchProductTypeWork.c)
 * Callees:
 *     CmpDoFlushAll @ 0x14020DA6C (CmpDoFlushAll.c)
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403AEC60 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x140414BC0 (CmpIsRegistryLockAcquired.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     CmpCallCallBacksEx @ 0x140843FD0 (CmpCallCallBacksEx.c)
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x1409667E8 (CmpLockRegistryFreezeAware.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     CmObReferenceObjectByHandle @ 0x140BBB350 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BBB7D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmpLockKcbShared @ 0x140BBBA1C (CmpLockKcbShared.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
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
  NTSTATUS v13; // ebx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v15; // rcx
  struct _EX_RUNDOWN_REF *v16; // rsi
  __int64 v17; // rcx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v23[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v25[3]; // [rsp+68h] [rbp-A0h] BYREF
  NTSTATUS v26; // [rsp+80h] [rbp-88h]
  int v27; // [rsp+84h] [rbp-84h]
  __int128 v28; // [rsp+88h] [rbp-80h]
  __int64 v29; // [rsp+98h] [rbp-70h]
  __int128 v30; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-58h]
  _OWORD v32[2]; // [rsp+B8h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v34[2]; // [rsp+108h] [rbp+0h] BYREF

  v24 = 0LL;
  v31 = 0LL;
  v1 = (int)KeyHandle;
  v30 = 0LL;
  memset(v32, 0, sizeof(v32));
  memset(&ApcState, 0, sizeof(ApcState));
  memset(v34, 0, sizeof(v34));
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v34, 0x20000u);
  v2 = 0LL;
  v23[1] = v23;
  Object = 0LL;
  v23[0] = v23;
  v3 = 0;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v30);
  v11 = CmpAcquireShutdownRundown(v5, v4, v6, v7);
  if ( v11 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    LOBYTE(v10) = PreviousMode;
    v13 = CmObReferenceObjectByHandle(v1, 0, v9, v10, (__int64)&Object, (__int64)&v24);
    if ( v13 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v2 = (ULONG_PTR *)Object;
      --CurrentThread->KernelApcDisable;
      if ( (*(_DWORD *)(*(_QWORD *)(v2[1] + 32) + 160LL) & 2) != 0 && PreviousMode && (~HIDWORD(v24) & 0x20006) != 0 )
      {
        v13 = -1073741790;
LABEL_14:
        KeLeaveCriticalRegion();
        goto LABEL_15;
      }
      if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
      {
        *(_QWORD *)&v32[0] = v2;
        v20 = CmpCallCallBacksEx(0x1Eu, (__int64)v32, 0LL, 1, 0x1Fu, (__int64)v2, (__int64)v23);
        if ( v20 < 0 )
        {
          v13 = 0;
          if ( v20 != -1073740541 )
            v13 = v20;
          goto LABEL_14;
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
LABEL_13:
          if ( v3 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v23[0] != v23 )
          {
            v29 = 0LL;
            v27 = 0;
            v25[2] = v32;
            v25[0] = v2;
            v28 = 0LL;
            v25[1] = (unsigned int)v13;
            v26 = v13;
            CmpCallCallBacksEx(0x1Fu, (__int64)v25, 0LL, 0, 0x1Fu, (__int64)v2, (__int64)v23);
            v13 = v26;
          }
          goto LABEL_14;
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
      goto LABEL_13;
    }
    v2 = (ULONG_PTR *)Object;
  }
  else
  {
    v13 = -1073741431;
  }
LABEL_15:
  if ( v2 )
    ObfDereferenceObject(v2);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v8) = 21;
    guard_dispatch_icall_no_overrides(v8, v34);
  }
  if ( v11 )
    CmpReleaseShutdownRundown(v8);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v30);
  return v13;
}
