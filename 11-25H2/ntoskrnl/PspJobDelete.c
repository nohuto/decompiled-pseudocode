/*
 * XREFs of PspJobDelete @ 0x1404EB860
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExDeleteResourceLite @ 0x1403A42F0 (ExDeleteResourceLite.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x14069CD60 (ZwDeleteWnfStateName.c)
 *     PspDeleteSilo @ 0x14076326C (PspDeleteSilo.c)
 *     PspNetRateControlDispatch @ 0x140767EC4 (PspNetRateControlDispatch.c)
 *     PspRemoveRateControl @ 0x140768118 (PspRemoveRateControl.c)
 *     ExMapHandleToPointer @ 0x14084EF40 (ExMapHandleToPointer.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     ExDestroyHandle @ 0x1408B4AF0 (ExDestroyHandle.c)
 *     PspLockJobsAndProcessExclusive @ 0x1408D7E24 (PspLockJobsAndProcessExclusive.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x1408D7ED8 (PspGetJobLockHierarchyForDeletion.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x1408D8590 (PspUnlockJobsAndProcessExclusive.c)
 *     PspUnlockJobListExclusive @ 0x1408D9C40 (PspUnlockJobListExclusive.c)
 *     PspRemoveIoAttribution @ 0x1408DABD8 (PspRemoveIoAttribution.c)
 *     PspLockJobListExclusive @ 0x1408DB848 (PspLockJobListExclusive.c)
 *     PspLockJobExclusive @ 0x1408DC060 (PspLockJobExclusive.c)
 *     PspUnlockJob @ 0x1408DDFF0 (PspUnlockJob.c)
 *     PspEmptyPropertySet @ 0x1408F56C4 (PspEmptyPropertySet.c)
 *     PsReturnSharedPoolQuota @ 0x14091B660 (PsReturnSharedPoolQuota.c)
 *     PspRemoveCpuRateControl @ 0x14091C4A8 (PspRemoveCpuRateControl.c)
 *     PsInvokeWin32Callout @ 0x140961150 (PsInvokeWin32Callout.c)
 *     PspLockRootJobExclusive @ 0x1409697E4 (PspLockRootJobExclusive.c)
 *     IoFreeMiniCompletionPacket @ 0x1409A6C50 (IoFreeMiniCompletionPacket.c)
 *     PspUnlockJobConditionally @ 0x140A30D30 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x140A3B07C (PspLockJobConditionally.c)
 *     PspJobDeleteStorageArrays @ 0x140A5315C (PspJobDeleteStorageArrays.c)
 *     PspJobIoRateControlDisable @ 0x140A5D370 (PspJobIoRateControlDisable.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
    goto LABEL_42;
  v8 = *(_QWORD **)(a1 + 32);
  if ( *v8 != a1 + 24 )
    goto LABEL_42;
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
    ZwDeleteWnfStateName((PCWNF_STATE_NAME)(a1 + 1112));
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
        goto LABEL_32;
      }
    }
LABEL_42:
    __fastfail(3u);
  }
LABEL_32:
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
