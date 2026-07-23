/*
 * XREFs of ObInsertObjectEx @ 0x1408A05E0
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x1406F0ED0 (HalpDmaAllocateChildAdapterV3.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x1406F4C90 (HalpDmaAllocateChildAdapterV2.c)
 *     IoCreateController @ 0x140707CC0 (IoCreateController.c)
 *     NtCreateIoRing @ 0x14070B060 (NtCreateIoRing.c)
 *     PopEtEnergyTrackerCreate @ 0x140751240 (PopEtEnergyTrackerCreate.c)
 *     TtmpDispatchCreateEventQueue @ 0x14075BAF8 (TtmpDispatchCreateEventQueue.c)
 *     TtmiCreateTerminal @ 0x14075FB28 (TtmiCreateTerminal.c)
 *     NtCreateProcessStateChange @ 0x1407660A0 (NtCreateProcessStateChange.c)
 *     PsCreateCpuPartition @ 0x140766A6C (PsCreateCpuPartition.c)
 *     PspAllocatePartition @ 0x14076B05C (PspAllocatePartition.c)
 *     PspSessionObjectCreate @ 0x14076C22C (PspSessionObjectCreate.c)
 *     SepInitializationPhase1 @ 0x14077FC20 (SepInitializationPhase1.c)
 *     SeFilterToken @ 0x1407803A0 (SeFilterToken.c)
 *     EtwpRegisterPrivateSession @ 0x14079E05C (EtwpRegisterPrivateSession.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1407A3C94 (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x1407B1E2C (ExpProfileCreate.c)
 *     NtCreateKeyedEvent @ 0x1407B2A40 (NtCreateKeyedEvent.c)
 *     EtwpRegisterUMProvider @ 0x14089D2F0 (EtwpRegisterUMProvider.c)
 *     SeCopyClientToken @ 0x14089E9B0 (SeCopyClientToken.c)
 *     NtCreateSemaphore @ 0x14089F4E0 (NtCreateSemaphore.c)
 *     ObInsertObject @ 0x14089FF30 (ObInsertObject.c)
 *     NtCreateEvent @ 0x14089FF70 (NtCreateEvent.c)
 *     NtOpenThreadTokenEx @ 0x1408A17B0 (NtOpenThreadTokenEx.c)
 *     NtDuplicateToken @ 0x1408A3EE0 (NtDuplicateToken.c)
 *     PsImpersonateClient @ 0x1408A51C0 (PsImpersonateClient.c)
 *     SepCreateClientSecurityEx @ 0x1408A6AF0 (SepCreateClientSecurityEx.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x1408BA4BC (PspSchedulerSharedDataRegionCreate.c)
 *     MiCreateSectionCommon @ 0x1408C2964 (MiCreateSectionCommon.c)
 *     NtCreateJobObject @ 0x1408DB4B0 (NtCreateJobObject.c)
 *     PspInsertThread @ 0x1408F1D7C (PspInsertThread.c)
 *     PspInsertProcess @ 0x1408F3D10 (PspInsertProcess.c)
 *     AlpcpCreateClientPort @ 0x140916890 (AlpcpCreateClientPort.c)
 *     MmCreateSpecialImageSection @ 0x14093AC3C (MmCreateSpecialImageSection.c)
 *     NtFilterToken @ 0x1409970E0 (NtFilterToken.c)
 *     IoCreateDevice @ 0x14099E640 (IoCreateDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14099F4B0 (IoCreateStreamFileObjectEx2.c)
 *     NtCreateWorkerFactory @ 0x1409A67B0 (NtCreateWorkerFactory.c)
 *     IopLoadDriver @ 0x1409B0D50 (IopLoadDriver.c)
 *     WmipCreateGuidObject @ 0x1409B3958 (WmipCreateGuidObject.c)
 *     AlpcpCreateConnectionPort @ 0x1409DFF40 (AlpcpCreateConnectionPort.c)
 *     NtCreateMutant @ 0x1409F51C0 (NtCreateMutant.c)
 *     AlpcpAcceptConnectPort @ 0x1409F5B30 (AlpcpAcceptConnectPort.c)
 *     NtCreateWaitCompletionPacket @ 0x1409FAE20 (NtCreateWaitCompletionPacket.c)
 *     NtCreateTimer @ 0x1409FAF30 (NtCreateTimer.c)
 *     NtCreatePrivateNamespace @ 0x140A06400 (NtCreatePrivateNamespace.c)
 *     SeSubProcessToken @ 0x140A0C9E8 (SeSubProcessToken.c)
 *     NtCreateTimer2 @ 0x140A16540 (NtCreateTimer2.c)
 *     NtCreateIoCompletion @ 0x140A182B0 (NtCreateIoCompletion.c)
 *     ObCreateSymbolicLink @ 0x140A201A8 (ObCreateSymbolicLink.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140A2A050 (SepCopyAnonymousTokenAndSetSilo.c)
 *     ObpCreateDirectoryObject @ 0x140A41B20 (ObpCreateDirectoryObject.c)
 *     NtCreateRegistryTransaction @ 0x140A4ADE0 (NtCreateRegistryTransaction.c)
 *     NtAllocateReserveObject @ 0x140A4E490 (NtAllocateReserveObject.c)
 *     SeGetLogonSessionToken @ 0x140A53680 (SeGetLogonSessionToken.c)
 *     NtCreateThreadStateChange @ 0x140A5DB20 (NtCreateThreadStateChange.c)
 *     EtwpRealtimeConnect @ 0x140A5E498 (EtwpRealtimeConnect.c)
 *     ExCreateCallback @ 0x140A62280 (ExCreateCallback.c)
 *     EtwpCreateUmReplyObject @ 0x140A74164 (EtwpCreateUmReplyObject.c)
 *     PspCreateActivityReference @ 0x140A74EC0 (PspCreateActivityReference.c)
 *     NtCreateDebugObject @ 0x140AA4F70 (NtCreateDebugObject.c)
 *     IoCreateDriver @ 0x140AACA20 (IoCreateDriver.c)
 *     NtQueryInformationToken @ 0x140AC8E20 (NtQueryInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140ACDB00 (NtCreateLowBoxToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1403E3020 (SepCreateAccessStateFromSubjectContext.c)
 *     SepDeleteAccessState @ 0x1403F9FA0 (SepDeleteAccessState.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140430E30 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SeAssignSecurityEx2 @ 0x140436040 (SeAssignSecurityEx2.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SeDeleteAccessState @ 0x140844A10 (SeDeleteAccessState.c)
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     ObpAdjustCreatorAccessState @ 0x140862780 (ObpAdjustCreatorAccessState.c)
 *     ObpChargeQuotaForObject @ 0x14089F240 (ObpChargeQuotaForObject.c)
 *     SeDefaultObjectMethod @ 0x1408A1150 (SeDefaultObjectMethod.c)
 *     RtlValidSecurityDescriptor @ 0x140919740 (RtlValidSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x14092E1B0 (SeReleaseSecurityDescriptor.c)
 *     SeObjectCreateSaclAccessBits @ 0x140A2EC60 (SeObjectCreateSaclAccessBits.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObInsertObjectEx(
        char *Object,
        PACCESS_STATE AccessState,
        int a3,
        int a4,
        char a5,
        PVOID *a6,
        __int64 a7)
{
  char *v8; // r15
  __int64 v9; // r9
  ULONG_PTR v10; // rbx
  __int64 v11; // r14
  __int64 v12; // r8
  __int64 v13; // r12
  POBJECT_TYPE v14; // rsi
  __int64 v15; // rcx
  char PreviousMode; // r13
  __int64 *v17; // rdx
  int v18; // ecx
  unsigned int Handle; // edi
  __int64 v20; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *L; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 *v25; // rax
  ULONG_PTR v26; // rax
  void *v27; // rax
  PSECURITY_DESCRIPTOR v28; // rdx
  int v29; // r15d
  PVOID v30; // r13
  int v31; // eax
  void *v32; // rcx
  __int64 *v33; // rdx
  int v34; // ecx
  ULONG_PTR v35; // rax
  int v36; // r12d
  void *v37; // rcx
  struct _KPRCB *v38; // rdx
  _GENERAL_LOOKASIDE *v39; // rcx
  signed __int64 v40; // r8
  _KPROCESS *Process; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v43; // rtt
  PACCESS_TOKEN v44; // rcx
  __int64 *v45; // rax
  __int64 *v46; // rcx
  ULONG_PTR v47; // rcx
  struct _KTHREAD *v48; // rax
  __int64 *v49; // rax
  __int64 *v50; // r13
  signed __int64 v51; // rax
  signed __int64 v52; // rdx
  __int64 v53; // rtt
  char v54; // dl
  _QWORD *PrimaryToken; // rax
  _QWORD *ClientToken; // rax
  __int64 *v57; // rax
  char v58; // [rsp+60h] [rbp-A0h]
  int v59; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 *v60; // [rsp+68h] [rbp-98h]
  int v61; // [rsp+70h] [rbp-90h]
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  PVOID Objecta; // [rsp+80h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-78h]
  ULONG Index[2]; // [rsp+90h] [rbp-70h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+98h] [rbp-68h]
  struct _KTHREAD *v67; // [rsp+A0h] [rbp-60h]
  __int64 v68; // [rsp+A8h] [rbp-58h]
  PVOID *v69; // [rsp+B0h] [rbp-50h]
  __int64 *v70; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v71; // [rsp+C0h] [rbp-40h]
  __int64 v72; // [rsp+D0h] [rbp-30h]
  struct _KTHREAD *v73; // [rsp+D8h] [rbp-28h]
  _QWORD v74[20]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v75[28]; // [rsp+190h] [rbp+90h] BYREF

  v69 = a6;
  v8 = Object;
  v59 = a3;
  Objecta = Object;
  v68 = a7;
  v61 = a4;
  memset_0(v75, 0, sizeof(v75));
  memset_0(v74, 0, sizeof(v74));
  v10 = *((_QWORD *)v8 - 2);
  v11 = (__int64)(v8 - 48);
  v12 = 0LL;
  v13 = 0LL;
  v14 = (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v8 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v8 - 48) >> 8)];
  if ( (*(v8 - 22) & 2) != 0 )
  {
    v15 = ObpInfoMaskToOffset[*(v8 - 22) & 3];
    if ( v11 != v15 )
      v13 = v11 - v15 + 8;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v58 = PreviousMode;
  if ( (v14->TypeInfo.ObjectTypeFlags & 8) == 0 && !v13 && !*(_QWORD *)(v10 + 32) )
  {
    v17 = (__int64 *)v68;
    *(_QWORD *)(v11 + 32) = 0LL;
    if ( v17 )
    {
      v18 = v61 + 1;
      *v17 = 0LL;
      Handle = ObpCreateHandle(0, v8, v59, 0LL, v18, *(_DWORD *)v10, PreviousMode, 0LL, 0, v69, v17);
    }
    else
    {
      Handle = 0;
    }
    v20 = *(_QWORD *)(v10 + 32);
    if ( v20 )
    {
      LOBYTE(v12) = 1;
      SeReleaseSecurityDescriptor(v20, *(unsigned __int8 *)(v10 + 16), v12, v9);
      *(_QWORD *)(v10 + 32) = 0LL;
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
      RtlpInterlockedPushEntrySList(&L->ListHead, (PSLIST_ENTRY)v10);
    }
    else
    {
      ++L->FreeMisses;
      if ( (void (__stdcall *)(PVOID))L->FreeEx == ExFreePool )
        ExFreePool((PVOID)v10);
      else
        guard_dispatch_icall_no_overrides(v10);
    }
    ObfDereferenceObject(v8);
    return Handle;
  }
  if ( !AccessState )
  {
    CurrentThread = KeGetCurrentThread();
    AccessState = (PACCESS_STATE)v74;
    v67 = CurrentThread;
    v71 = 0LL;
    SecurityDescriptor = CurrentThread->ApcState.Process;
    v72 = *((_QWORD *)SecurityDescriptor + 58);
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v73 = KeGetCurrentThread();
      --v73->KernelApcDisable;
      BugCheckParameter2 = (ULONG_PTR)&CurrentThread[1].WaitBlockList;
      v45 = KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL);
      v46 = v45;
      v60 = v45;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx((signed __int64 *)BugCheckParameter2, 0, v45, BugCheckParameter2);
        v46 = v60;
      }
      if ( v46 )
        *((_BYTE *)v46 + 10) = 1;
      if ( (*(_DWORD *)(&v67[1].SwapListEntry + 1) & 8) != 0 )
      {
        v60 = (__int64 *)(*(_QWORD *)((char *)&v67[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v60, 0x75536553u);
        LODWORD(v71) = *((_DWORD *)&v67[1].0 + 1) & 3;
      }
      else
      {
        v60 = 0LL;
      }
      v47 = BugCheckParameter2;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
      {
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
        v47 = BugCheckParameter2;
      }
      KeAbPostRelease(v47);
      KeLeaveCriticalRegionThread((__int64)v73);
      v25 = v60;
    }
    else
    {
      v25 = 0LL;
      v60 = 0LL;
    }
    v70 = v25;
    v26 = PsReferencePrimaryTokenWithTag((__int64)SecurityDescriptor, 0x75536553u);
    *((_QWORD *)&v71 + 1) = v26;
    if ( SeTokenLeakTracking )
    {
      if ( v26 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v26 + 1144) + 284LL));
        if ( v26 == SepTokenLeakToken )
          __debugbreak();
        v57 = v70;
      }
      else
      {
        v57 = v60;
      }
      if ( v57 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v57[143] + 284));
        if ( v70 == (__int64 *)SepTokenLeakToken )
          __debugbreak();
      }
    }
    LODWORD(v60) = SepCreateAccessStateFromSubjectContext(
                     &v70,
                     v74,
                     v75,
                     v59,
                     &v14->TypeInfo.GenericMapping.GenericRead);
    if ( (int)v60 < 0 )
    {
      ObfDereferenceObject(v8);
      return (unsigned int)v60;
    }
  }
  v27 = *(void **)(v10 + 32);
  SecurityDescriptor = v27;
  AccessState->SecurityDescriptor = v27;
  if ( v27 )
  {
    if ( !RtlValidSecurityDescriptor(v27) )
    {
      ObfDereferenceObject(v8);
      if ( AccessState == (PACCESS_STATE)v74 )
        SeDeleteAccessState((__int64)AccessState);
      return 3221225593LL;
    }
    if ( (*((_BYTE *)SecurityDescriptor + 2) & 0x10) != 0 && (AccessState->PreviouslyGrantedAccess & 0x1000000) == 0 )
      AccessState->RemainingDesiredAccess |= SeObjectCreateSaclAccessBits(SecurityDescriptor);
  }
  if ( !v13 && ((v14->TypeInfo.ObjectTypeFlags & 8) != 0 || *(_QWORD *)(v10 + 32)) )
  {
    v28 = AccessState->SecurityDescriptor;
    Index[1] = 0;
    v59 = 0;
    P = 0LL;
    Index[0] = 8;
    v29 = SeComputeAutoInheritByObjectTypeEx((__int64)v14, (__int64)v28, 0LL, &v59, Index);
    if ( v29 < 0
      || (v59 |= 16 * (a5 & 1),
          v29 = SeAssignSecurityEx2(
                  0,
                  (int)AccessState->SecurityDescriptor,
                  (int)&P,
                  0LL,
                  v14 == ObpDirectoryObjectType,
                  v59,
                  Index,
                  (__int64)&AccessState->SubjectSecurityContext,
                  (__int64)&v14->TypeInfo.GenericMapping),
          v29 < 0) )
    {
      v30 = Objecta;
    }
    else
    {
      v30 = Objecta;
      if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v14->TypeInfo.SecurityProcedure == SeDefaultObjectMethod )
        v31 = SeDefaultObjectMethod(Objecta, 3LL, 0LL, P, 0LL);
      else
        v31 = guard_dispatch_icall_no_overrides(Objecta);
      v29 = v31;
      if ( v31 >= 0 )
        goto LABEL_30;
      if ( P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      if ( v29 >= 0 )
      {
LABEL_30:
        v32 = *(void **)(v10 + 32);
        if ( *(_BYTE *)(v10 + 16) <= 1u && v32 )
          ExFreePoolWithTag(v32, 0);
        PreviousMode = v58;
        *(_QWORD *)(v10 + 32) = 0LL;
        AccessState->SecurityDescriptor = 0LL;
        v8 = (char *)Objecta;
        goto LABEL_34;
      }
    }
    ObfDereferenceObject(v30);
    if ( AccessState == (PACCESS_STATE)v74 )
      SeDeleteAccessState((__int64)AccessState);
    return (unsigned int)v29;
  }
LABEL_34:
  v33 = (__int64 *)v68;
  *(_QWORD *)(v11 + 32) = 0LL;
  if ( v33 )
  {
    v34 = v61;
    *v33 = 0LL;
    v35 = v10;
    if ( !v13 )
      v35 = 0LL;
    v36 = ObpCreateHandle(0, v8, 0, (__int64)AccessState, v34 + 1, *(_DWORD *)v10, PreviousMode, v35, 0, v69, v33);
    ObfDereferenceObject(v8);
  }
  else
  {
    if ( AccessState != (PACCESS_STATE)v74 )
    {
      v54 = PreviousMode;
      if ( (*(_DWORD *)v10 & 0x400) != 0 )
        v54 = 1;
      v36 = ObpAdjustCreatorAccessState(AccessState, v54, v14, (__int64)v8);
      if ( v36 < 0 )
        goto LABEL_79;
    }
    v48 = KeGetCurrentThread();
    --v48->KernelApcDisable;
    v49 = KeAbPreAcquire(v11 + 16, 0LL);
    v50 = v49;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v11 + 16), v49, v11 + 16);
    if ( v50 )
      *((_BYTE *)v50 + 10) = 1;
    v36 = ObpChargeQuotaForObject(v11, (__int64)KeGetCurrentThread()->ApcState.Process, 0LL);
    _m_prefetchw((const void *)(v11 + 16));
    v51 = *(_QWORD *)(v11 + 16);
    v52 = v51 - 16;
    if ( (v51 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v52 = 0LL;
    if ( (v51 & 2) != 0
      || (v53 = *(_QWORD *)(v11 + 16),
          v53 != _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 16), v52, v51)) )
    {
      ExfReleasePushLock((_QWORD *)(v11 + 16));
    }
    KeAbPostRelease(v11 + 16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v36 < 0 )
LABEL_79:
      ObfDereferenceObject(v8);
  }
  v37 = *(void **)(v10 + 32);
  if ( v37 )
  {
    if ( *(_BYTE *)(v10 + 16) <= 1u )
      ExFreePoolWithTag(v37, 0);
    *(_QWORD *)(v10 + 32) = 0LL;
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
    RtlpInterlockedPushEntrySList(&v39->ListHead, (PSLIST_ENTRY)v10);
  }
  else
  {
    ++v39->FreeMisses;
    if ( (void (__stdcall *)(PVOID))v39->FreeEx == ExFreePool )
      ExFreePool((PVOID)v10);
    else
      guard_dispatch_icall_no_overrides(v10);
  }
  if ( AccessState == (PACCESS_STATE)v74 )
  {
    SepDeleteAccessState((__int64)AccessState);
    if ( SeTokenLeakTracking )
    {
      PrimaryToken = AccessState->SubjectSecurityContext.PrimaryToken;
      if ( PrimaryToken )
      {
        _InterlockedDecrement((volatile signed __int32 *)(PrimaryToken[143] + 284LL));
        if ( AccessState->SubjectSecurityContext.PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
          __debugbreak();
      }
      ClientToken = AccessState->SubjectSecurityContext.ClientToken;
      if ( ClientToken )
      {
        _InterlockedDecrement((volatile signed __int32 *)(ClientToken[143] + 284LL));
        if ( AccessState->SubjectSecurityContext.ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
          __debugbreak();
      }
    }
    v40 = (signed __int64)AccessState->SubjectSecurityContext.PrimaryToken;
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
    v44 = AccessState->SubjectSecurityContext.ClientToken;
    AccessState->SubjectSecurityContext.PrimaryToken = 0LL;
    if ( v44 )
      ObfDereferenceObjectWithTag(v44, 0x75536553u);
    AccessState->SubjectSecurityContext.ClientToken = 0LL;
  }
  return (unsigned int)v36;
}
