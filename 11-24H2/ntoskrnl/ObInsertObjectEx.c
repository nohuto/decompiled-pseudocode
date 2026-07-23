/*
 * XREFs of ObInsertObjectEx @ 0x140853900
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x1406FA900 (HalpDmaAllocateChildAdapterV3.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x1406FE6C0 (HalpDmaAllocateChildAdapterV2.c)
 *     IoCreateController @ 0x140711950 (IoCreateController.c)
 *     NtCreateIoRing @ 0x140714CF0 (NtCreateIoRing.c)
 *     PopEtEnergyTrackerCreate @ 0x14075CC00 (PopEtEnergyTrackerCreate.c)
 *     TtmpDispatchCreateEventQueue @ 0x14076B6D8 (TtmpDispatchCreateEventQueue.c)
 *     TtmiCreateTerminal @ 0x14076F708 (TtmiCreateTerminal.c)
 *     NtCreateProcessStateChange @ 0x140775C90 (NtCreateProcessStateChange.c)
 *     PsCreateCpuPartition @ 0x14077665C (PsCreateCpuPartition.c)
 *     PspAllocatePartition @ 0x14077AAAC (PspAllocatePartition.c)
 *     PspSessionObjectCreate @ 0x14077BC7C (PspSessionObjectCreate.c)
 *     SepInitializationPhase1 @ 0x14078EEB0 (SepInitializationPhase1.c)
 *     SeFilterToken @ 0x14078F630 (SeFilterToken.c)
 *     EtwpRegisterPrivateSession @ 0x1407AD880 (EtwpRegisterPrivateSession.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1407B34B4 (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x1407C1A4C (ExpProfileCreate.c)
 *     NtCreateKeyedEvent @ 0x1407C5620 (NtCreateKeyedEvent.c)
 *     EtwpRegisterUMProvider @ 0x140838D50 (EtwpRegisterUMProvider.c)
 *     NtCreateSemaphore @ 0x14083A3C0 (NtCreateSemaphore.c)
 *     NtCreateMutant @ 0x14083AEC0 (NtCreateMutant.c)
 *     NtCreateWaitCompletionPacket @ 0x14083B1F0 (NtCreateWaitCompletionPacket.c)
 *     NtOpenThreadTokenEx @ 0x140851680 (NtOpenThreadTokenEx.c)
 *     ObInsertObject @ 0x140853260 (ObInsertObject.c)
 *     NtCreateEvent @ 0x1408532A0 (NtCreateEvent.c)
 *     NtCreateJobObject @ 0x14085C390 (NtCreateJobObject.c)
 *     AlpcpCreateConnectionPort @ 0x14086671C (AlpcpCreateConnectionPort.c)
 *     AlpcpCreateClientPort @ 0x140868FD0 (AlpcpCreateClientPort.c)
 *     SepCreateClientSecurityEx @ 0x1408A0160 (SepCreateClientSecurityEx.c)
 *     IoCreateDevice @ 0x1408ABEC0 (IoCreateDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1408AD120 (IoCreateStreamFileObjectEx2.c)
 *     NtDuplicateToken @ 0x1408E67E0 (NtDuplicateToken.c)
 *     SeCopyClientToken @ 0x1408E7698 (SeCopyClientToken.c)
 *     PsImpersonateClient @ 0x1408E7A20 (PsImpersonateClient.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x1408EB67C (PspSchedulerSharedDataRegionCreate.c)
 *     PspInsertThread @ 0x1408FBFD4 (PspInsertThread.c)
 *     PspInsertProcess @ 0x1408FD2CC (PspInsertProcess.c)
 *     MiCreateSectionCommon @ 0x140954024 (MiCreateSectionCommon.c)
 *     NtFilterToken @ 0x140983A70 (NtFilterToken.c)
 *     NtCreateWorkerFactory @ 0x1409901C0 (NtCreateWorkerFactory.c)
 *     WmipCreateGuidObject @ 0x1409B4758 (WmipCreateGuidObject.c)
 *     IopLoadDriver @ 0x1409B6EEC (IopLoadDriver.c)
 *     NtCreateTimer @ 0x1409EADF0 (NtCreateTimer.c)
 *     NtCreatePrivateNamespace @ 0x140A05BA0 (NtCreatePrivateNamespace.c)
 *     NtCreateTimer2 @ 0x140A16910 (NtCreateTimer2.c)
 *     NtCreateIoCompletion @ 0x140A16D10 (NtCreateIoCompletion.c)
 *     ObCreateSymbolicLink @ 0x140A1E6A8 (ObCreateSymbolicLink.c)
 *     AlpcpAcceptConnectPort @ 0x140A1ED20 (AlpcpAcceptConnectPort.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140A24410 (SepCopyAnonymousTokenAndSetSilo.c)
 *     ObpCreateDirectoryObject @ 0x140A3B2C0 (ObpCreateDirectoryObject.c)
 *     NtCreateRegistryTransaction @ 0x140A43150 (NtCreateRegistryTransaction.c)
 *     NtAllocateReserveObject @ 0x140A48760 (NtAllocateReserveObject.c)
 *     SeGetLogonSessionToken @ 0x140A4EDD0 (SeGetLogonSessionToken.c)
 *     EtwpRealtimeConnect @ 0x140A56DA8 (EtwpRealtimeConnect.c)
 *     NtCreateThreadStateChange @ 0x140A58340 (NtCreateThreadStateChange.c)
 *     ExCreateCallback @ 0x140A5CC10 (ExCreateCallback.c)
 *     EtwpCreateUmReplyObject @ 0x140A703BC (EtwpCreateUmReplyObject.c)
 *     PspCreateActivityReference @ 0x140A71370 (PspCreateActivityReference.c)
 *     NtCreateDebugObject @ 0x140AA4FB0 (NtCreateDebugObject.c)
 *     IoCreateDriver @ 0x140AACC00 (IoCreateDriver.c)
 *     NtQueryInformationToken @ 0x140AD09E0 (NtQueryInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD5A60 (NtCreateLowBoxToken.c)
 *     SeSubProcessToken @ 0x140AD660C (SeSubProcessToken.c)
 *     MmCreateSpecialImageSection @ 0x140AE8400 (MmCreateSpecialImageSection.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1403E0270 (SepCreateAccessStateFromSubjectContext.c)
 *     SepDeleteAccessState @ 0x1403FBF80 (SepDeleteAccessState.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x14041D070 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SeAssignSecurityEx2 @ 0x140424AE0 (SeAssignSecurityEx2.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeDeleteAccessState @ 0x14083D240 (SeDeleteAccessState.c)
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     SeDefaultObjectMethod @ 0x140854470 (SeDefaultObjectMethod.c)
 *     RtlValidSecurityDescriptor @ 0x14086BB60 (RtlValidSecurityDescriptor.c)
 *     SeObjectCreateSaclAccessBits @ 0x14086D5AC (SeObjectCreateSaclAccessBits.c)
 *     ObpAdjustCreatorAccessState @ 0x14087EBB0 (ObpAdjustCreatorAccessState.c)
 *     SeReleaseSecurityDescriptor @ 0x140912CC0 (SeReleaseSecurityDescriptor.c)
 *     ObpChargeQuotaForObject @ 0x14096DFE0 (ObpChargeQuotaForObject.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  struct _LIST_ENTRY *v37; // rcx
  struct _KPRCB *v38; // rdx
  _GENERAL_LOOKASIDE *v39; // rcx
  signed __int64 v40; // r8
  _KPROCESS *Process; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v43; // rtt
  PACCESS_TOKEN v44; // rcx
  _QWORD *v45; // rax
  _BYTE *v46; // rcx
  ULONG_PTR v47; // rcx
  struct _KTHREAD *v48; // rax
  char *v49; // rax
  char *v50; // r13
  signed __int64 v51; // rax
  signed __int64 v52; // rdx
  struct _LIST_ENTRY *v53; // rtt
  void (__stdcall *FreeEx)(PVOID); // rdx
  void (__stdcall *v55)(PVOID); // rdx
  _QWORD *PrimaryToken; // rax
  _QWORD *ClientToken; // rax
  _QWORD *v58; // rax
  int v59; // [rsp+40h] [rbp-C0h]
  char v60; // [rsp+60h] [rbp-A0h]
  int v61; // [rsp+64h] [rbp-9Ch] BYREF
  _BYTE *v62; // [rsp+68h] [rbp-98h]
  int v63; // [rsp+70h] [rbp-90h]
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  PVOID Objecta; // [rsp+80h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-78h]
  ULONG Index[2]; // [rsp+90h] [rbp-70h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+98h] [rbp-68h]
  struct _KTHREAD *v69; // [rsp+A0h] [rbp-60h]
  __int64 v70; // [rsp+A8h] [rbp-58h]
  _QWORD *v71; // [rsp+B0h] [rbp-50h]
  _QWORD *v72; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v73; // [rsp+C0h] [rbp-40h]
  __int64 v74; // [rsp+D0h] [rbp-30h]
  struct _KTHREAD *v75; // [rsp+D8h] [rbp-28h]
  _QWORD v76[20]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v77[28]; // [rsp+190h] [rbp+90h] BYREF

  v71 = a6;
  v8 = Object;
  v61 = a3;
  Objecta = Object;
  v70 = a7;
  v63 = a4;
  memset_0(v77, 0, sizeof(v77));
  memset_0(v76, 0, sizeof(v76));
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
  v60 = PreviousMode;
  if ( (v14->TypeInfo.ObjectTypeFlags & 8) == 0 && !v13 && !Blink[2].Flink )
  {
    v17 = (__int64 *)v70;
    p_Blink[4] = 0LL;
    if ( v17 )
    {
      v18 = v63 + 1;
      *v17 = 0LL;
      Handle = ObpCreateHandle(0, v8, v61, 0LL, v18, (int)Blink->Flink, PreviousMode, 0LL, 0, v71, v17);
    }
    else
    {
      Handle = 0;
    }
    Flink = Blink[2].Flink;
    if ( Flink )
    {
      LOBYTE(v12) = 1;
      SeReleaseSecurityDescriptor(Flink, LOBYTE(Blink[1].Flink), v12, v9);
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
        guard_dispatch_icall_no_overrides(Blink, FreeEx);
    }
    ObfDereferenceObject(v8);
    return Handle;
  }
  if ( !a2 )
  {
    CurrentThread = KeGetCurrentThread();
    a2 = (struct _ACCESS_STATE *)v76;
    v69 = CurrentThread;
    v73 = 0LL;
    SecurityDescriptor = CurrentThread->ApcState.Process;
    v74 = *((_QWORD *)SecurityDescriptor + 58);
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v75 = KeGetCurrentThread();
      --v75->KernelApcDisable;
      BugCheckParameter2 = (ULONG_PTR)&CurrentThread[1].WaitBlockList;
      v45 = KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL);
      v46 = v45;
      v62 = v45;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx((signed __int64 *)BugCheckParameter2, 0, (char *)v45, BugCheckParameter2);
        v46 = v62;
      }
      if ( v46 )
        v46[10] = 1;
      if ( (*(_DWORD *)(&v69[1].SwapListEntry + 1) & 8) != 0 )
      {
        v62 = (_BYTE *)(*(_QWORD *)((char *)&v69[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v62, 0x75536553u);
        LODWORD(v73) = *((_DWORD *)&v69[1].0 + 1) & 3;
      }
      else
      {
        v62 = 0LL;
      }
      v47 = BugCheckParameter2;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
      {
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
        v47 = BugCheckParameter2;
      }
      KeAbPostRelease(v47);
      KeLeaveCriticalRegionThread();
      v25 = v62;
    }
    else
    {
      v25 = 0LL;
      v62 = 0LL;
    }
    v72 = v25;
    v26 = PsReferencePrimaryTokenWithTag((__int64)SecurityDescriptor, 0x75536553u);
    *((_QWORD *)&v73 + 1) = v26;
    if ( SeTokenLeakTracking )
    {
      if ( v26 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v26 + 1144) + 284LL));
        if ( v26 == SepTokenLeakToken )
          __debugbreak();
        v58 = v72;
      }
      else
      {
        v58 = v62;
      }
      if ( v58 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v58[143] + 284LL));
        if ( v72 == (_QWORD *)SepTokenLeakToken )
          __debugbreak();
      }
    }
    LODWORD(v62) = SepCreateAccessStateFromSubjectContext(
                     &v72,
                     v76,
                     v77,
                     v61,
                     &v14->TypeInfo.GenericMapping.GenericRead);
    if ( (int)v62 < 0 )
    {
      ObfDereferenceObject(v8);
      return (unsigned int)v62;
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
      if ( a2 == (struct _ACCESS_STATE *)v76 )
        SeDeleteAccessState((__int64)a2);
      return 3221225593LL;
    }
    if ( (*((_BYTE *)SecurityDescriptor + 2) & 0x10) != 0 && (a2->PreviouslyGrantedAccess & 0x1000000) == 0 )
      a2->RemainingDesiredAccess |= SeObjectCreateSaclAccessBits(SecurityDescriptor);
  }
  if ( !v13 && ((v14->TypeInfo.ObjectTypeFlags & 8) != 0 || Blink[2].Flink) )
  {
    v28 = (__int64)a2->SecurityDescriptor;
    Index[1] = 0;
    v61 = 0;
    P = 0LL;
    Index[0] = 8;
    v29 = SeComputeAutoInheritByObjectTypeEx((__int64)v14, v28, 0LL, &v61, Index);
    if ( v29 < 0
      || (v61 |= 16 * (a5 & 1),
          v29 = SeAssignSecurityEx2(
                  0,
                  (int)a2->SecurityDescriptor,
                  (int)&P,
                  0LL,
                  v14 == ObpDirectoryObjectType,
                  v61,
                  Index,
                  (__int64)&a2->SubjectSecurityContext,
                  (__int64)&v14->TypeInfo.GenericMapping),
          v29 < 0) )
    {
      v30 = Objecta;
    }
    else
    {
      LOBYTE(v59) = KeGetCurrentThread()->PreviousMode;
      v30 = Objecta;
      if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD))v14->TypeInfo.SecurityProcedure == SeDefaultObjectMethod )
        v31 = SeDefaultObjectMethod(Objecta, 3LL, 0LL, P, 0LL, 0LL, 1, &v14->TypeInfo.GenericMapping, v59);
      else
        v31 = guard_dispatch_icall_no_overrides(Objecta, 3LL);
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
        PreviousMode = v60;
        Blink[2].Flink = 0LL;
        a2->SecurityDescriptor = 0LL;
        v8 = (struct _FILE_OBJECT *)Objecta;
        goto LABEL_34;
      }
    }
    ObfDereferenceObject(v30);
    if ( a2 == (struct _ACCESS_STATE *)v76 )
      SeDeleteAccessState((__int64)a2);
    return (unsigned int)v29;
  }
LABEL_34:
  v33 = (__int64 *)v70;
  p_Blink[4] = 0LL;
  if ( v33 )
  {
    v34 = v63;
    *v33 = 0LL;
    v35 = (ULONG_PTR)Blink;
    if ( !v13 )
      v35 = 0LL;
    v36 = ObpCreateHandle(0, v8, 0, (__int64)a2, v34 + 1, (int)Blink->Flink, PreviousMode, v35, 0, v71, v33);
    ObfDereferenceObject(v8);
  }
  else
  {
    if ( a2 != (struct _ACCESS_STATE *)v76 )
    {
      v36 = ObpAdjustCreatorAccessState(a2);
      if ( v36 < 0 )
        goto LABEL_78;
    }
    v48 = KeGetCurrentThread();
    --v48->KernelApcDisable;
    v49 = (char *)KeAbPreAcquire((__int64)(p_Blink + 2), 0LL);
    v50 = v49;
    if ( _interlockedbittestandset64((volatile signed __int32 *)p_Blink + 4, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)p_Blink + 2, v49, (__int64)(p_Blink + 2));
    if ( v50 )
      v50[10] = 1;
    v36 = ObpChargeQuotaForObject(p_Blink, KeGetCurrentThread()->ApcState.Process, 0LL);
    _m_prefetchw(p_Blink + 2);
    v51 = (signed __int64)p_Blink[2];
    v52 = v51 - 16;
    if ( (v51 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v52 = 0LL;
    if ( (v51 & 2) != 0
      || (v53 = p_Blink[2],
          v53 != (struct _LIST_ENTRY *)_InterlockedCompareExchange64((volatile signed __int64 *)p_Blink + 2, v52, v51)) )
    {
      ExfReleasePushLock(p_Blink + 2);
    }
    KeAbPostRelease((ULONG_PTR)(p_Blink + 2));
    KeLeaveCriticalRegionThread();
    if ( v36 < 0 )
LABEL_78:
      ObfDereferenceObject(v8);
  }
  v37 = Blink[2].Flink;
  if ( v37 )
  {
    if ( LOBYTE(Blink[1].Flink) <= 1u )
      ExFreePoolWithTag(v37, 0);
    Blink[2].Flink = 0LL;
  }
  v38 = KeGetCurrentPrcb();
  v39 = v38->PPLookasideList[4].P;
  ++v39->TotalFrees;
  if ( LOWORD(v39->ListHead.Alignment) < v39->Depth
    || (++v39->FreeMisses,
        v39 = v38->PPLookasideList[4].L,
        ++v39->TotalFrees,
        LOWORD(v39->ListHead.Alignment) < v39->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v39->ListHead, (PSLIST_ENTRY)Blink);
  }
  else
  {
    ++v39->FreeMisses;
    v55 = (void (__stdcall *)(PVOID))v39->FreeEx;
    if ( v55 == ExFreePool )
      ExFreePool(Blink);
    else
      guard_dispatch_icall_no_overrides(Blink, v55);
  }
  if ( a2 == (struct _ACCESS_STATE *)v76 )
  {
    SepDeleteAccessState((__int64)a2);
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
    v40 = (signed __int64)a2->SubjectSecurityContext.PrimaryToken;
    Process = KeGetCurrentThread()->ApcState.Process;
    _m_prefetchw(&Process[1].ActiveProcessors);
    ActiveProcessors = (signed __int64)Process[1].ActiveProcessors;
    do
    {
      if ( (v40 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
      {
        ObfDereferenceObjectWithTag((PVOID)v40, 0x75536553u);
        goto LABEL_51;
      }
      v43 = ActiveProcessors;
      ActiveProcessors = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&Process[1].ActiveProcessors,
                           ActiveProcessors + 1,
                           ActiveProcessors);
    }
    while ( v43 != ActiveProcessors );
    if ( ObpTraceFlags )
      ObpPushStackInfo(v40 - 48, 0, 1u, 0x75536553u);
LABEL_51:
    v44 = a2->SubjectSecurityContext.ClientToken;
    a2->SubjectSecurityContext.PrimaryToken = 0LL;
    if ( v44 )
      ObfDereferenceObjectWithTag(v44, 0x75536553u);
    a2->SubjectSecurityContext.ClientToken = 0LL;
  }
  return (unsigned int)v36;
}
