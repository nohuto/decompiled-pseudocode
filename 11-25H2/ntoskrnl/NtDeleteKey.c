/*
 * XREFs of NtDeleteKey @ 0x140A0A070
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     CmpIsRegistryLockAcquired @ 0x140206FB0 (CmpIsRegistryLockAcquired.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x14031CDD0 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmDoVirtualTest @ 0x1404A1EF8 (CmDoVirtualTest.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     CmpCallCallBacksEx @ 0x14084C050 (CmpCallCallBacksEx.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14086392C (CmKeyBodyNeedsVirtualImage.c)
 *     CmDeleteKey @ 0x14086D4EC (CmDeleteKey.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140870454 (CmpTransSearchAddTransFromKeyBody.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x140982C20 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     CmKeyBodyRemapToVirtual @ 0x140AAC100 (CmKeyBodyRemapToVirtual.c)
 *     CmObReferenceObjectByHandle @ 0x140BA93B0 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtDeleteKey(HANDLE KeyHandle)
{
  char v2; // r12
  char v3; // r13
  char PreviousMode; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // r9d
  char v12; // di
  int v13; // eax
  NTSTATUS v14; // ebx
  char v15; // si
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v17; // rdi
  int v18; // eax
  __int64 *v19; // rbx
  int v20; // edx
  __int64 v21; // rax
  int v23; // r8d
  int v24; // r9d
  GUID *p_TransactionId; // r8
  __int64 v26; // rcx
  char v27; // [rsp+48h] [rbp-C0h]
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+68h] [rbp-A0h]
  _QWORD v32[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v33; // [rsp+80h] [rbp-88h] BYREF
  __int128 v34; // [rsp+90h] [rbp-78h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v36[3]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v37; // [rsp+D8h] [rbp-30h]
  __int128 v38; // [rsp+E0h] [rbp-28h]
  __int64 v39; // [rsp+F0h] [rbp-18h]
  GUID v40[2]; // [rsp+F8h] [rbp-10h] BYREF
  GUID TransactionId; // [rsp+118h] [rbp+10h] BYREF
  _OWORD v42[2]; // [rsp+128h] [rbp+20h] BYREF

  v30 = 0LL;
  v34 = 0LL;
  LODWORD(v29) = 0;
  memset(v40, 0, sizeof(v40));
  v33 = 0LL;
  v31 = 0LL;
  memset(v42, 0, sizeof(v42));
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v42, 0x20000u);
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v34);
  Object = 0LL;
  v2 = 0;
  v32[1] = v32;
  v3 = 0;
  v32[0] = v32;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v27 = CmpAcquireShutdownRundown(v6, v5, v7, v8);
  v12 = v27;
  if ( !v27 )
  {
    v14 = -1073741431;
    goto LABEL_38;
  }
  LOBYTE(v11) = PreviousMode;
  v13 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 0x10000, v10, v11, (__int64)&Object, (__int64)&v30);
  v14 = v13;
  if ( v13 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    if ( CmDoVirtualTest() )
    {
      LOBYTE(v24) = PreviousMode;
      v14 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 131097, v23, v24, (__int64)&Object, (__int64)&v30);
      if ( v14 < 0 )
        goto LABEL_68;
      v17 = Object;
      if ( CmKeyBodyNeedsVirtualImage((__int64)Object) )
      {
        v15 = 1;
        goto LABEL_6;
      }
    }
    else
    {
      v17 = Object;
    }
    v14 = -1073741790;
    goto LABEL_58;
  }
  v15 = 0;
  if ( v13 >= 0 )
  {
LABEL_6:
    CurrentThread = KeGetCurrentThread();
    v3 = 1;
    v17 = Object;
    --CurrentThread->KernelApcDisable;
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
    {
      *(_QWORD *)&v40[0].Data1 = v17;
      v18 = CmpCallCallBacksEx(0, (__int64)v40, 0LL, 1, 0xFu, (__int64)v17, (__int64)v32);
      if ( v18 < 0 )
      {
        v14 = 0;
        if ( v18 != -1073740541 )
          v14 = v18;
        goto LABEL_27;
      }
      v2 = 1;
    }
    if ( CmpTraceRoutine && v17 )
      v31 = v17[1];
    v19 = KeAbPreAcquire((__int64)&ExpKeyManipLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&ExpKeyManipLock, 0, v19, (unsigned __int64)&ExpKeyManipLock);
    if ( v19 )
      *((_BYTE *)v19 + 10) = 1;
    v14 = 0;
    if ( ExpControlKey && *((_QWORD *)Object + 1) == *((_QWORD *)ExpControlKey + 1)
      || qword_140EFE568 && *((_QWORD *)Object + 1) == *((_QWORD *)qword_140EFE568 + 1) )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&ExpKeyManipLock);
      KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
      v17 = Object;
      goto LABEL_27;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ExpKeyManipLock);
    KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
    v17 = Object;
    v9 = *((_QWORD *)Object + 1);
    if ( (*(_DWORD *)(v9 + 8) & 0x80u) != 0 || (v21 = *(_QWORD *)(v9 + 72)) != 0 && (*(_DWORD *)(v21 + 8) & 0x80u) != 0 )
    {
      v14 = -1073741790;
      goto LABEL_27;
    }
    if ( !v15 )
    {
LABEL_25:
      v14 = CmDeleteKey(v17);
      if ( v14 >= 0 && (v30 & 4) != 0 )
      {
        if ( v17[7] || v17[8] )
        {
          TransactionId = 0LL;
          CmpLockRegistry(v9);
          if ( (int)CmpTransSearchAddTransFromKeyBody(v17, &v33) < 0 )
          {
            CmpUnlockRegistry(v26);
            goto LABEL_27;
          }
          TransactionId = *(GUID *)(v33 + 88);
          CmpUnlockRegistry(v26);
          p_TransactionId = &TransactionId;
        }
        else
        {
          p_TransactionId = 0LL;
        }
        SeDeleteObjectAuditAlarmWithTransaction(v17, KeyHandle, p_TransactionId);
      }
LABEL_27:
      if ( !v15 )
        goto LABEL_28;
      goto LABEL_58;
    }
    LOBYTE(v20) = PreviousMode;
    v14 = CmKeyBodyRemapToVirtual((unsigned int)&Object, v20, 0x10000, (unsigned int)&SubjectContext, (__int64)&v29);
    if ( v14 >= 0 )
    {
      v17 = Object;
      if ( CmpVEEnabled && (*(_DWORD *)(*((_QWORD *)Object + 1) + 184LL) & 0x1000000) != 0 )
        goto LABEL_25;
      v14 = -1073741790;
LABEL_58:
      SeReleaseSubjectContext(&SubjectContext);
LABEL_28:
      if ( v2 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v32[0] != v32 )
      {
        v39 = 0LL;
        v36[2] = v40;
        v37 = (unsigned int)v14;
        v38 = 0LL;
        v36[0] = v17;
        v36[1] = (unsigned int)v14;
        CmpCallCallBacksEx(0xFu, (__int64)v36, 0LL, 0, 0xFu, (__int64)v17, (__int64)v32);
        v14 = v37;
      }
      if ( v3 )
        KeLeaveCriticalRegion();
      goto LABEL_35;
    }
LABEL_68:
    v17 = Object;
    goto LABEL_58;
  }
  v17 = Object;
LABEL_35:
  if ( v17 )
    ObfDereferenceObject(v17);
  v12 = v27;
LABEL_38:
  if ( CmpTraceRoutine )
  {
    LOBYTE(v9) = 12;
    guard_dispatch_icall_no_overrides(v9);
  }
  if ( v12 )
    CmpReleaseShutdownRundown(v9);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v34);
  return v14;
}
