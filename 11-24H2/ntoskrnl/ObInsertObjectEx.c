/*
 * XREFs of ObInsertObjectEx @ 0x140857620
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x1406FCCC0 (HalpDmaAllocateChildAdapterV3.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140700A80 (HalpDmaAllocateChildAdapterV2.c)
 *     IoCreateController @ 0x140713DC0 (IoCreateController.c)
 *     NtCreateIoRing @ 0x140717160 (NtCreateIoRing.c)
 *     PopEtEnergyTrackerCreate @ 0x14075DC60 (PopEtEnergyTrackerCreate.c)
 *     TtmpDispatchCreateEventQueue @ 0x14076B4B8 (TtmpDispatchCreateEventQueue.c)
 *     TtmiCreateTerminal @ 0x14076F4E8 (TtmiCreateTerminal.c)
 *     NtCreateProcessStateChange @ 0x140775A70 (NtCreateProcessStateChange.c)
 *     PsCreateCpuPartition @ 0x14077643C (PsCreateCpuPartition.c)
 *     PspAllocatePartition @ 0x14077ABFC (PspAllocatePartition.c)
 *     PspSessionObjectCreate @ 0x14077BDCC (PspSessionObjectCreate.c)
 *     SepInitializationPhase1 @ 0x14078EEE0 (SepInitializationPhase1.c)
 *     SeFilterToken @ 0x14078F660 (SeFilterToken.c)
 *     EtwpRegisterPrivateSession @ 0x1407AD42C (EtwpRegisterPrivateSession.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1407B3064 (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x1407C3C30 (ExpProfileCreate.c)
 *     NtCreateKeyedEvent @ 0x1407C51C0 (NtCreateKeyedEvent.c)
 *     EtwpRegisterUMProvider @ 0x14083C6F0 (EtwpRegisterUMProvider.c)
 *     NtCreateSemaphore @ 0x14083DDC0 (NtCreateSemaphore.c)
 *     NtCreateMutant @ 0x14083E8C0 (NtCreateMutant.c)
 *     NtOpenThreadTokenEx @ 0x1408553C0 (NtOpenThreadTokenEx.c)
 *     ObInsertObject @ 0x140856F80 (ObInsertObject.c)
 *     NtCreateEvent @ 0x140856FC0 (NtCreateEvent.c)
 *     AlpcpCreateConnectionPort @ 0x14086210C (AlpcpCreateConnectionPort.c)
 *     AlpcpCreateClientPort @ 0x1408649C0 (AlpcpCreateClientPort.c)
 *     SepCreateClientSecurityEx @ 0x140897AC0 (SepCreateClientSecurityEx.c)
 *     PspInsertThread @ 0x1408A59BC (PspInsertThread.c)
 *     PspInsertProcess @ 0x1408A7074 (PspInsertProcess.c)
 *     NtCreateJobObject @ 0x1408EAB60 (NtCreateJobObject.c)
 *     NtDuplicateToken @ 0x14090F090 (NtDuplicateToken.c)
 *     SeCopyClientToken @ 0x14090FF48 (SeCopyClientToken.c)
 *     PsImpersonateClient @ 0x1409102D0 (PsImpersonateClient.c)
 *     NtFilterToken @ 0x140935F90 (NtFilterToken.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x140946D5C (PspSchedulerSharedDataRegionCreate.c)
 *     MiCreateSectionCommon @ 0x14096B594 (MiCreateSectionCommon.c)
 *     IoCreateDevice @ 0x1409A3530 (IoCreateDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1409A4390 (IoCreateStreamFileObjectEx2.c)
 *     NtCreateWorkerFactory @ 0x1409A6CF0 (NtCreateWorkerFactory.c)
 *     IopLoadDriver @ 0x1409C90C0 (IopLoadDriver.c)
 *     WmipCreateGuidObject @ 0x1409CBCD8 (WmipCreateGuidObject.c)
 *     AlpcpAcceptConnectPort @ 0x1409F4F00 (AlpcpAcceptConnectPort.c)
 *     NtCreateTimer @ 0x1409F7110 (NtCreateTimer.c)
 *     NtCreatePrivateNamespace @ 0x140A09670 (NtCreatePrivateNamespace.c)
 *     NtCreateTimer2 @ 0x140A20AE0 (NtCreateTimer2.c)
 *     NtCreateIoCompletion @ 0x140A22900 (NtCreateIoCompletion.c)
 *     ObCreateSymbolicLink @ 0x140A29CE8 (ObCreateSymbolicLink.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140A2F9D0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SeSubProcessToken @ 0x140A30C24 (SeSubProcessToken.c)
 *     ObpCreateDirectoryObject @ 0x140A45710 (ObpCreateDirectoryObject.c)
 *     NtCreateRegistryTransaction @ 0x140A4C5C0 (NtCreateRegistryTransaction.c)
 *     NtAllocateReserveObject @ 0x140A51690 (NtAllocateReserveObject.c)
 *     SeGetLogonSessionToken @ 0x140A56F40 (SeGetLogonSessionToken.c)
 *     EtwpRealtimeConnect @ 0x140A5EC30 (EtwpRealtimeConnect.c)
 *     NtCreateThreadStateChange @ 0x140A5FDF0 (NtCreateThreadStateChange.c)
 *     ExCreateCallback @ 0x140A64310 (ExCreateCallback.c)
 *     EtwpCreateUmReplyObject @ 0x140A762A0 (EtwpCreateUmReplyObject.c)
 *     PspCreateActivityReference @ 0x140A77250 (PspCreateActivityReference.c)
 *     NtCreateDebugObject @ 0x140AA9F00 (NtCreateDebugObject.c)
 *     IoCreateDriver @ 0x140AB1C90 (IoCreateDriver.c)
 *     NtCreateWaitCompletionPacket @ 0x140AC3670 (NtCreateWaitCompletionPacket.c)
 *     NtQueryInformationToken @ 0x140AD3370 (NtQueryInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD8020 (NtCreateLowBoxToken.c)
 *     MmCreateSpecialImageSection @ 0x140AE6B20 (MmCreateSpecialImageSection.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1403EBC80 (SepCreateAccessStateFromSubjectContext.c)
 *     SepDeleteAccessState @ 0x140401610 (SepDeleteAccessState.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140428F20 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SeAssignSecurityEx2 @ 0x1404325B0 (SeAssignSecurityEx2.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SeDeleteAccessState @ 0x140840F80 (SeDeleteAccessState.c)
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     SeDefaultObjectMethod @ 0x140858190 (SeDefaultObjectMethod.c)
 *     RtlValidSecurityDescriptor @ 0x140867870 (RtlValidSecurityDescriptor.c)
 *     SeObjectCreateSaclAccessBits @ 0x1408692BC (SeObjectCreateSaclAccessBits.c)
 *     ObpAdjustCreatorAccessState @ 0x14087AD00 (ObpAdjustCreatorAccessState.c)
 *     SeReleaseSecurityDescriptor @ 0x1409209D0 (SeReleaseSecurityDescriptor.c)
 *     ObpChargeQuotaForObject @ 0x1409857D0 (ObpChargeQuotaForObject.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObInsertObjectEx(
        struct _FILE_OBJECT *Object,
        struct _ACCESS_STATE *a2,
        int a3,
        int a4,
        char a5,
        _QWORD *a6,
        __int64 a7)
{
  struct _FILE_OBJECT *v8; // r15
  __int64 v9; // r9
  struct _LIST_ENTRY *Blink; // rbx
  struct _LIST_ENTRY **p_Blink; // r14
  __int64 v12; // r8
  __int64 v13; // r12
  POBJECT_TYPE v14; // rsi
  char *v15; // rcx
  char PreviousMode; // r13
  __int64 *v17; // rdx
  int v18; // ecx
  unsigned int Handle; // edi
  struct _LIST_ENTRY *Flink; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *L; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v25; // rax
  ULONG_PTR v26; // rax
  struct _LIST_ENTRY *v27; // rax
  __int64 v28; // rdx
  int v29; // r15d
  PVOID v30; // r13
  int v31; // eax
  struct _LIST_ENTRY *v32; // rcx
  __int64 *v33; // rdx
  int v34; // ecx
  ULONG_PTR v35; // rax
  int v36; // r12d
  __int64 v37; // r8
  __int64 v38; // r9
  struct _LIST_ENTRY *v39; // rcx
  struct _KPRCB *v40; // rdx
  _GENERAL_LOOKASIDE *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  signed __int64 v45; // r8
  _KPROCESS *Process; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v48; // rtt
  PACCESS_TOKEN v49; // rcx
  _QWORD *v50; // rax
  _BYTE *v51; // rcx
  ULONG_PTR v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  struct _KTHREAD *v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // r13
  signed __int64 v59; // rax
  signed __int64 v60; // rdx
  struct _LIST_ENTRY *v61; // rtt
  void (__stdcall *FreeEx)(PVOID); // rdx
  void (__stdcall *v63)(PVOID); // rdx
  _QWORD *PrimaryToken; // rax
  _QWORD *ClientToken; // rax
  _QWORD *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  int v70; // [rsp+40h] [rbp-C0h]
  char v71; // [rsp+60h] [rbp-A0h]
  int v72; // [rsp+64h] [rbp-9Ch] BYREF
  _BYTE *v73; // [rsp+68h] [rbp-98h]
  int v74; // [rsp+70h] [rbp-90h]
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  PVOID Objecta; // [rsp+80h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-78h]
  __int64 v78; // [rsp+90h] [rbp-70h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+98h] [rbp-68h]
  struct _KTHREAD *v80; // [rsp+A0h] [rbp-60h]
  __int64 v81; // [rsp+A8h] [rbp-58h]
  _QWORD *v82; // [rsp+B0h] [rbp-50h]
  _QWORD *v83; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v84; // [rsp+C0h] [rbp-40h]
  __int64 v85; // [rsp+D0h] [rbp-30h]
  struct _KTHREAD *v86; // [rsp+D8h] [rbp-28h]
  _QWORD v87[20]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v88[28]; // [rsp+190h] [rbp+90h] BYREF

  v82 = a6;
  v8 = Object;
  v72 = a3;
  Objecta = Object;
  v81 = a7;
  v74 = a4;
  memset_0(v88, 0, sizeof(v88));
  memset_0(v87, 0, sizeof(v87));
  Blink = v8[-1].IrpList.Blink;
  p_Blink = &v8[-1].Event.Header.WaitListHead.Blink;
  v12 = 0LL;
  v13 = 0LL;
  v14 = (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v8[-1].IrpList.Flink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v8 - 48) >> 8)];
  if ( (BYTE2(v8[-1].IrpList.Flink) & 2) != 0 )
  {
    v15 = (char *)ObpInfoMaskToOffset[BYTE2(v8[-1].IrpList.Flink) & 3];
    if ( p_Blink != (struct _LIST_ENTRY **)v15 )
      v13 = (char *)p_Blink - v15 + 8;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v71 = PreviousMode;
  if ( (v14->TypeInfo.ObjectTypeFlags & 8) == 0 && !v13 && !Blink[2].Flink )
  {
    v17 = (__int64 *)v81;
    p_Blink[4] = 0LL;
    if ( v17 )
    {
      v18 = v74 + 1;
      *v17 = 0LL;
      Handle = ObpCreateHandle(0, v8, v72, 0LL, v18, (int)Blink->Flink, PreviousMode, 0LL, 0, v82, v17);
    }
    else
    {
      Handle = 0;
    }
    Flink = Blink[2].Flink;
    if ( Flink )
    {
      LOBYTE(v12) = 1;
      SeReleaseSecurityDescriptor(Flink, LOBYTE(Blink[1].Flink), v12);
      v12 = 0LL;
      Blink[2].Flink = 0LL;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    L = CurrentPrcb->PPLookasideList[4].P;
    ++L->TotalFrees;
    if ( LOWORD(L->ListHead.Alignment) < L->Depth
      || (++L->FreeMisses,
          L = CurrentPrcb->PPLookasideList[4].L,
          ++L->TotalFrees,
          LOWORD(L->ListHead.Alignment) < L->Depth) )
    {
      RtlpInterlockedPushEntrySList(&L->ListHead, (PSLIST_ENTRY)Blink);
    }
    else
    {
      ++L->FreeMisses;
      FreeEx = (void (__stdcall *)(PVOID))L->FreeEx;
      if ( FreeEx == ExFreePool )
        ExFreePool(Blink);
      else
        guard_dispatch_icall_no_overrides(Blink, FreeEx, v12, v9);
    }
    ObfDereferenceObject(v8);
    return Handle;
  }
  if ( !a2 )
  {
    CurrentThread = KeGetCurrentThread();
    a2 = (struct _ACCESS_STATE *)v87;
    v80 = CurrentThread;
    v84 = 0LL;
    SecurityDescriptor = CurrentThread->ApcState.Process;
    v85 = *((_QWORD *)SecurityDescriptor + 58);
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v86 = KeGetCurrentThread();
      --v86->KernelApcDisable;
      BugCheckParameter2 = (ULONG_PTR)&CurrentThread[1].WaitBlockList;
      v50 = KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL);
      v51 = v50;
      v73 = v50;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx((signed __int64 *)BugCheckParameter2, 0, v50, BugCheckParameter2);
        v51 = v73;
      }
      if ( v51 )
        v51[10] = 1;
      if ( (*(_DWORD *)(&v80[1].SwapListEntry + 1) & 8) != 0 )
      {
        v73 = (_BYTE *)(*(_QWORD *)((char *)&v80[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v73, 0x75536553u);
        LODWORD(v84) = *((_DWORD *)&v80[1].0 + 1) & 3;
      }
      else
      {
        v73 = 0LL;
      }
      v52 = BugCheckParameter2;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
      {
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
        v52 = BugCheckParameter2;
      }
      KeAbPostRelease(v52);
      KeLeaveCriticalRegionThread();
      v25 = v73;
    }
    else
    {
      v25 = 0LL;
      v73 = 0LL;
    }
    v83 = v25;
    v26 = PsReferencePrimaryTokenWithTag((__int64)SecurityDescriptor, 0x75536553u);
    *((_QWORD *)&v84 + 1) = v26;
    if ( SeTokenLeakTracking )
    {
      if ( v26 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v26 + 1144) + 284LL));
        if ( v26 == SepTokenLeakToken )
          __debugbreak();
        v66 = v83;
      }
      else
      {
        v66 = v73;
      }
      if ( v66 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v66[143] + 284LL));
        if ( v83 == (_QWORD *)SepTokenLeakToken )
          __debugbreak();
      }
    }
    LODWORD(v73) = SepCreateAccessStateFromSubjectContext(
                     &v83,
                     v87,
                     v88,
                     v72,
                     &v14->TypeInfo.GenericMapping.GenericRead);
    if ( (int)v73 < 0 )
    {
      ObfDereferenceObject(v8);
      return (unsigned int)v73;
    }
  }
  v27 = Blink[2].Flink;
  SecurityDescriptor = v27;
  a2->SecurityDescriptor = v27;
  if ( v27 )
  {
    if ( !RtlValidSecurityDescriptor(v27) )
    {
      ObfDereferenceObject(v8);
      if ( a2 == (struct _ACCESS_STATE *)v87 )
        SeDeleteAccessState((__int64)a2, v67, v68, v69);
      return 3221225593LL;
    }
    if ( (*((_BYTE *)SecurityDescriptor + 2) & 0x10) != 0 && (a2->PreviouslyGrantedAccess & 0x1000000) == 0 )
      a2->RemainingDesiredAccess |= SeObjectCreateSaclAccessBits(SecurityDescriptor);
  }
  if ( !v13 && ((v14->TypeInfo.ObjectTypeFlags & 8) != 0 || Blink[2].Flink) )
  {
    v28 = (__int64)a2->SecurityDescriptor;
    v72 = 0;
    P = 0LL;
    v78 = 8LL;
    v29 = SeComputeAutoInheritByObjectTypeEx((__int64)v14, v28, 0LL, &v72, &v78);
    if ( v29 < 0
      || (v72 |= 16 * (a5 & 1),
          v29 = SeAssignSecurityEx2(
                  0,
                  (int)a2->SecurityDescriptor,
                  (int)&P,
                  0LL,
                  v14 == ObpDirectoryObjectType,
                  v72,
                  &v78,
                  (__int64)&a2->SubjectSecurityContext,
                  (__int64)&v14->TypeInfo.GenericMapping),
          v29 < 0) )
    {
      v30 = Objecta;
    }
    else
    {
      LOBYTE(v70) = KeGetCurrentThread()->PreviousMode;
      v30 = Objecta;
      if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD))v14->TypeInfo.SecurityProcedure == SeDefaultObjectMethod )
        v31 = SeDefaultObjectMethod(Objecta, 3LL, 0LL, P, 0LL, 0LL, 1, &v14->TypeInfo.GenericMapping, v70);
      else
        v31 = guard_dispatch_icall_no_overrides(Objecta, 3LL, 0LL, P);
      v29 = v31;
      if ( v31 >= 0 )
        goto LABEL_30;
      if ( P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      if ( v29 >= 0 )
      {
LABEL_30:
        v32 = Blink[2].Flink;
        if ( LOBYTE(Blink[1].Flink) <= 1u && v32 )
          ExFreePoolWithTag(v32, 0);
        PreviousMode = v71;
        Blink[2].Flink = 0LL;
        a2->SecurityDescriptor = 0LL;
        v8 = (struct _FILE_OBJECT *)Objecta;
        goto LABEL_34;
      }
    }
    ObfDereferenceObject(v30);
    if ( a2 == (struct _ACCESS_STATE *)v87 )
      SeDeleteAccessState((__int64)a2, v53, v54, v55);
    return (unsigned int)v29;
  }
LABEL_34:
  v33 = (__int64 *)v81;
  p_Blink[4] = 0LL;
  if ( v33 )
  {
    v34 = v74;
    *v33 = 0LL;
    v35 = (ULONG_PTR)Blink;
    if ( !v13 )
      v35 = 0LL;
    v36 = ObpCreateHandle(0, v8, 0, (__int64)a2, v34 + 1, (int)Blink->Flink, PreviousMode, v35, 0, v82, v33);
    ObfDereferenceObject(v8);
  }
  else
  {
    if ( a2 != (struct _ACCESS_STATE *)v87 )
    {
      v36 = ObpAdjustCreatorAccessState(a2);
      if ( v36 < 0 )
        goto LABEL_78;
    }
    v56 = KeGetCurrentThread();
    --v56->KernelApcDisable;
    v57 = KeAbPreAcquire((__int64)(p_Blink + 2), 0LL);
    v58 = v57;
    if ( _interlockedbittestandset64((volatile signed __int32 *)p_Blink + 4, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)p_Blink + 2, (__int64)v57, (__int64)(p_Blink + 2));
    if ( v58 )
      *((_BYTE *)v58 + 10) = 1;
    v36 = ObpChargeQuotaForObject(p_Blink, KeGetCurrentThread()->ApcState.Process, 0LL);
    _m_prefetchw(p_Blink + 2);
    v59 = (signed __int64)p_Blink[2];
    v60 = v59 - 16;
    if ( (v59 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v60 = 0LL;
    if ( (v59 & 2) != 0
      || (v61 = p_Blink[2],
          v61 != (struct _LIST_ENTRY *)_InterlockedCompareExchange64((volatile signed __int64 *)p_Blink + 2, v60, v59)) )
    {
      ExfReleasePushLock(p_Blink + 2);
    }
    KeAbPostRelease((ULONG_PTR)(p_Blink + 2));
    KeLeaveCriticalRegionThread();
    if ( v36 < 0 )
LABEL_78:
      ObfDereferenceObject(v8);
  }
  v39 = Blink[2].Flink;
  if ( v39 )
  {
    if ( LOBYTE(Blink[1].Flink) <= 1u )
      ExFreePoolWithTag(v39, 0);
    Blink[2].Flink = 0LL;
  }
  v40 = KeGetCurrentPrcb();
  v41 = v40->PPLookasideList[4].P;
  ++v41->TotalFrees;
  if ( LOWORD(v41->ListHead.Alignment) < v41->Depth
    || (++v41->FreeMisses,
        v41 = v40->PPLookasideList[4].L,
        ++v41->TotalFrees,
        LOWORD(v41->ListHead.Alignment) < v41->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v41->ListHead, (PSLIST_ENTRY)Blink);
  }
  else
  {
    ++v41->FreeMisses;
    v63 = (void (__stdcall *)(PVOID))v41->FreeEx;
    if ( v63 == ExFreePool )
      ExFreePool(Blink);
    else
      guard_dispatch_icall_no_overrides(Blink, v63, v37, v38);
  }
  if ( a2 == (struct _ACCESS_STATE *)v87 )
  {
    SepDeleteAccessState((__int64)a2, v42, v43, v44);
    if ( SeTokenLeakTracking )
    {
      PrimaryToken = a2->SubjectSecurityContext.PrimaryToken;
      if ( PrimaryToken )
      {
        _InterlockedDecrement((volatile signed __int32 *)(PrimaryToken[143] + 284LL));
        if ( a2->SubjectSecurityContext.PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
          __debugbreak();
      }
      ClientToken = a2->SubjectSecurityContext.ClientToken;
      if ( ClientToken )
      {
        _InterlockedDecrement((volatile signed __int32 *)(ClientToken[143] + 284LL));
        if ( a2->SubjectSecurityContext.ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
          __debugbreak();
      }
    }
    v45 = (signed __int64)a2->SubjectSecurityContext.PrimaryToken;
    Process = KeGetCurrentThread()->ApcState.Process;
    _m_prefetchw(&Process[1].ActiveProcessors);
    ActiveProcessors = (signed __int64)Process[1].ActiveProcessors;
    do
    {
      if ( (v45 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
      {
        ObfDereferenceObjectWithTag((PVOID)v45, 0x75536553u);
        goto LABEL_51;
      }
      v48 = ActiveProcessors;
      ActiveProcessors = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&Process[1].ActiveProcessors,
                           ActiveProcessors + 1,
                           ActiveProcessors);
    }
    while ( v48 != ActiveProcessors );
    if ( ObpTraceFlags )
      ObpPushStackInfo(v45 - 48, 0, 1u, 0x75536553u);
LABEL_51:
    v49 = a2->SubjectSecurityContext.ClientToken;
    a2->SubjectSecurityContext.PrimaryToken = 0LL;
    if ( v49 )
      ObfDereferenceObjectWithTag(v49, 0x75536553u);
    a2->SubjectSecurityContext.ClientToken = 0LL;
  }
  return (unsigned int)v36;
}
