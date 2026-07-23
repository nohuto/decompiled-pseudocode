/*
 * XREFs of NtNotifyChangeMultipleKeys @ 0x140937870
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406EB400 (ExpWatchProductTypeWork.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140787030 (SepAdtOpenRegAndSetupNotification.c)
 *     SepAdtRegNotificationCallback @ 0x1407870D0 (SepAdtRegNotificationCallback.c)
 *     ExpWatchLicenseInfoWork @ 0x1407A7F10 (ExpWatchLicenseInfoWork.c)
 *     WheaInitializeRegChangeNotify @ 0x1407B91FC (WheaInitializeRegChangeNotify.c)
 *     WheaRegChangeNotifyCallback @ 0x1407B9290 (WheaRegChangeNotifyCallback.c)
 *     NtNotifyChangeKey @ 0x140937800 (NtNotifyChangeKey.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     ObDereferenceObjectDeferDelete @ 0x1403F2E60 (ObDereferenceObjectDeferDelete.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     KeInitializeApc @ 0x140429EA0 (KeInitializeApc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     Feature_NotifyQuotaCharge__private_IsEnabledDeviceUsageNoInline @ 0x1404F1ECC (Feature_NotifyQuotaCharge__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmUnlockHive @ 0x14084AA3C (CmUnlockHive.c)
 *     CmLockHive @ 0x14084AA78 (CmLockHive.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     CmpFreePostBlock @ 0x14086CC80 (CmpFreePostBlock.c)
 *     CmpUnlockTwoKcbs @ 0x14086CD24 (CmpUnlockTwoKcbs.c)
 *     CmpInitializeParseContext @ 0x140913DE0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x140913E90 (CmpCleanupParseContext.c)
 *     ExRaiseAccessViolation @ 0x140936B90 (ExRaiseAccessViolation.c)
 *     CmpLockTwoKcbsShared @ 0x1409385D8 (CmpLockTwoKcbsShared.c)
 *     CmpAllocatePostBlock @ 0x140938BE0 (CmpAllocatePostBlock.c)
 *     CmpNotifyChangeKey @ 0x1409391FC (CmpNotifyChangeKey.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140BA9340 (CmpLockKcbShared.c)
 *     CmObReferenceObjectByHandle @ 0x140BA93B0 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BA94E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 *     CmObReferenceObjectByName @ 0x140BA9D80 (CmObReferenceObjectByName.c)
 */

