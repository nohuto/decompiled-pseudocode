/*
 * XREFs of NtNotifyChangeMultipleKeys @ 0x1408BF750
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406F6C60 (ExpWatchProductTypeWork.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140796400 (SepAdtOpenRegAndSetupNotification.c)
 *     SepAdtRegNotificationCallback @ 0x1407964A0 (SepAdtRegNotificationCallback.c)
 *     ExpWatchLicenseInfoWork @ 0x1407B73B0 (ExpWatchLicenseInfoWork.c)
 *     WheaInitializeRegChangeNotify @ 0x1407C89CC (WheaInitializeRegChangeNotify.c)
 *     WheaRegChangeNotifyCallback @ 0x1407C8A60 (WheaRegChangeNotifyCallback.c)
 *     NtNotifyChangeKey @ 0x1408BF6E0 (NtNotifyChangeKey.c)
 * Callees:
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     ObDereferenceObjectDeferDelete @ 0x1403C5CE0 (ObDereferenceObjectDeferDelete.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     KeInitializeApc @ 0x140422520 (KeInitializeApc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CmLockHive @ 0x140845C74 (CmLockHive.c)
 *     CmUnlockHive @ 0x140846740 (CmUnlockHive.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     CmpFreePostBlock @ 0x14086A740 (CmpFreePostBlock.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408C10E0 (ExRaiseAccessViolation.c)
 *     CmpInitializeParseContext @ 0x14092D400 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14092D4B0 (CmpCleanupParseContext.c)
 *     CmpLockTwoKcbsShared @ 0x1409F45F0 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x1409F67C4 (CmpUnlockTwoKcbs.c)
 *     CmpAllocatePostBlock @ 0x140AE38FC (CmpAllocatePostBlock.c)
 *     CmpNotifyChangeKey @ 0x140AE4A64 (CmpNotifyChangeKey.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BB92C0 (CmpUnlockKcb.c)
 *     CmObReferenceObjectByHandle @ 0x140BB9350 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BB9400 (CmpAcquireShutdownRundown.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BB9480 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpReleaseShutdownRundown @ 0x140BB9880 (CmpReleaseShutdownRundown.c)
 *     CmpLockKcbShared @ 0x140BB9A1C (CmpLockKcbShared.c)
 *     CmObReferenceObjectByName @ 0x140BB9CF8 (CmObReferenceObjectByName.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

__int64 NtNotifyChangeMultipleKeys(
        int a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        void (__stdcall *a5)(POPLOCK Oplock),
        __int64 a6,
        unsigned __int64 a7,
        unsigned int a8,
        unsigned __int8 a9,
        unsigned __int64 a10,
        unsigned int a11,
        char a12,
        ...)
{
  PVOID v15; // rsi
  unsigned __int8 v16; // bl
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  unsigned __int8 PreviousMode; // di
  unsigned int v23; // r8d
  _KPROCESS *Process; // rcx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  int v31; // r15d
  __int64 v32; // rcx
  int v33; // ebx
  _QWORD *v34; // r13
  _QWORD *v35; // rdi
  __int64 PostBlock; // rax
  __int64 v37; // rbx
  __int64 v38; // rcx
  NTSTATUS v39; // esi
  _QWORD *v40; // rax
  unsigned __int8 v41; // r9
  struct _KTHREAD *CurrentThread; // rdx
  void (__stdcall *v43)(POPLOCK); // r8
  __int64 v44; // rcx
  ULONG_PTR v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  char v48; // r13
  __int64 v49; // rcx
  __int64 v51; // rcx
  __int16 v52; // ax
  __int64 v53; // rcx
  ULONG_PTR v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  NTSTATUS v57; // eax
  __int64 v58; // rcx
  unsigned __int8 v59; // r15
  __int64 v60; // rax
  _QWORD *v61; // rcx
  __int64 v62; // rdx
  _QWORD *v63; // rcx
  int v64; // r9d
  unsigned __int64 v65; // rcx
  __int64 v66; // rax
  unsigned __int64 v67; // rdx
  unsigned __int8 v68; // si
  __int64 v69; // rax
  __int64 v70; // rdx
  _QWORD *v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 **v76; // rcx
  _QWORD *v77; // rcx
  __int64 v78; // rax
  __int64 **v79; // rcx
  ULONG_PTR v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rcx
  _QWORD *v83; // rax
  void *CurrentIrql; // r8
  __int64 v85; // rdx
  _QWORD *v86; // rcx
  __int64 v87; // rdx
  __int64 **v88; // rcx
  __int64 v89; // rdx
  __int64 **v90; // rcx
  char v91; // [rsp+40h] [rbp-278h]
  bool v92; // [rsp+41h] [rbp-277h]
  KPROCESSOR_MODE v93; // [rsp+43h] [rbp-275h]
  unsigned __int8 v94; // [rsp+44h] [rbp-274h]
  unsigned int v95; // [rsp+48h] [rbp-270h]
  __int64 *P; // [rsp+50h] [rbp-268h]
  PVOID Object; // [rsp+58h] [rbp-260h] BYREF
  PVOID v98; // [rsp+60h] [rbp-258h] BYREF
  __int64 v99; // [rsp+68h] [rbp-250h]
  PVOID v100; // [rsp+70h] [rbp-248h] BYREF
  __int64 v101; // [rsp+78h] [rbp-240h]
  _KAFFINITY_EX v102; // [rsp+80h] [rbp-238h] BYREF

  v102.StaticBitmap[2] = a4;
  v101 = a3;
  memset(&v102, 0, 24);
  v100 = 0LL;
  v15 = 0LL;
  Object = 0LL;
  P = 0LL;
  v95 = 1;
  memset_0(&v102.StaticBitmap[3], 0, 0x1D0uLL);
  v16 = 0;
  v94 = 0;
  v99 = 0LL;
  LODWORD(v98) = 0;
  CmpInitializeThreadInfo(&v102);
  v91 = CmpAcquireShutdownRundown(v18, v17, v19, v20);
  if ( !v91 )
  {
    CmpCleanupThreadInfo((_KAFFINITY_EX **)&v102);
    return 3221225865LL;
  }
  if ( a2 > 1 )
  {
LABEL_125:
    CmpReleaseShutdownRundown(v21);
    CmpCleanupThreadInfo((_KAFFINITY_EX **)&v102);
    return 3221225485LL;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v93 = PreviousMode;
  if ( PreviousMode )
  {
    v23 = a8;
    if ( (a8 & 0x10000000) == 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[1].ReadyTime )
      {
        v52 = WORD2(Process[3].PerProcessorCycleTimes);
        if ( v52 == 332 || v52 == 452 )
          v16 = 1;
      }
      v94 = v16;
      v25 = a7;
      if ( (a7 & 3) == 0 )
      {
        v26 = a7 + 7 + 8 * (v16 ^ 1LL);
        if ( a7 > v26 || v26 >= 0x7FFFFFFF0000LL )
          goto LABEL_20;
        v27 = (v26 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)v25 = *(_BYTE *)v25;
          v25 = (v25 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v25 != v27 );
        if ( !a11 )
          goto LABEL_17;
        v28 = a10;
        if ( (a10 & 3) == 0 )
        {
          v29 = a11 + a10 - 1;
          if ( a10 <= v29 && v29 < 0x7FFFFFFF0000LL )
          {
            v30 = (v29 & 0xFFFFFFFFFFFFF000uLL) + 4096;
            do
            {
              *(_BYTE *)v28 = *(_BYTE *)v28;
              v28 = (v28 & 0xFFFFFFFFFFFFF000uLL) + 4096;
            }
            while ( v28 != v30 );
LABEL_17:
            v21 = 0LL;
            if ( v16 )
            {
              *(_QWORD *)a7 = 259LL;
            }
            else
            {
              *(_DWORD *)a7 = 259;
              *(_QWORD *)(a7 + 8) = 0LL;
            }
            v31 = 2;
            if ( a12 )
              v95 = 2;
            goto LABEL_25;
          }
LABEL_20:
          ExRaiseAccessViolation();
        }
      }
      ExRaiseDatatypeMisalignment();
    }
    if ( !a12 || a5 || !a4 )
      goto LABEL_125;
    v95 = 4;
    v31 = 2;
    v21 = 0LL;
  }
  else
  {
    if ( a12 )
    {
      v95 = 3;
      if ( a2 )
        goto LABEL_125;
    }
    v23 = a8;
    v31 = 2;
    v21 = 0LL;
  }
LABEL_25:
  if ( v23 != (v23 & 0x1000000F) )
    goto LABEL_125;
  v33 = CmObReferenceObjectByHandle(a1, 16, v23, PreviousMode, (__int64)&v100, 0LL);
  if ( v33 < 0 )
  {
    CmpReleaseShutdownRundown(v32);
    CmpCleanupThreadInfo((_KAFFINITY_EX **)&v102);
    return (unsigned int)v33;
  }
  v34 = 0LL;
  v98 = 0LL;
  if ( a2 == 1 )
  {
    CmpInitializeParseContext(&v102.StaticBitmap[3]);
    v39 = CmObReferenceObjectByName(v101, 0, 16, v64, PreviousMode, (__int64)&v102.StaticBitmap[3], (__int64)&v98);
    CmpCleanupParseContext(&v102.StaticBitmap[3], 0LL);
    v35 = v100;
    if ( v39 < 0 )
      goto LABEL_55;
    v34 = v98;
    if ( *(_QWORD *)(*((_QWORD *)v100 + 1) + 32LL) == *(_QWORD *)(*((_QWORD *)v98 + 1) + 32LL) )
    {
      ObfDereferenceObject(v98);
      v39 = -1073741811;
      goto LABEL_55;
    }
    v15 = Object;
  }
  else
  {
    v35 = v100;
  }
  PostBlock = CmpAllocatePostBlock(v95, 0x10000LL, 0LL, 0LL);
  v37 = PostBlock;
  v101 = PostBlock;
  if ( !PostBlock )
  {
    if ( a2 == 1 )
      ObfDereferenceObject(v34);
    v39 = -1073741670;
    goto LABEL_55;
  }
  if ( a2 == 1 )
  {
    P = (__int64 *)CmpAllocatePostBlock(v95, 0LL, v34, PostBlock);
    if ( !P )
    {
      ObfDereferenceObject(v34);
      CmpFreePostBlock((PVOID)v37);
      v39 = -1073741670;
      goto LABEL_55;
    }
  }
  v38 = v95;
  if ( v95 != 1 )
  {
    if ( v102.StaticBitmap[2] )
    {
      Object = 0LL;
      v39 = ObReferenceObjectByHandle(
              (HANDLE)v102.StaticBitmap[2],
              2u,
              (POBJECT_TYPE)ExEventObjectType,
              v93,
              &Object,
              0LL);
      if ( v39 < 0 )
      {
        if ( a2 == 1 )
          CmpFreePostBlock(P);
        v51 = *(_QWORD *)(v37 + 48);
        if ( v51 )
        {
          ObDereferenceObjectDeferDelete(*(PVOID *)(v51 + 16));
          ExFreePoolWithTag(*(PVOID *)(v37 + 48), 0);
        }
        if ( (*(_DWORD *)(v37 + 56) & 0x10000) != 0 )
          ExFreePoolWithTag(*(PVOID *)(v37 + 64), 0);
        ExFreePoolWithTag((PVOID)v37, 0);
        goto LABEL_55;
      }
      v15 = Object;
      KeResetEvent((PRKEVENT)Object);
      v38 = v95;
    }
    v40 = *(_QWORD **)(v37 + 64);
    if ( (_DWORD)v38 == 2 )
    {
      v40[13] = a7;
      *(_QWORD *)(*(_QWORD *)(v37 + 64) + 8LL) = v15;
      v41 = v93;
      if ( !a5 )
        v41 = 0;
      CurrentThread = KeGetCurrentThread();
      v43 = AlpcMessageDeleteProcedure;
      if ( a5 )
        v43 = a5;
      KeInitializeApc(
        *(_QWORD *)(v37 + 64) + 16LL,
        (__int64)CurrentThread,
        2,
        (__int64)CmpPostApc,
        (__int64)CmpPostApcRunDown,
        (__int64)v43,
        v41,
        a6);
      v35 = v100;
      v34 = v98;
    }
    else
    {
      *v40 = v15;
      if ( (_DWORD)v38 != 4 )
      {
        *(_QWORD *)(*(_QWORD *)(v37 + 64) + 8LL) = a5;
        v38 = *(_QWORD *)(v37 + 64);
        *(_DWORD *)(v38 + 16) = a6;
      }
    }
  }
  CmpLockRegistry(v38);
  v44 = v35[1];
  if ( a2 == 1 )
    CmpLockTwoKcbsShared(v44, v34[1]);
  else
    CmpLockKcbShared(v44);
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v35, 0LL) )
  {
LABEL_44:
    v45 = v35[1];
    if ( a2 == 1 )
      CmpUnlockTwoKcbs(v45, v34[1]);
    else
      CmpUnlockKcb(v45);
    CmpUnlockRegistry(v46);
    if ( v15 )
      ObfDereferenceObject(v15);
    if ( a2 == 1 )
      CmpFreePostBlock(P);
    v47 = *(_QWORD *)(v37 + 48);
    if ( v47 )
    {
      ObDereferenceObjectDeferDelete(*(PVOID *)(v47 + 16));
      ExFreePoolWithTag(*(PVOID *)(v37 + 48), 0);
    }
    if ( (*(_DWORD *)(v37 + 56) & 0x10000) != 0 )
      ExFreePoolWithTag(*(PVOID *)(v37 + 64), 0);
    ExFreePoolWithTag((PVOID)v37, 0);
    v39 = -1073741444;
    goto LABEL_55;
  }
  if ( a2 != 1 )
    goto LABEL_74;
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v34, 0LL) )
    goto LABEL_44;
  v65 = *(_QWORD *)(v35[1] + 32LL);
  v66 = v34[1];
  v67 = *(_QWORD *)(v66 + 32);
  if ( v65 == v67 )
  {
LABEL_74:
    CmLockHive(*(_QWORD *)(v35[1] + 32LL));
    v31 = 1;
  }
  else
  {
    if ( v65 >= v67 )
    {
      CmLockHive(*(_QWORD *)(v66 + 32));
      CmLockHive(*(_QWORD *)(v35[1] + 32LL));
      v31 = 3;
    }
    else
    {
      CmLockHive(v65);
      CmLockHive(*(_QWORD *)(v34[1] + 32LL));
    }
    v99 = *(_QWORD *)(v34[1] + 32LL);
  }
  ExAcquireFastMutexUnsafe(&CmpPostLock);
  v39 = CmpNotifyChangeKey(v35, v37, a8, a9);
  if ( v39 < 0 )
  {
    ExReleaseFastMutexUnsafe(&CmpPostLock);
    if ( v31 == 1 )
    {
      v74 = *(_QWORD *)(v35[1] + 32LL);
    }
    else if ( v31 == 2 )
    {
      CmUnlockHive(v99);
      v74 = *(_QWORD *)(v35[1] + 32LL);
    }
    else
    {
      CmUnlockHive(*(_QWORD *)(v35[1] + 32LL));
      v74 = v99;
    }
    CmUnlockHive(v74);
    v80 = v35[1];
    if ( a2 == 1 )
      CmpUnlockTwoKcbs(v80, v34[1]);
    else
      CmpUnlockKcb(v80);
    CmpUnlockRegistry(v81);
    if ( Object )
      ObfDereferenceObject(Object);
    if ( a2 == 1 )
      CmpFreePostBlock(P);
    goto LABEL_55;
  }
  v92 = a2 == 1;
  if ( a2 == 1 )
  {
    PsReferenceSiloContext(v34);
    if ( v39 )
    {
      v39 = CmpNotifyChangeKey(v34, P, a8, a9);
      v92 = a2 == 1;
      if ( v39 < 0 )
      {
        v82 = *(_QWORD *)v37;
        v83 = *(_QWORD **)(v37 + 8);
        if ( *(_QWORD *)(*(_QWORD *)v37 + 8LL) != v37 || *v83 != v37 )
          goto LABEL_95;
        *v83 = v82;
        *(_QWORD *)(v82 + 8) = v83;
        CurrentIrql = (void *)KeGetCurrentIrql();
        v98 = CurrentIrql;
        __writecr8(1uLL);
        if ( KiIrqlFlags )
        {
          KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, 1);
          LOBYTE(CurrentIrql) = (_BYTE)v98;
        }
        v85 = *(_QWORD *)(v37 + 16);
        v86 = *(_QWORD **)(v37 + 24);
        if ( *(_QWORD *)(v85 + 8) != v37 + 16 || *v86 != v37 + 16 )
          goto LABEL_95;
        *v86 = v85;
        *(_QWORD *)(v85 + 8) = v86;
        if ( KiIrqlFlags )
        {
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)CurrentIrql);
          LOBYTE(CurrentIrql) = (_BYTE)v98;
        }
        __writecr8((unsigned __int8)CurrentIrql);
        v92 = a2 == 1;
      }
    }
    else
    {
      CmpFreePostBlock(P);
      v92 = 0;
    }
  }
  ExReleaseFastMutexUnsafe(&CmpPostLock);
  if ( v31 == 1 )
  {
    v53 = *(_QWORD *)(v35[1] + 32LL);
  }
  else if ( v31 == 2 )
  {
    CmUnlockHive(v99);
    v53 = *(_QWORD *)(v35[1] + 32LL);
  }
  else
  {
    CmUnlockHive(*(_QWORD *)(v35[1] + 32LL));
    v53 = v99;
  }
  CmUnlockHive(v53);
  v54 = v35[1];
  if ( a2 == 1 )
    CmpUnlockTwoKcbs(v54, v34[1]);
  else
    CmpUnlockKcb(v54);
  CmpUnlockRegistry(v55);
  if ( v34 )
    ObfDereferenceObject(v34);
  if ( v39 < 0 )
  {
    CmpFreePostBlock((PVOID)v37);
    if ( Object )
      ObfDereferenceObject(Object);
    goto LABEL_55;
  }
  if ( v95 == 1 )
  {
    CmpReleaseShutdownRundown(v56);
    v48 = 0;
    v57 = KeWaitForSingleObject(*(PVOID *)(v37 + 64), Executive, v93, 1u, 0LL);
    v39 = v57;
    if ( v57 == 257 || v57 == 192 )
    {
      CmpLockRegistry(v58);
      ExAcquireFastMutexUnsafe(&CmpPostLock);
      v59 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v59, 1);
      if ( v92 )
      {
        v78 = *P;
        if ( *P )
        {
          v79 = (__int64 **)P[1];
          if ( *(__int64 **)(v78 + 8) != P || *v79 != P )
            goto LABEL_95;
          *v79 = (__int64 *)v78;
          *(_QWORD *)(v78 + 8) = v79;
        }
        v89 = P[2];
        v90 = (__int64 **)P[3];
        if ( *(__int64 **)(v89 + 8) != P + 2 || *v90 != P + 2 )
          goto LABEL_95;
        *v90 = (__int64 *)v89;
        *(_QWORD *)(v89 + 8) = v90;
      }
      v60 = *(_QWORD *)v37;
      if ( *(_QWORD *)v37 )
      {
        v61 = *(_QWORD **)(v37 + 8);
        if ( *(_QWORD *)(v60 + 8) != v37 || *v61 != v37 )
          goto LABEL_95;
        *v61 = v60;
        *(_QWORD *)(v60 + 8) = v61;
      }
      v62 = *(_QWORD *)(v37 + 16);
      v63 = *(_QWORD **)(v37 + 24);
      if ( *(_QWORD *)(v62 + 8) == v37 + 16 && *v63 == v37 + 16 )
      {
        *v63 = v62;
        *(_QWORD *)(v62 + 8) = v63;
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v59);
        __writecr8(v59);
        ExReleaseFastMutexUnsafe(&CmpPostLock);
        CmpUnlockRegistry(v73);
        if ( v92 )
          CmpFreePostBlock(P);
        goto LABEL_143;
      }
    }
    else
    {
      CmpLockRegistry(v58);
      ExAcquireFastMutexUnsafe(&CmpPostLock);
      v68 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v68, 1);
      if ( v92 )
      {
        v75 = *P;
        if ( *P )
        {
          v76 = (__int64 **)P[1];
          if ( *(__int64 **)(v75 + 8) != P || *v76 != P )
            goto LABEL_95;
          *v76 = (__int64 *)v75;
          *(_QWORD *)(v75 + 8) = v76;
        }
        v87 = P[2];
        v88 = (__int64 **)P[3];
        if ( *(__int64 **)(v87 + 8) != P + 2 || *v88 != P + 2 )
          goto LABEL_95;
        *v88 = (__int64 *)v87;
        *(_QWORD *)(v87 + 8) = v88;
      }
      v69 = *(_QWORD *)v37;
      if ( *(_QWORD *)v37 )
      {
        v77 = *(_QWORD **)(v37 + 8);
        if ( *(_QWORD *)(v69 + 8) != v37 || *v77 != v37 )
          goto LABEL_95;
        *v77 = v69;
        *(_QWORD *)(v69 + 8) = v77;
      }
      v70 = *(_QWORD *)(v37 + 16);
      v71 = *(_QWORD **)(v37 + 24);
      if ( *(_QWORD *)(v70 + 8) == v37 + 16 && *v71 == v37 + 16 )
      {
        *v71 = v70;
        *(_QWORD *)(v70 + 8) = v71;
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v68);
        __writecr8(v68);
        ExReleaseFastMutexUnsafe(&CmpPostLock);
        CmpUnlockRegistry(v72);
        v39 = *(_DWORD *)(*(_QWORD *)(v37 + 64) + 24LL);
        *(_DWORD *)a7 = v39;
        if ( v94 )
          *(_DWORD *)(a7 + 4) = 0;
        else
          *(_QWORD *)(a7 + 8) = 0LL;
        if ( v92 )
          CmpFreePostBlock(P);
LABEL_143:
        CmpFreePostBlock((PVOID)v37);
        goto LABEL_56;
      }
    }
LABEL_95:
    __fastfail(3u);
  }
LABEL_55:
  v48 = v91;
LABEL_56:
  ObfDereferenceObject(v35);
  if ( v48 )
    CmpReleaseShutdownRundown(v49);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v102);
  return (unsigned int)v39;
}
