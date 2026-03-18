/*
 * XREFs of ObCreateObjectEx @ 0x14089C4F0
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x1406FCCC0 (HalpDmaAllocateChildAdapterV3.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140700A80 (HalpDmaAllocateChildAdapterV2.c)
 *     IoCreateController @ 0x140713DC0 (IoCreateController.c)
 *     NtCreateIoRing @ 0x140717160 (NtCreateIoRing.c)
 *     PopEtEnergyTrackerCreate @ 0x14075DC60 (PopEtEnergyTrackerCreate.c)
 *     TtmiCreateTerminal @ 0x14076F4E8 (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x1407707B4 (TtmiCreateEventQueue.c)
 *     NtCreateProcessStateChange @ 0x140775A70 (NtCreateProcessStateChange.c)
 *     PsCreateCpuPartition @ 0x14077643C (PsCreateCpuPartition.c)
 *     PspAllocatePartition @ 0x14077ABFC (PspAllocatePartition.c)
 *     PspSessionObjectCreate @ 0x14077BDCC (PspSessionObjectCreate.c)
 *     EtwpRegisterPrivateSession @ 0x1407AD42C (EtwpRegisterPrivateSession.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1407B3064 (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x1407C3C30 (ExpProfileCreate.c)
 *     NtCreateKeyedEvent @ 0x1407C51C0 (NtCreateKeyedEvent.c)
 *     CmpDoAccessCheckOnKCB @ 0x1407DB468 (CmpDoAccessCheckOnKCB.c)
 *     SepDuplicateToken @ 0x140856520 (SepDuplicateToken.c)
 *     AlpcpCreatePort @ 0x1408623B4 (AlpcpCreatePort.c)
 *     AlpcpCreateClientPort @ 0x1408649C0 (AlpcpCreateClientPort.c)
 *     PspAllocateThread @ 0x1408A49BC (PspAllocateThread.c)
 *     NtCreateJobObject @ 0x1408EAB60 (NtCreateJobObject.c)
 *     MiFinishCreateSection @ 0x140941784 (MiFinishCreateSection.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x140946D5C (PspSchedulerSharedDataRegionCreate.c)
 *     IoCreateDevice @ 0x1409A3530 (IoCreateDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1409A4390 (IoCreateStreamFileObjectEx2.c)
 *     NtCreateWorkerFactory @ 0x1409A6CF0 (NtCreateWorkerFactory.c)
 *     IopLoadDriver @ 0x1409C90C0 (IopLoadDriver.c)
 *     WmipCreateGuidObject @ 0x1409CBCD8 (WmipCreateGuidObject.c)
 *     PsCreateSiloContext @ 0x1409E1F90 (PsCreateSiloContext.c)
 *     AlpcpAcceptConnectPort @ 0x1409F4F00 (AlpcpAcceptConnectPort.c)
 *     NtCreateTimer @ 0x1409F7110 (NtCreateTimer.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1409FE37C (VrpHandleIoctlInitializeJobForVreg.c)
 *     NtCreatePrivateNamespace @ 0x140A09670 (NtCreatePrivateNamespace.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 *     NtCreateTimer2 @ 0x140A20AE0 (NtCreateTimer2.c)
 *     NtCreateIoCompletion @ 0x140A22900 (NtCreateIoCompletion.c)
 *     ObCreateSymbolicLink @ 0x140A29CE8 (ObCreateSymbolicLink.c)
 *     ObpCreateDirectoryObject @ 0x140A45710 (ObpCreateDirectoryObject.c)
 *     NtCreateRegistryTransaction @ 0x140A4C5C0 (NtCreateRegistryTransaction.c)
 *     NtAllocateReserveObject @ 0x140A51690 (NtAllocateReserveObject.c)
 *     EtwpRealtimeConnect @ 0x140A5EC30 (EtwpRealtimeConnect.c)
 *     NtCreateThreadStateChange @ 0x140A5FDF0 (NtCreateThreadStateChange.c)
 *     ExCreateCallback @ 0x140A64310 (ExCreateCallback.c)
 *     EtwpCreateUmReplyObject @ 0x140A762A0 (EtwpCreateUmReplyObject.c)
 *     PspCreateActivityReference @ 0x140A77250 (PspCreateActivityReference.c)
 *     NtCreateDebugObject @ 0x140AA9F00 (NtCreateDebugObject.c)
 *     IoCreateDriver @ 0x140AB1C90 (IoCreateDriver.c)
 *     NtCreateWaitCompletionPacket @ 0x140AC3670 (NtCreateWaitCompletionPacket.c)
 *     SepFilterToken @ 0x140AD2664 (SepFilterToken.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     RtlEqualSid @ 0x140364150 (RtlEqualSid.c)
 *     SepPrivilegeCheck @ 0x140403670 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140853560 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ObpAllocateObject @ 0x14089B290 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x14089CCA0 (ObpCaptureObjectCreateInformation.c)
 *     ObpRegisterObject @ 0x140AB735C (ObpRegisterObject.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObCreateObjectEx(
        unsigned __int8 a1,
        _DWORD *a2,
        int a3,
        unsigned __int8 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        _QWORD *a9,
        _BYTE *a10)
{
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int8 v12; // r13
  _GENERAL_LOOKASIDE *P; // rbx
  struct _SLIST_ENTRY *v16; // rdi
  _GENERAL_LOOKASIDE *L; // rbx
  __int64 v18; // r9
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  struct _KPRCB *v22; // rdx
  int Information; // ebx
  signed __int64 v24; // r8
  __int64 LowPart; // r9
  int v26; // eax
  int v27; // ecx
  struct _KPRCB *v28; // rdx
  _GENERAL_LOOKASIDE *v29; // rcx
  _SLIST_ENTRY *Next; // rcx
  _GENERAL_LOOKASIDE *v31; // rcx
  LUID v33; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // r13
  void *v36; // r12
  _QWORD *v37; // rax
  _QWORD *PrimaryToken; // r13
  _QWORD *ClientToken; // rsi
  unsigned int v40; // r12d
  char v41; // r15
  _QWORD *v42; // rcx
  void *v43; // rbx
  _KPROCESS *v44; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v46; // rtt
  struct _KPRCB *v47; // rax
  _QWORD *v48; // r12
  signed __int64 *v49; // rsi
  __int64 v50; // rdi
  int v51; // r10d
  LUID *v52; // rdx
  __int64 v53; // r9
  __int64 **v54; // rcx
  __int64 *v55; // rax
  LUID *v56; // rcx
  __int64 v57; // r8
  LUID **v58; // rdx
  LUID *v59; // rax
  void (__stdcall *FreeEx)(PVOID); // rax
  struct _SECURITY_SUBJECT_CONTEXT Object; // [rsp+48h] [rbp-71h] BYREF
  PSE_EXPORTS v63; // [rsp+68h] [rbp-51h]
  PSLIST_ENTRY ListEntry[2]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v65; // [rsp+80h] [rbp-39h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-31h]
  _QWORD *v67; // [rsp+90h] [rbp-29h]
  unsigned int v68[2]; // [rsp+A0h] [rbp-19h] BYREF
  LUID v69; // [rsp+A8h] [rbp-11h] BYREF
  int v70; // [rsp+B0h] [rbp-9h]

  CurrentPrcb = KeGetCurrentPrcb();
  v67 = a9;
  v12 = a4;
  P = CurrentPrcb->PPLookasideList[4].P;
  v65 = 0LL;
  *(_OWORD *)ListEntry = 0LL;
  ++P->TotalAllocates;
  v16 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v16 )
    goto LABEL_4;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[4].L;
  ++L->TotalAllocates;
  v16 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v16
    || (Size = L->Size,
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v16 = (struct _SLIST_ENTRY *)guard_dispatch_icall_no_overrides(Type, Size, Tag, v18)) != 0LL) )
  {
LABEL_4:
    LODWORD(v16->Next) = CurrentPrcb->Number;
  }
  if ( v16 )
  {
    Information = ObpCaptureObjectCreateInformation(a1, v12, a3, (unsigned int)ListEntry, (__int64)v16, 0);
    if ( Information < 0 )
    {
      v47 = KeGetCurrentPrcb();
      v24 = (signed __int64)v47->PPLookasideList[4].P;
      ++*(_DWORD *)(v24 + 28);
      if ( *(_WORD *)v24 >= *(_WORD *)(v24 + 16) )
      {
        ++*(_DWORD *)(v24 + 32);
        v24 = (signed __int64)v47->PPLookasideList[4].L;
        ++*(_DWORD *)(v24 + 28);
        if ( *(_WORD *)v24 >= *(_WORD *)(v24 + 16) )
        {
          ++*(_DWORD *)(v24 + 32);
          FreeEx = *(void (__stdcall **)(PVOID))(v24 + 56);
LABEL_83:
          if ( FreeEx == ExFreePool )
            ExFreePool(v16);
          else
            guard_dispatch_icall_no_overrides(v16, v22, v24, LowPart);
          return (unsigned int)Information;
        }
      }
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)v24, v16);
      return (unsigned int)Information;
    }
    if ( ((__int64)v16->Next & a2[18]) != 0 )
    {
      Information = -1073741811;
      goto LABEL_14;
    }
    if ( ((__int64)v16->Next & 0x10) == 0 )
      goto LABEL_9;
    v33 = SeCreatePermanentPrivilege;
    *(_OWORD *)&Object.ImpersonationLevel = 0LL;
    CurrentThread = KeGetCurrentThread();
    Process = (__int64)CurrentThread->ApcState.Process;
    Object.ProcessAuditId = *(PVOID *)(Process + 464);
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v63 = (PSE_EXPORTS)KeGetCurrentThread();
      --WORD2(v63->SeLowMandatorySid);
      BugCheckParameter2 = (ULONG_PTR)&CurrentThread[1].WaitBlockList;
      v48 = KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(
          (signed __int64 *)&CurrentThread[1].WaitBlockList,
          0,
          v48,
          (__int64)&CurrentThread[1].WaitBlockList);
      if ( v48 )
        *((_BYTE *)v48 + 10) = 1;
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v36 = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v36, 0x75536553u);
        Object.ImpersonationLevel = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
      }
      else
      {
        v36 = 0LL;
      }
      v49 = (signed __int64 *)BugCheckParameter2;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v49);
      KeAbPostRelease((ULONG_PTR)v49);
      KeLeaveCriticalRegionThread();
    }
    else
    {
      v36 = 0LL;
    }
    Object.ClientToken = v36;
    v37 = (_QWORD *)PsReferencePrimaryTokenWithTag(Process, 0x75536553u);
    PrimaryToken = v37;
    Object.PrimaryToken = v37;
    if ( SeTokenLeakTracking )
    {
      if ( v37 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v37[143] + 284LL));
        PrimaryToken = Object.PrimaryToken;
        if ( Object.PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
          __debugbreak();
      }
      ClientToken = Object.ClientToken;
      if ( Object.ClientToken )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)Object.ClientToken + 143) + 284LL));
        ClientToken = Object.ClientToken;
        if ( Object.ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
          __debugbreak();
        PrimaryToken = Object.PrimaryToken;
      }
    }
    else
    {
      ClientToken = Object.ClientToken;
    }
    v40 = 1;
    v69 = v33;
    v68[0] = 1;
    v68[1] = 1;
    v70 = 0;
    if ( !a1 )
    {
      v41 = 1;
LABEL_36:
      if ( SeTokenLeakTracking )
      {
        if ( PrimaryToken )
        {
          _InterlockedDecrement((volatile signed __int32 *)(PrimaryToken[143] + 284LL));
          if ( Object.PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
            __debugbreak();
          ClientToken = Object.ClientToken;
        }
        if ( ClientToken )
        {
          _InterlockedDecrement((volatile signed __int32 *)(ClientToken[143] + 284LL));
          if ( Object.ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
            __debugbreak();
        }
      }
      v24 = (signed __int64)Object.PrimaryToken;
      v44 = KeGetCurrentThread()->ApcState.Process;
      _m_prefetchw(&v44[1].ActiveProcessors);
      ActiveProcessors = (signed __int64)v44[1].ActiveProcessors;
      do
      {
        if ( (v24 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
        {
          ObfDereferenceObjectWithTag((PVOID)v24, 0x75536553u);
          goto LABEL_42;
        }
        v46 = ActiveProcessors;
        ActiveProcessors = _InterlockedCompareExchange64(
                             (volatile signed __int64 *)&v44[1].ActiveProcessors,
                             ActiveProcessors + 1,
                             ActiveProcessors);
      }
      while ( v46 != ActiveProcessors );
      if ( ObpTraceFlags )
        ObpPushStackInfo(v24 - 48, 0, 1u, 0x75536553u);
LABEL_42:
      Object.PrimaryToken = 0LL;
      if ( Object.ClientToken )
        ObfDereferenceObjectWithTag(Object.ClientToken, 0x75536553u);
      if ( v41 )
      {
        v12 = a4;
LABEL_9:
        v26 = a7;
        if ( !a7 )
          v26 = a2[26];
        v27 = a8;
        if ( !a8 )
          v27 = a2[27];
        HIDWORD(v16[1].Next) = v26;
        *((_DWORD *)&v16[1].Next + 2) = v27;
        Information = ObpAllocateObject(v16, v12, (__int64)a2, ListEntry, a6, &v65, a10);
        if ( Information >= 0 )
        {
          v50 = v65;
          if ( ObpTraceFlags )
          {
            ObpRegisterObject(v65);
            ObpPushStackInfo(v50, 1, 1u, 0x746C6644u);
          }
          *v67 = v50 + 48;
          return (unsigned int)Information;
        }
        goto LABEL_14;
      }
      Information = -1073741727;
LABEL_14:
      if ( ListEntry[1] )
      {
        if ( WORD1(ListEntry[0]) == 248 )
        {
          v28 = KeGetCurrentPrcb();
          v29 = v28->PPLookasideList[5].P;
          ++v29->TotalFrees;
          if ( LOWORD(v29->ListHead.Alignment) < v29->Depth
            || (++v29->FreeMisses,
                v29 = v28->PPLookasideList[5].L,
                ++v29->TotalFrees,
                LOWORD(v29->ListHead.Alignment) < v29->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v29->ListHead, ListEntry[1]);
          }
          else
          {
            ++v29->FreeMisses;
            if ( (void (__stdcall *)(PVOID))v29->FreeEx == ExFreePool )
              ExFreePool(ListEntry[1]);
            else
              guard_dispatch_icall_no_overrides(ListEntry[1], v28, v24, LowPart);
          }
        }
        else
        {
          ExFreePoolWithTag(ListEntry[1], 0);
        }
      }
      Next = v16[2].Next;
      if ( Next )
      {
        if ( LOBYTE(v16[1].Next) <= 1u )
          ExFreePoolWithTag(Next, 0);
        v16[2].Next = 0LL;
      }
      v22 = KeGetCurrentPrcb();
      v31 = v22->PPLookasideList[4].P;
      ++v31->TotalFrees;
      if ( LOWORD(v31->ListHead.Alignment) >= v31->Depth )
      {
        ++v31->FreeMisses;
        v31 = v22->PPLookasideList[4].L;
        ++v31->TotalFrees;
        if ( LOWORD(v31->ListHead.Alignment) >= v31->Depth )
        {
          ++v31->FreeMisses;
          FreeEx = (void (__stdcall *)(PVOID))v31->FreeEx;
          goto LABEL_83;
        }
      }
      RtlpInterlockedPushEntrySList(&v31->ListHead, v16);
      return (unsigned int)Information;
    }
    if ( ClientToken )
    {
      if ( Object.ImpersonationLevel < SecurityImpersonation )
      {
        v41 = 0;
        goto LABEL_33;
      }
    }
    else
    {
      ClientToken = PrimaryToken;
    }
    PrimaryToken = Object.PrimaryToken;
    v41 = SepPrivilegeCheck((__int64)ClientToken, (__int64)&v69, 1u, 1, a1);
    ClientToken = Object.ClientToken;
    v40 = v68[0];
LABEL_33:
    v42 = PrimaryToken;
    if ( ClientToken )
      v42 = ClientToken;
    v43 = *(void **)v42[19];
    if ( !RtlEqualSid(SeLocalSystemSid, v43) )
    {
      v63 = SeExports;
      if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, v43) && !RtlEqualSid(v63->SeLocalServiceSid, v43) )
        goto LABEL_51;
      v51 = 0;
      if ( v40 )
      {
        v52 = &v69;
        v53 = v40;
        do
        {
          v54 = SepFilterPrivileges;
          v55 = *SepFilterPrivileges;
          while ( v52->LowPart != *(_DWORD *)v55 || v52->HighPart != *((_DWORD *)v55 + 1) )
          {
            v55 = v54[1];
            ++v54;
            if ( !v55 )
              goto LABEL_73;
          }
          ++v51;
LABEL_73:
          v52 = (LUID *)((char *)v52 + 12);
          --v53;
        }
        while ( v53 );
        v56 = &v69;
        v57 = v40;
        do
        {
          LowPart = v56->LowPart;
          v58 = &SepServicesFilterPrivileges;
          v59 = SepServicesFilterPrivileges;
          while ( *v56 != *v59 )
          {
            v59 = v58[1];
            ++v58;
            if ( !v59 )
              goto LABEL_78;
          }
          ++v51;
LABEL_78:
          v56 = (LUID *)((char *)v56 + 12);
          --v57;
        }
        while ( v57 );
        if ( v51 != v40 )
        {
LABEL_51:
          SepAdtPrivilegedServiceAuditAlarm(
            &Object,
            &SeSubsystemName,
            0LL,
            (__int64)ClientToken,
            (__int64)PrimaryToken,
            v68,
            v41);
          PrimaryToken = Object.PrimaryToken;
          ClientToken = Object.ClientToken;
        }
      }
    }
    goto LABEL_36;
  }
  return 3221225626LL;
}