NTSTATUS __cdecl NtNotifyChangeMultipleKeys(
        HANDLE MasterKeyHandle,
        ULONG Count,
        OBJECT_ATTRIBUTES SubordinateObjects[],
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        PVOID Buffer,
        ULONG BufferSize,
        BOOLEAN Asynchronous)
{
  int v14; // edi
  ULONG_PTR *v15; // r13
  int v16; // r15d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  int v22; // r8d
  unsigned __int8 PreviousMode; // si
  _KPROCESS *Process; // rcx
  bool v25; // si
  PIO_STATUS_BLOCK v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  int v32; // r12d
  __int64 v33; // rcx
  NTSTATUS v34; // ebx
  _QWORD *v35; // rsi
  unsigned int v36; // edi
  __int64 v37; // r15
  __int64 Pool2; // rax
  struct _KEVENT *v39; // rcx
  __int64 v40; // rbx
  ULONG_PTR v41; // rcx
  unsigned int v42; // r15d
  int v43; // edi
  PVOID v44; // rdi
  _QWORD *v45; // rax
  unsigned __int8 v46; // r9
  struct _KTHREAD *CurrentThread; // rdx
  void *v48; // r8
  __int64 v49; // rcx
  ULONG_PTR v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  char v53; // r15
  __int64 v54; // rcx
  __int64 v56; // rcx
  __int16 v57; // ax
  bool v58; // r13
  ULONG_PTR *v59; // r15
  __int64 v60; // rcx
  ULONG_PTR v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  NTSTATUS v64; // eax
  __int64 v65; // rcx
  unsigned __int8 v66; // r14
  __int64 v67; // rax
  _QWORD *v68; // rcx
  __int64 v69; // rdx
  _QWORD *v70; // rcx
  int v71; // r9d
  unsigned __int64 v72; // rcx
  ULONG_PTR v73; // rax
  unsigned __int64 v74; // rdx
  __int64 v75; // rcx
  _QWORD *v76; // rax
  unsigned __int8 CurrentIrql; // r15
  unsigned __int8 v78; // di
  __int64 v79; // rax
  __int64 v80; // rdx
  _QWORD *v81; // rcx
  __int64 v82; // rcx
  unsigned __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 **v87; // rcx
  _QWORD *v88; // rcx
  __int64 v89; // rax
  __int64 **v90; // rcx
  ULONG_PTR v91; // rcx
  __int64 v92; // rcx
  __int64 v93; // rdx
  _QWORD *v94; // rcx
  __int64 v95; // rdx
  __int64 **v96; // rcx
  __int64 v97; // rdx
  __int64 **v98; // rcx
  char v99; // [rsp+40h] [rbp-288h]
  KPROCESSOR_MODE v100; // [rsp+41h] [rbp-287h]
  bool v101; // [rsp+44h] [rbp-284h]
  int v102; // [rsp+48h] [rbp-280h]
  __int64 *P; // [rsp+50h] [rbp-278h]
  PVOID Object; // [rsp+58h] [rbp-270h] BYREF
  PVOID v105; // [rsp+60h] [rbp-268h]
  __int64 v106; // [rsp+68h] [rbp-260h]
  PVOID v107; // [rsp+70h] [rbp-258h] BYREF
  OBJECT_ATTRIBUTES *__attribute__((__org_arrdim(0,0))) v108; // [rsp+78h] [rbp-250h]
  _KAFFINITY_EX v109; // [rsp+80h] [rbp-248h] BYREF

  v109.StaticBitmap[3] = (unsigned __int64)Event;
  v108 = SubordinateObjects;
  v14 = (int)MasterKeyHandle;
  v109.StaticBitmap[2] = (unsigned __int64)IoStatusBlock;
  *(_OWORD *)&v109.Count = 0LL;
  v15 = 0LL;
  v107 = 0LL;
  Object = 0LL;
  P = 0LL;
  v16 = 1;
  v102 = 1;
  memset_0(&v109.StaticBitmap[5], 0, 0x1D0uLL);
  v101 = 0;
  v106 = 0LL;
  LODWORD(v105) = 0;
  CmpInitializeThreadInfo(&v109);
  v99 = CmpAcquireShutdownRundown(v18, v17, v19, v20);
  if ( !v99 )
  {
    CmCleanupThreadInfo((_KAFFINITY_EX **)&v109);
    return -1073741431;
  }
  if ( Count > 1 )
  {
LABEL_146:
    CmpReleaseShutdownRundown(v21);
    CmCleanupThreadInfo((_KAFFINITY_EX **)&v109);
    return -1073741811;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v100 = PreviousMode;
  if ( PreviousMode )
  {
    if ( (CompletionFilter & 0x10000000) == 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v25 = 0;
      if ( Process[1].ReadyTime )
      {
        v57 = WORD2(Process[3].PerProcessorCycleTimes);
        if ( v57 == 332 || v57 == 452 )
          v25 = 1;
      }
      v101 = v25;
      v26 = IoStatusBlock;
      if ( ((unsigned __int8)IoStatusBlock & 3) == 0 )
      {
        v27 = (unsigned __int64)&IoStatusBlock->Pointer + 8 * !v25 + 7;
        if ( (unsigned __int64)IoStatusBlock > v27 )
          goto LABEL_22;
        v22 = -65536;
        if ( v27 >= 0x7FFFFFFF0000LL )
          goto LABEL_22;
        v28 = (v27 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          LOBYTE(v26->Status) = v26->Status;
          v26 = (PIO_STATUS_BLOCK)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFF000uLL) + 4096);
        }
        while ( v26 != (PIO_STATUS_BLOCK)v28 );
        v21 = BufferSize;
        if ( !BufferSize )
          goto LABEL_18;
        v29 = (unsigned __int64)Buffer;
        if ( ((unsigned __int8)Buffer & 3) == 0 )
        {
          v30 = (unsigned __int64)Buffer + BufferSize - 1;
          if ( v30 < 0x7FFFFFFF0000LL && (unsigned __int64)Buffer <= v30 )
          {
            v31 = (v30 & 0xFFFFFFFFFFFFF000uLL) + 4096;
            do
            {
              v21 = *(unsigned __int8 *)v29;
              *(_BYTE *)v29 = v21;
              v29 = (v29 & 0xFFFFFFFFFFFFF000uLL) + 4096;
            }
            while ( v29 != v31 );
LABEL_18:
            if ( v25 )
            {
              IoStatusBlock->Pointer = (PVOID)259;
            }
            else
            {
              IoStatusBlock->Status = 259;
              IoStatusBlock->Information = 0LL;
            }
            v32 = 2;
            PreviousMode = v100;
            if ( Asynchronous )
            {
              v16 = 2;
              v102 = 2;
            }
            goto LABEL_26;
          }
LABEL_22:
          ExRaiseAccessViolation();
        }
      }
      ExRaiseDatatypeMisalignment();
    }
    if ( !Asynchronous || ApcRoutine || !Event )
      goto LABEL_146;
    v16 = 4;
    v102 = 4;
    v32 = 2;
  }
  else
  {
    if ( Asynchronous )
    {
      v16 = 3;
      v102 = 3;
      if ( Count )
        goto LABEL_146;
    }
    v32 = 2;
  }
