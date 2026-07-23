/*
 * XREFs of ObCreateObjectEx @ 0x1408A4B90
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x1406FA900 (HalpDmaAllocateChildAdapterV3.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x1406FE6C0 (HalpDmaAllocateChildAdapterV2.c)
 *     IoCreateController @ 0x140711950 (IoCreateController.c)
 *     NtCreateIoRing @ 0x140714CF0 (NtCreateIoRing.c)
 *     PopEtEnergyTrackerCreate @ 0x14075CC00 (PopEtEnergyTrackerCreate.c)
 *     TtmiCreateTerminal @ 0x14076F708 (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x1407709D4 (TtmiCreateEventQueue.c)
 *     NtCreateProcessStateChange @ 0x140775C90 (NtCreateProcessStateChange.c)
 *     PsCreateCpuPartition @ 0x14077665C (PsCreateCpuPartition.c)
 *     PspAllocatePartition @ 0x14077AAAC (PspAllocatePartition.c)
 *     PspSessionObjectCreate @ 0x14077BC7C (PspSessionObjectCreate.c)
 *     EtwpRegisterPrivateSession @ 0x1407AD880 (EtwpRegisterPrivateSession.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1407B34B4 (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x1407C1A4C (ExpProfileCreate.c)
 *     NtCreateKeyedEvent @ 0x1407C5620 (NtCreateKeyedEvent.c)
 *     CmpDoAccessCheckOnKCB @ 0x1407DB9B8 (CmpDoAccessCheckOnKCB.c)
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     NtCreateJobObject @ 0x14085C390 (NtCreateJobObject.c)
 *     AlpcpCreatePort @ 0x1408669C4 (AlpcpCreatePort.c)
 *     AlpcpCreateClientPort @ 0x140868FD0 (AlpcpCreateClientPort.c)
 *     IoCreateDevice @ 0x1408ABEC0 (IoCreateDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1408AD120 (IoCreateStreamFileObjectEx2.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x1408EB67C (PspSchedulerSharedDataRegionCreate.c)
 *     PspAllocateThread @ 0x1408FAFD4 (PspAllocateThread.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 *     MiFinishCreateSection @ 0x14098B9F0 (MiFinishCreateSection.c)
 *     NtCreateWorkerFactory @ 0x1409901C0 (NtCreateWorkerFactory.c)
 *     WmipCreateGuidObject @ 0x1409B4758 (WmipCreateGuidObject.c)
 *     IopLoadDriver @ 0x1409B6EEC (IopLoadDriver.c)
 *     PsCreateSiloContext @ 0x1409DBD40 (PsCreateSiloContext.c)
 *     NtCreateTimer @ 0x1409EADF0 (NtCreateTimer.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1409F75EC (VrpHandleIoctlInitializeJobForVreg.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 *     NtCreatePrivateNamespace @ 0x140A05BA0 (NtCreatePrivateNamespace.c)
 *     NtCreateTimer2 @ 0x140A16910 (NtCreateTimer2.c)
 *     NtCreateIoCompletion @ 0x140A16D10 (NtCreateIoCompletion.c)
 *     ObCreateSymbolicLink @ 0x140A1E6A8 (ObCreateSymbolicLink.c)
 *     ObpCreateDirectoryObject @ 0x140A3B2C0 (ObpCreateDirectoryObject.c)
 *     NtCreateRegistryTransaction @ 0x140A43150 (NtCreateRegistryTransaction.c)
 *     NtAllocateReserveObject @ 0x140A48760 (NtAllocateReserveObject.c)
 *     EtwpRealtimeConnect @ 0x140A56DA8 (EtwpRealtimeConnect.c)
 *     NtCreateThreadStateChange @ 0x140A58340 (NtCreateThreadStateChange.c)
 *     ExCreateCallback @ 0x140A5CC10 (ExCreateCallback.c)
 *     EtwpCreateUmReplyObject @ 0x140A703BC (EtwpCreateUmReplyObject.c)
 *     PspCreateActivityReference @ 0x140A71370 (PspCreateActivityReference.c)
 *     NtCreateDebugObject @ 0x140AA4FB0 (NtCreateDebugObject.c)
 *     IoCreateDriver @ 0x140AACC00 (IoCreateDriver.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     SepPrivilegeCheck @ 0x1403FE430 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14084F820 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ObpAllocateObject @ 0x1408A3930 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x1408A5340 (ObpCaptureObjectCreateInformation.c)
 *     ObpRegisterObject @ 0x140AB162C (ObpRegisterObject.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  _SLIST_ENTRY *v16; // rdi
  _GENERAL_LOOKASIDE *L; // rbx
  __int64 Size; // rdx
  __int64 Type; // rcx
  struct _KPRCB *v20; // rdx
  int Information; // ebx
  int v22; // eax
  int v23; // ecx
  struct _KPRCB *v24; // rdx
  _GENERAL_LOOKASIDE *v25; // rcx
  _SLIST_ENTRY *Next; // rcx
  _GENERAL_LOOKASIDE *v27; // rcx
  LUID v29; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // r13
  void *v32; // r12
  _QWORD *v33; // rax
  _QWORD *PrimaryToken; // r13
  _QWORD *ClientToken; // rsi
  unsigned int v36; // r12d
  char v37; // r15
  _QWORD *v38; // rcx
  void *v39; // rbx
  signed __int64 v40; // r8
  _KPROCESS *v41; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v43; // rtt
  struct _KPRCB *v44; // rax
  _GENERAL_LOOKASIDE *v45; // r8
  char *v46; // r12
  signed __int64 *v47; // rsi
  __int64 v48; // rdi
  int v49; // r10d
  LUID *v50; // rdx
  __int64 v51; // r9
  __int64 **v52; // rcx
  __int64 *v53; // rax
  LUID *v54; // rcx
  __int64 v55; // r8
  LUID **v56; // rdx
  LUID *v57; // rax
  void (__stdcall *FreeEx)(PVOID); // rax
  struct _SECURITY_SUBJECT_CONTEXT Object; // [rsp+48h] [rbp-71h] BYREF
  PSE_EXPORTS v61; // [rsp+68h] [rbp-51h]
  PSLIST_ENTRY ListEntry[2]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v63; // [rsp+80h] [rbp-39h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-31h]
  _QWORD *v65; // [rsp+90h] [rbp-29h]
  unsigned int v66[2]; // [rsp+A0h] [rbp-19h] BYREF
  LUID v67; // [rsp+A8h] [rbp-11h] BYREF
  int v68; // [rsp+B0h] [rbp-9h]

  CurrentPrcb = KeGetCurrentPrcb();
  v65 = a9;
  v12 = a4;
  P = CurrentPrcb->PPLookasideList[4].P;
  v63 = 0LL;
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
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v16 = (_SLIST_ENTRY *)guard_dispatch_icall_no_overrides(Type, Size)) != 0LL) )
  {
LABEL_4:
    LODWORD(v16->Next) = CurrentPrcb->Number;
  }
  if ( v16 )
  {
    Information = ObpCaptureObjectCreateInformation(a1, v12, a3, (unsigned int)ListEntry, (__int64)v16, 0);
    if ( Information < 0 )
    {
      v44 = KeGetCurrentPrcb();
      v45 = v44->PPLookasideList[4].P;
      ++v45->TotalFrees;
      if ( LOWORD(v45->ListHead.Alignment) >= v45->Depth )
      {
        ++v45->FreeMisses;
        v45 = v44->PPLookasideList[4].L;
        ++v45->TotalFrees;
        if ( LOWORD(v45->ListHead.Alignment) >= v45->Depth )
        {
          ++v45->FreeMisses;
          FreeEx = (void (__stdcall *)(PVOID))v45->FreeEx;
LABEL_83:
          if ( FreeEx == ExFreePool )
            ExFreePool(v16);
          else
            guard_dispatch_icall_no_overrides(v16, v20);
          return (unsigned int)Information;
        }
      }
      RtlpInterlockedPushEntrySList(&v45->ListHead, v16);
      return (unsigned int)Information;
    }
    if ( ((__int64)v16->Next & a2[18]) != 0 )
    {
      Information = -1073741811;
      goto LABEL_14;
    }
    if ( ((__int64)v16->Next & 0x10) == 0 )
      goto LABEL_9;
    v29 = SeCreatePermanentPrivilege;
    *(_OWORD *)&Object.ImpersonationLevel = 0LL;
    CurrentThread = KeGetCurrentThread();
    Process = (__int64)CurrentThread->ApcState.Process;
    Object.ProcessAuditId = *(PVOID *)(Process + 464);
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v61 = (PSE_EXPORTS)KeGetCurrentThread();
      --WORD2(v61->SeLowMandatorySid);
      BugCheckParameter2 = (ULONG_PTR)&CurrentThread[1].WaitBlockList;
      v46 = (char *)KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(
          (signed __int64 *)&CurrentThread[1].WaitBlockList,
          0,
          v46,
          (__int64)&CurrentThread[1].WaitBlockList);
      if ( v46 )
        v46[10] = 1;
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v32 = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v32, 0x75536553u);
        Object.ImpersonationLevel = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
      }
      else
      {
        v32 = 0LL;
      }
      v47 = (signed __int64 *)BugCheckParameter2;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v47);
      KeAbPostRelease((ULONG_PTR)v47);
      KeLeaveCriticalRegionThread();
    }
    else
    {
      v32 = 0LL;
    }
    Object.ClientToken = v32;
    v33 = (_QWORD *)PsReferencePrimaryTokenWithTag(Process, 0x75536553u);
    PrimaryToken = v33;
    Object.PrimaryToken = v33;
    if ( SeTokenLeakTracking )
    {
      if ( v33 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v33[143] + 284LL));
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
    v36 = 1;
    v67 = v29;
    v66[0] = 1;
    v66[1] = 1;
    v68 = 0;
    if ( !a1 )
    {
      v37 = 1;
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
      v40 = (signed __int64)Object.PrimaryToken;
      v41 = KeGetCurrentThread()->ApcState.Process;
      _m_prefetchw(&v41[1].ActiveProcessors);
      ActiveProcessors = (signed __int64)v41[1].ActiveProcessors;
      do
      {
        if ( (v40 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
        {
          ObfDereferenceObjectWithTag((PVOID)v40, 0x75536553u);
          goto LABEL_42;
        }
        v43 = ActiveProcessors;
        ActiveProcessors = _InterlockedCompareExchange64(
                             (volatile signed __int64 *)&v41[1].ActiveProcessors,
                             ActiveProcessors + 1,
                             ActiveProcessors);
      }
      while ( v43 != ActiveProcessors );
      if ( ObpTraceFlags )
        ObpPushStackInfo(v40 - 48, 0, 1u, 0x75536553u);
LABEL_42:
      Object.PrimaryToken = 0LL;
      if ( Object.ClientToken )
        ObfDereferenceObjectWithTag(Object.ClientToken, 0x75536553u);
      if ( v37 )
      {
        v12 = a4;
LABEL_9:
        v22 = a7;
        if ( !a7 )
          v22 = a2[26];
        v23 = a8;
        if ( !a8 )
          v23 = a2[27];
        HIDWORD(v16[1].Next) = v22;
        *((_DWORD *)&v16[1].Next + 2) = v23;
        Information = ObpAllocateObject(v16, v12, (__int64)a2, ListEntry, a6, &v63, a10);
        if ( Information >= 0 )
        {
          v48 = v63;
          if ( ObpTraceFlags )
          {
            ObpRegisterObject(v63);
            ObpPushStackInfo(v48, 1, 1u, 0x746C6644u);
          }
          *v65 = v48 + 48;
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
          v24 = KeGetCurrentPrcb();
          v25 = v24->PPLookasideList[5].P;
          ++v25->TotalFrees;
          if ( LOWORD(v25->ListHead.Alignment) < v25->Depth
            || (++v25->FreeMisses,
                v25 = v24->PPLookasideList[5].L,
                ++v25->TotalFrees,
                LOWORD(v25->ListHead.Alignment) < v25->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v25->ListHead, ListEntry[1]);
          }
          else
          {
            ++v25->FreeMisses;
            if ( (void (__stdcall *)(PVOID))v25->FreeEx == ExFreePool )
              ExFreePool(ListEntry[1]);
            else
              guard_dispatch_icall_no_overrides(ListEntry[1], v24);
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
      v20 = KeGetCurrentPrcb();
      v27 = v20->PPLookasideList[4].P;
      ++v27->TotalFrees;
      if ( LOWORD(v27->ListHead.Alignment) >= v27->Depth )
      {
        ++v27->FreeMisses;
        v27 = v20->PPLookasideList[4].L;
        ++v27->TotalFrees;
        if ( LOWORD(v27->ListHead.Alignment) >= v27->Depth )
        {
          ++v27->FreeMisses;
          FreeEx = (void (__stdcall *)(PVOID))v27->FreeEx;
          goto LABEL_83;
        }
      }
      RtlpInterlockedPushEntrySList(&v27->ListHead, v16);
      return (unsigned int)Information;
    }
    if ( ClientToken )
    {
      if ( Object.ImpersonationLevel < SecurityImpersonation )
      {
        v37 = 0;
        goto LABEL_33;
      }
    }
    else
    {
      ClientToken = PrimaryToken;
    }
    PrimaryToken = Object.PrimaryToken;
    v37 = SepPrivilegeCheck((__int64)ClientToken, (__int64)&v67, 1u, 1, a1);
    ClientToken = Object.ClientToken;
    v36 = v66[0];
LABEL_33:
    v38 = PrimaryToken;
    if ( ClientToken )
      v38 = ClientToken;
    v39 = *(void **)v38[19];
    if ( !RtlEqualSid(SeLocalSystemSid, v39) )
    {
      v61 = SeExports;
      if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, v39) && !RtlEqualSid(v61->SeLocalServiceSid, v39) )
        goto LABEL_51;
      v49 = 0;
      if ( v36 )
      {
        v50 = &v67;
        v51 = v36;
        do
        {
          v52 = SepFilterPrivileges;
          v53 = *SepFilterPrivileges;
          while ( v50->LowPart != *(_DWORD *)v53 || v50->HighPart != *((_DWORD *)v53 + 1) )
          {
            v53 = v52[1];
            ++v52;
            if ( !v53 )
              goto LABEL_73;
          }
          ++v49;
LABEL_73:
          v50 = (LUID *)((char *)v50 + 12);
          --v51;
        }
        while ( v51 );
        v54 = &v67;
        v55 = v36;
        do
        {
          v56 = &SepServicesFilterPrivileges;
          v57 = SepServicesFilterPrivileges;
          while ( v54->LowPart != v57->LowPart || v54->HighPart != v57->HighPart )
          {
            v57 = v56[1];
            ++v56;
            if ( !v57 )
              goto LABEL_78;
          }
          ++v49;
LABEL_78:
          v54 = (LUID *)((char *)v54 + 12);
          --v55;
        }
        while ( v55 );
        if ( v49 != v36 )
        {
LABEL_51:
          SepAdtPrivilegedServiceAuditAlarm(
            &Object,
            &SeSubsystemName,
            0LL,
            (__int64)ClientToken,
            (__int64)PrimaryToken,
            v66,
            v37);
          PrimaryToken = Object.PrimaryToken;
          ClientToken = Object.ClientToken;
        }
      }
    }
    goto LABEL_36;
  }
  return 3221225626LL;
}
