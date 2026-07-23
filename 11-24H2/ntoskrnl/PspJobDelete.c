/*
 * XREFs of PspJobDelete @ 0x1404E6110
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExDeleteResourceLite @ 0x1402E55A0 (ExDeleteResourceLite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x1406A8FD0 (ZwDeleteWnfStateName.c)
 *     PspDeleteSilo @ 0x140772E54 (PspDeleteSilo.c)
 *     PspNetRateControlDispatch @ 0x140777B64 (PspNetRateControlDispatch.c)
 *     PspRemoveRateControl @ 0x140777DB8 (PspRemoveRateControl.c)
 *     ExMapHandleToPointer @ 0x140846FB0 (ExMapHandleToPointer.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     PsReturnSharedPoolQuota @ 0x140856970 (PsReturnSharedPoolQuota.c)
 *     PspLockRootJobExclusive @ 0x140858E9C (PspLockRootJobExclusive.c)
 *     PspLockJobConditionally @ 0x14085A6BC (PspLockJobConditionally.c)
 *     PspRemoveIoAttribution @ 0x14085B7D4 (PspRemoveIoAttribution.c)
 *     PspLockJobListExclusive @ 0x14085C330 (PspLockJobListExclusive.c)
 *     PspUnlockJob @ 0x14085EB90 (PspUnlockJob.c)
 *     ExDestroyHandle @ 0x1408961C0 (ExDestroyHandle.c)
 *     PspLockJobsAndProcessExclusive @ 0x1408D78C4 (PspLockJobsAndProcessExclusive.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x1408D7978 (PspGetJobLockHierarchyForDeletion.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x1408D7BB8 (PspUnlockJobsAndProcessExclusive.c)
 *     PspEmptyPropertySet @ 0x1408FDD8C (PspEmptyPropertySet.c)
 *     PspRemoveCpuRateControl @ 0x1409777A4 (PspRemoveCpuRateControl.c)
 *     IoFreeMiniCompletionPacket @ 0x140990660 (IoFreeMiniCompletionPacket.c)
 *     PspUnlockJobConditionally @ 0x140A2BA80 (PspUnlockJobConditionally.c)
 *     PspJobDeleteStorageArrays @ 0x140A4E7DC (PspJobDeleteStorageArrays.c)
 *     PspUnlockJobListExclusive @ 0x140A4EB18 (PspUnlockJobListExclusive.c)
 *     PspJobIoRateControlDisable @ 0x140A56A68 (PspJobIoRateControlDisable.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 v20; // [rsp+30h] [rbp-19h] BYREF
  _OWORD v21[2]; // [rsp+38h] [rbp-11h] BYREF
  __int64 v22; // [rsp+58h] [rbp+Fh]
  _OWORD v23[2]; // [rsp+60h] [rbp+17h] BYREF
  int v24; // [rsp+80h] [rbp+37h]

  v22 = 0LL;
  v24 = 0;
  memset(v21, 0, sizeof(v21));
  CurrentThread = KeGetCurrentThread();
  memset(v23, 0, sizeof(v23));
  v20 = 0LL;
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
      memset((char *)v21 + 8, 0, 24);
      v22 = 4LL;
      *(_QWORD *)&v21[0] = *(_QWORD *)(v4 + 56);
      PspNetRateControlDispatch(v21);
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
  if ( *(_DWORD *)(a1 + 576) <= 0xFFFFFFFD
    && (unsigned __int8)IsWin32kJobNotifyCallOutPresent()
    && (*(_DWORD *)(a1 + 1552) & 0x10) != 0 )
  {
    Win32kJobTerminateNotify(a1);
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
  PspGetJobLockHierarchyForDeletion(a1, v23);
  PspLockJobsAndProcessExclusive(v23, 0LL, CurrentThread, 0LL);
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
  PspUnlockJobsAndProcessExclusive(v23, 0LL, CurrentThread);
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