LABEL_26:
  if ( CompletionFilter != (CompletionFilter & 0x1000000F) )
    goto LABEL_146;
  v34 = CmObReferenceObjectByHandle(v14, 16, v22, PreviousMode, (__int64)&v107, 0LL);
  if ( v34 < 0 )
  {
    CmpReleaseShutdownRundown(v33);
    CmCleanupThreadInfo((_KAFFINITY_EX **)&v109);
    return v34;
  }
  v105 = 0LL;
  v109.StaticBitmap[1] = 0LL;
  if ( Count == 1 )
  {
    CmpInitializeParseContext((__int64)&v109.StaticBitmap[5]);
    v43 = CmObReferenceObjectByName(
            (_DWORD)v108,
            0,
            16,
            v71,
            PreviousMode,
            (__int64)&v109.StaticBitmap[5],
            (__int64)&v109.StaticBitmap[1]);
    CmpCleanupParseContext((__int64)&v109.StaticBitmap[5], 0);
    v35 = v107;
    if ( v43 < 0 )
      goto LABEL_67;
    v15 = (ULONG_PTR *)v109.StaticBitmap[1];
    v105 = (PVOID)v109.StaticBitmap[1];
    if ( *(_QWORD *)(*((_QWORD *)v107 + 1) + 32LL) == *(_QWORD *)(*(_QWORD *)(v109.StaticBitmap[1] + 8) + 32LL) )
    {
      ObfDereferenceObject((PVOID)v109.StaticBitmap[1]);
      v43 = -1073741811;
      goto LABEL_67;
    }
  }
  else
  {
    v35 = v107;
  }
  if ( !(unsigned int)Feature_NotifyQuotaCharge__private_IsEnabledDeviceUsageNoInline()
    || (v36 = 0, ((v16 - 2) & 0xFFFFFFFD) == 0) )
  {
    v36 = 1;
  }
  v37 = 256LL;
  Pool2 = ExAllocatePool2(v36 + 256LL);
  v40 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 56) = v102 | 0x10000;
    *(_QWORD *)(Pool2 + 48) = 0LL;
    if ( (unsigned int)(v102 - 3) > 1 )
      v37 = 64LL;
    v41 = v37 | 1;
    if ( !v36 )
      v41 = v37;
    v39 = (struct _KEVENT *)ExAllocatePool2(v41);
    *(_QWORD *)(v40 + 64) = v39;
    if ( v39 )
    {
      v42 = v102;
      if ( v102 == 1 )
      {
        KeInitializeEvent(v39, SynchronizationEvent, 0);
      }
      else if ( v102 == 3 )
      {
        *(_OWORD *)&v39->Header.Lock = 0LL;
        v39->Header.WaitListHead.Blink = 0LL;
      }
    }
    else
    {
      ExFreePoolWithTag((PVOID)v40, 0);
      v40 = 0LL;
      v42 = v102;
    }
  }
  else
  {
    v40 = 0LL;
    v42 = v102;
  }
  v108 = (OBJECT_ATTRIBUTES *)v40;
  if ( !v40 )
  {
    if ( Count == 1 )
      ObfDereferenceObject(v15);
    v43 = -1073741670;
    goto LABEL_67;
  }
  if ( Count == 1 )
  {
    P = (__int64 *)CmpAllocatePostBlock(v42, 0LL, v15, v40);
    if ( !P )
    {
      ObfDereferenceObject(v15);
      CmpFreePostBlock((PVOID)v40);
      v43 = -1073741670;
      goto LABEL_67;
    }
  }
  if ( v42 == 1 )
  {
    v44 = Object;
  }
  else
  {
    v39 = (struct _KEVENT *)v109.StaticBitmap[3];
    if ( v109.StaticBitmap[3] )
    {
      Object = 0LL;
      v43 = ObReferenceObjectByHandle(
              (HANDLE)v109.StaticBitmap[3],
              2u,
              (POBJECT_TYPE)ExEventObjectType,
              v100,
              &Object,
              0LL);
      if ( v43 < 0 )
      {
        if ( Count == 1 )
          CmpFreePostBlock(P);
        v56 = *(_QWORD *)(v40 + 48);
        if ( v56 )
        {
          ObDereferenceObjectDeferDelete(*(PVOID *)(v56 + 16));
          ExFreePoolWithTag(*(PVOID *)(v40 + 48), 0);
        }
        if ( (*(_DWORD *)(v40 + 56) & 0x10000) != 0 )
          ExFreePoolWithTag(*(PVOID *)(v40 + 64), 0);
        ExFreePoolWithTag((PVOID)v40, 0);
        goto LABEL_67;
      }
      v44 = Object;
      KeResetEvent((PRKEVENT)Object);
    }
    else
    {
      v44 = Object;
    }
    v45 = *(_QWORD **)(v40 + 64);
    if ( v42 == 2 )
    {
      v45[13] = v109.StaticBitmap[2];
      *(_QWORD *)(*(_QWORD *)(v40 + 64) + 8LL) = v44;
      v46 = v100;
      if ( !ApcRoutine )
        v46 = 0;
      CurrentThread = KeGetCurrentThread();
      v48 = AlpcMessageDeleteProcedure;
      if ( ApcRoutine )
        v48 = ApcRoutine;
      KeInitializeApc(
        *(_QWORD *)(v40 + 64) + 16LL,
        (__int64)CurrentThread,
        2,
        (__int64)CmpPostApc,
        (__int64)CmpPostApcRunDown,
        (__int64)v48,
        v46,
        (__int64)ApcContext);
      v35 = v107;
      v15 = (ULONG_PTR *)v109.StaticBitmap[1];
      v105 = (PVOID)v109.StaticBitmap[1];
    }
    else
    {
      *v45 = v44;
      if ( v42 != 4 )
      {
        *(_QWORD *)(*(_QWORD *)(v40 + 64) + 8LL) = ApcRoutine;
        v39 = *(struct _KEVENT **)(v40 + 64);
        LODWORD(v39->Header.WaitListHead.Blink) = (_DWORD)ApcContext;
      }
    }
  }
  CmpLockRegistry(v39);
  v49 = v35[1];
  if ( Count == 1 )
    CmpLockTwoKcbsShared(v49, v15[1]);
  else
    CmpLockKcbShared(v49);
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v35, 0LL) )
  {
LABEL_56:
    v50 = v35[1];
    if ( Count == 1 )
      CmpUnlockTwoKcbs(v50, v15[1]);
    else
      CmpUnlockKcb(v50);
    CmpUnlockRegistry(v51);
    if ( v44 )
      ObfDereferenceObject(v44);
    if ( Count == 1 )
      CmpFreePostBlock(P);
    v52 = *(_QWORD *)(v40 + 48);
    if ( v52 )
    {
      ObDereferenceObjectDeferDelete(*(PVOID *)(v52 + 16));
      ExFreePoolWithTag(*(PVOID *)(v40 + 48), 0);
    }
    if ( (*(_DWORD *)(v40 + 56) & 0x10000) != 0 )
      ExFreePoolWithTag(*(PVOID *)(v40 + 64), 0);
    ExFreePoolWithTag((PVOID)v40, 0);
    v43 = -1073741444;
    goto LABEL_67;
  }
  if ( Count != 1 )
    goto LABEL_90;
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v15, 0LL) )
    goto LABEL_56;
  v72 = *(_QWORD *)(v35[1] + 32LL);
  v73 = v15[1];
  v74 = *(_QWORD *)(v73 + 32);
  if ( v72 == v74 )
  {
LABEL_90:
    CmLockHive(*(_QWORD *)(v35[1] + 32LL));
    v32 = 1;
  }
  else
  {
    if ( v72 >= v74 )
    {
      CmLockHive(*(_QWORD *)(v73 + 32));
      CmLockHive(*(_QWORD *)(v35[1] + 32LL));
      v32 = 3;
    }
    else
    {
      CmLockHive(v72);
      CmLockHive(*(_QWORD *)(v15[1] + 32));
    }
    v106 = *(_QWORD *)(v15[1] + 32);
  }
  ExAcquireFastMutexUnsafe(&CmpPostLock);
  v43 = CmpNotifyChangeKey(v35, v40, CompletionFilter, WatchTree);
  if ( v43 < 0 )
  {
    ExReleaseFastMutexUnsafe(&CmpPostLock);
    if ( v32 == 1 )
    {
      v85 = *(_QWORD *)(v35[1] + 32LL);
    }
    else if ( v32 == 2 )
    {
      CmUnlockHive(v106);
      v85 = *(_QWORD *)(v35[1] + 32LL);
    }
    else
    {
      CmUnlockHive(*(_QWORD *)(v35[1] + 32LL));
      v85 = v106;
    }
    CmUnlockHive(v85);
    v91 = v35[1];
    if ( Count == 1 )
      CmpUnlockTwoKcbs(v91, v15[1]);
    else
      CmpUnlockKcb(v91);
    CmpUnlockRegistry(v92);
    if ( Object )
      ObfDereferenceObject(Object);
    if ( Count == 1 )
      CmpFreePostBlock(P);
    goto LABEL_67;
  }
  v58 = Count == 1;
  if ( Count != 1 )
    goto LABEL_93;
  PsReferenceSiloContext(v105);
  if ( !v43 )
  {
    CmpFreePostBlock(P);
    v58 = 0;
LABEL_93:
    v59 = (ULONG_PTR *)v105;
    goto LABEL_94;
  }
  v59 = (ULONG_PTR *)v105;
  v43 = CmpNotifyChangeKey(v105, P, CompletionFilter, WatchTree);
  if ( v43 < 0 )
  {
    v75 = *(_QWORD *)v40;
    v76 = *(_QWORD **)(v40 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v40 + 8LL) != v40 || *v76 != v40 )
      goto LABEL_112;
    *v76 = v75;
    *(_QWORD *)(v75 + 8) = v76;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
    v93 = *(_QWORD *)(v40 + 16);
    v94 = *(_QWORD **)(v40 + 24);
    if ( *(_QWORD *)(v93 + 8) != v40 + 16 || *v94 != v40 + 16 )
      goto LABEL_112;
    *v94 = v93;
    *(_QWORD *)(v93 + 8) = v94;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    goto LABEL_93;
  }
