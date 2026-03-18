/*
 * XREFs of PspJobDelete @ 0x1404EE9D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14025E950 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExDeleteResourceLite @ 0x1402CD920 (ExDeleteResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x1406A8030 (ZwDeleteWnfStateName.c)
 *     PspDeleteSilo @ 0x140772C34 (PspDeleteSilo.c)
 *     PspNetRateControlDispatch @ 0x1407779A4 (PspNetRateControlDispatch.c)
 *     PspRemoveRateControl @ 0x140777BF8 (PspRemoveRateControl.c)
 *     ExMapHandleToPointer @ 0x14084ACF0 (ExMapHandleToPointer.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     PsReturnSharedPoolQuota @ 0x14085A690 (PsReturnSharedPoolQuota.c)
 *     PspLockRootJobExclusive @ 0x14085D130 (PspLockRootJobExclusive.c)
 *     PspLockJobConditionally @ 0x14085E94C (PspLockJobConditionally.c)
 *     PspEmptyPropertySet @ 0x1408A7B34 (PspEmptyPropertySet.c)
 *     PspLockJobsAndProcessExclusive @ 0x1408E705C (PspLockJobsAndProcessExclusive.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x1408E7110 (PspGetJobLockHierarchyForDeletion.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x1408E7358 (PspUnlockJobsAndProcessExclusive.c)
 *     PspRemoveIoAttribution @ 0x1408E9FA4 (PspRemoveIoAttribution.c)
 *     PspLockJobListExclusive @ 0x1408EAB00 (PspLockJobListExclusive.c)
 *     PspLockJobExclusive @ 0x1408EB430 (PspLockJobExclusive.c)
 *     PspUnlockJob @ 0x1408ED360 (PspUnlockJob.c)
 *     ExDestroyHandle @ 0x14098A050 (ExDestroyHandle.c)
 *     PspRemoveCpuRateControl @ 0x14098CE84 (PspRemoveCpuRateControl.c)
 *     IoFreeMiniCompletionPacket @ 0x1409A7190 (IoFreeMiniCompletionPacket.c)
 *     PsInvokeWin32Callout @ 0x1409BADD0 (PsInvokeWin32Callout.c)
 *     PspUnlockJobConditionally @ 0x140A36C28 (PspUnlockJobConditionally.c)
 *     PspJobDeleteStorageArrays @ 0x140A5694C (PspJobDeleteStorageArrays.c)
 *     PspUnlockJobListExclusive @ 0x140A56C88 (PspUnlockJobListExclusive.c)
 *     PspJobIoRateControlDisable @ 0x140A5E7F8 (PspJobIoRateControlDisable.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PspJobDelete(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *v3; // rsi
  __int64 v4; // rax
  void *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  void *v15; // rcx
  struct _KTHREAD *v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rax
  void *v19; // rcx
  __int64 v20; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-41h] BYREF
  __int128 v22; // [rsp+40h] [rbp-39h] BYREF
  __int128 v23; // [rsp+50h] [rbp-29h]
  __int64 v24; // [rsp+60h] [rbp-19h]
  _OWORD v25[2]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v26; // [rsp+88h] [rbp+Fh]
  _OWORD v27[2]; // [rsp+90h] [rbp+17h] BYREF
  int v28; // [rsp+B0h] [rbp+37h]

  v26 = 0LL;
  LODWORD(v24) = 0;
  memset(v25, 0, sizeof(v25));
  v28 = 0;
  v22 = 0LL;
  v20 = 0LL;
  v23 = 0LL;
  CurrentThread = KeGetCurrentThread();
  memset(v27, 0, sizeof(v27));
  PspEmptyPropertySet(a1 + 1512);
  PspJobDeleteStorageArrays(a1);
  v3 = (__int64 *)(a1 + 1544);
  if ( *(_QWORD *)(a1 + 1240) || *v3 )
  {
    PspLockRootJobExclusive(a1, CurrentThread, &v20);
    PspLockJobConditionally(a1, &v20);
    if ( *(_QWORD *)(a1 + 1240) )
      PspRemoveCpuRateControl(a1);
    v4 = *v3;
    if ( *v3 )
    {
      memset((char *)v25 + 8, 0, 24);
      v26 = 4LL;
      *(_QWORD *)&v25[0] = *(_QWORD *)(v4 + 56);
      PspNetRateControlDispatch(v25);
      PspRemoveRateControl(a1);
    }
    PspUnlockJobConditionally(a1, &v20);
    PspUnlockJob(v20, CurrentThread);
  }
  PspJobIoRateControlDisable(a1);
  if ( *(_QWORD *)(a1 + 1584) )
  {
    PspLockRootJobExclusive(a1, CurrentThread, &v20);
    PspLockJobConditionally(a1, &v20);
    if ( *(_QWORD *)(a1 + 1584) )
      PspRemoveIoAttribution((PVOID)a1);
    PspUnlockJobConditionally(a1, &v20);
    PspUnlockJob(v20, CurrentThread);
  }
  v21 = *(_DWORD *)(a1 + 576);
  if ( v21 <= 0xFFFFFFFD )
  {
    if ( (unsigned __int8)IsWin32kJobNotifyCallOutPresent() )
    {
      if ( (*(_DWORD *)(a1 + 1552) & 0x10) != 0 )
        Win32kJobTerminateNotify(a1);
    }
    else
    {
      *(_QWORD *)&v23 = a1;
      DWORD2(v23) = 2;
      v24 = 0LL;
      PspLockJobExclusive(a1, CurrentThread);
      PsInvokeWin32Callout(6LL, &v22, 1LL, &v21);
      PspUnlockJob(a1, CurrentThread);
    }
  }
  v5 = *(void **)(a1 + 552);
  *(_DWORD *)(a1 + 256) = 0;
  if ( v5 )
  {
    ObfDereferenceObjectWithTag(v5, 0x624A7350u);
    *(_QWORD *)(a1 + 552) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 528);
  if ( v6 )
  {
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v6 + 8));
    ExFreePoolWithTag(*(PVOID *)(a1 + 528), 0x614A7350u);
    PsReturnSharedPoolQuota(*(PVOID *)(a1 + 536));
  }
  PspLockJobListExclusive(CurrentThread);
  v7 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v7 + 8) != a1 + 24 )
    goto LABEL_43;
  v8 = *(_QWORD **)(a1 + 32);
  if ( *v8 != a1 + 24 )
    goto LABEL_43;
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  PspUnlockJobListExclusive(CurrentThread);
  v9 = *(void **)(a1 + 1216);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x624A7350u);
    v10 = *(void **)(a1 + 1224);
    *(_QWORD *)(a1 + 1216) = 0LL;
    PsReturnSharedPoolQuota(v10);
  }
  v11 = *(_QWORD *)(a1 + 1232);
  if ( v11 )
    IoFreeMiniCompletionPacket(v11);
  if ( (*(_DWORD *)(a1 + 1552) & 0x800) != 0 )
    ZwDeleteWnfStateName(a1 + 1112);
  PspGetJobLockHierarchyForDeletion(a1, v27);
  PspLockJobsAndProcessExclusive(v27, 0LL, CurrentThread, 0LL);
  v12 = (_QWORD *)(a1 + 1272);
  v13 = *(_QWORD *)(a1 + 1272);
  if ( v13 != a1 + 1272 )
  {
    if ( *(_QWORD **)(v13 + 8) == v12 )
    {
      v14 = *(_QWORD **)(a1 + 1280);
      if ( (_QWORD *)*v14 == v12 )
      {
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        *(_QWORD *)(a1 + 1280) = a1 + 1272;
        *v12 = v12;
        ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(a1 + 1304), 0x73507350u);
        *(_QWORD *)(a1 + 1304) = 0LL;
        goto LABEL_33;
      }
    }
LABEL_43:
    __fastfail(3u);
  }
LABEL_33:
  PspUnlockJobsAndProcessExclusive(v27, 0LL, CurrentThread);
  ExDeleteResourceLite((PERESOURCE)(a1 + 56));
  if ( *(_QWORD *)(a1 + 1336) )
  {
    v15 = *(void **)(a1 + 1344);
    if ( v15 )
    {
      ExFreePoolWithTag(v15, 0x624A7350u);
      *(_QWORD *)(a1 + 1344) = 0LL;
    }
  }
  if ( (*(_DWORD *)(a1 + 1552) & 0x40000000) != 0 )
    PspDeleteSilo(a1);
  v16 = KeGetCurrentThread();
  --v16->KernelApcDisable;
  v17 = *(_DWORD *)(a1 + 1468);
  if ( v17 )
  {
    v18 = ExMapHandleToPointer(PspUniqueJobIdTable, v17);
    ExDestroyHandle(PspUniqueJobIdTable, *(unsigned int *)(a1 + 1468), v18);
  }
  KeLeaveCriticalRegion();
  v19 = *(void **)(a1 + 1792);
  if ( v19 )
    ObfDereferenceObjectWithTag(v19, 0x624A7350u);
}