LABEL_94:
  ExReleaseFastMutexUnsafe(&CmpPostLock);
  if ( v32 == 1 )
  {
    v60 = *(_QWORD *)(v35[1] + 32LL);
  }
  else if ( v32 == 2 )
  {
    CmUnlockHive(v106);
    v60 = *(_QWORD *)(v35[1] + 32LL);
  }
  else
  {
    CmUnlockHive(*(_QWORD *)(v35[1] + 32LL));
    v60 = v106;
  }
  CmUnlockHive(v60);
  v61 = v35[1];
  if ( Count == 1 )
    CmpUnlockTwoKcbs(v61, v59[1]);
  else
    CmpUnlockKcb(v61);
  CmpUnlockRegistry(v62);
  if ( v59 )
    ObfDereferenceObject(v59);
  if ( v43 < 0 )
  {
    CmpFreePostBlock((PVOID)v40);
    if ( Object )
      ObfDereferenceObject(Object);
    goto LABEL_67;
  }
  if ( v102 == 1 )
  {
    CmpReleaseShutdownRundown(v63);
    v53 = 0;
    v64 = KeWaitForSingleObject(*(PVOID *)(v40 + 64), Executive, v100, 1u, 0LL);
    v43 = v64;
    if ( v64 == 257 || v64 == 192 )
    {
      CmpLockRegistry(v65);
      ExAcquireFastMutexUnsafe(&CmpPostLock);
      v66 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v66, 1);
      if ( v58 )
      {
        v89 = *P;
        if ( *P )
        {
          v90 = (__int64 **)P[1];
          if ( *(__int64 **)(v89 + 8) != P || *v90 != P )
            goto LABEL_112;
          *v90 = (__int64 *)v89;
          *(_QWORD *)(v89 + 8) = v90;
        }
        v97 = P[2];
        v98 = (__int64 **)P[3];
        if ( *(__int64 **)(v97 + 8) != P + 2 || *v98 != P + 2 )
          goto LABEL_112;
        *v98 = (__int64 *)v97;
        *(_QWORD *)(v97 + 8) = v98;
      }
      v67 = *(_QWORD *)v40;
      if ( *(_QWORD *)v40 )
      {
        v68 = *(_QWORD **)(v40 + 8);
        if ( *(_QWORD *)(v67 + 8) != v40 || *v68 != v40 )
          goto LABEL_112;
        *v68 = v67;
        *(_QWORD *)(v67 + 8) = v68;
      }
      v69 = *(_QWORD *)(v40 + 16);
      v70 = *(_QWORD **)(v40 + 24);
      if ( *(_QWORD *)(v69 + 8) == v40 + 16 && *v70 == v40 + 16 )
      {
        *v70 = v69;
        *(_QWORD *)(v69 + 8) = v70;
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v66);
        __writecr8(v66);
        ExReleaseFastMutexUnsafe(&CmpPostLock);
        CmpUnlockRegistry(v84);
        if ( v58 )
          CmpFreePostBlock(P);
        goto LABEL_164;
      }
    }
    else
    {
      CmpLockRegistry(v65);
      ExAcquireFastMutexUnsafe(&CmpPostLock);
      v78 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v78, 1);
      if ( v58 )
      {
        v86 = *P;
        if ( *P )
        {
          v87 = (__int64 **)P[1];
          if ( *(__int64 **)(v86 + 8) != P || *v87 != P )
            goto LABEL_112;
          *v87 = (__int64 *)v86;
          *(_QWORD *)(v86 + 8) = v87;
        }
        v95 = P[2];
        v96 = (__int64 **)P[3];
        if ( *(__int64 **)(v95 + 8) != P + 2 || *v96 != P + 2 )
          goto LABEL_112;
        *v96 = (__int64 *)v95;
        *(_QWORD *)(v95 + 8) = v96;
      }
      v79 = *(_QWORD *)v40;
      if ( *(_QWORD *)v40 )
      {
        v88 = *(_QWORD **)(v40 + 8);
        if ( *(_QWORD *)(v79 + 8) != v40 || *v88 != v40 )
          goto LABEL_112;
        *v88 = v79;
        *(_QWORD *)(v79 + 8) = v88;
      }
      v80 = *(_QWORD *)(v40 + 16);
      v81 = *(_QWORD **)(v40 + 24);
      if ( *(_QWORD *)(v80 + 8) == v40 + 16 && *v81 == v40 + 16 )
      {
        *v81 = v80;
        *(_QWORD *)(v80 + 8) = v81;
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v78);
        __writecr8(v78);
        ExReleaseFastMutexUnsafe(&CmpPostLock);
        CmpUnlockRegistry(v82);
        v43 = *(_DWORD *)(*(_QWORD *)(v40 + 64) + 24LL);
        v83 = v109.StaticBitmap[2];
        *(_DWORD *)v109.StaticBitmap[2] = v43;
        if ( v101 )
          *(_DWORD *)(v83 + 4) = 0;
        else
          *(_QWORD *)(v83 + 8) = 0LL;
        if ( v58 )
          CmpFreePostBlock(P);
LABEL_164:
        CmpFreePostBlock((PVOID)v40);
        goto LABEL_68;
      }
    }
LABEL_112:
    __fastfail(3u);
  }
LABEL_67:
  v53 = v99;
LABEL_68:
  ObfDereferenceObject(v35);
  if ( v53 )
    CmpReleaseShutdownRundown(v54);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v109);
  return v43;
}
