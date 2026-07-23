/*
 * XREFs of ObCreateObjectEx @ 0x14085BE20
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x1406F0ED0 (HalpDmaAllocateChildAdapterV3.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x1406F4C90 (HalpDmaAllocateChildAdapterV2.c)
 *     IoCreateController @ 0x140707CC0 (IoCreateController.c)
 *     NtCreateIoRing @ 0x14070B060 (NtCreateIoRing.c)
 *     PopEtEnergyTrackerCreate @ 0x140751240 (PopEtEnergyTrackerCreate.c)
 *     TtmiCreateTerminal @ 0x14075FB28 (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x140760DF4 (TtmiCreateEventQueue.c)
 *     NtCreateProcessStateChange @ 0x1407660A0 (NtCreateProcessStateChange.c)
 *     PsCreateCpuPartition @ 0x140766A6C (PsCreateCpuPartition.c)
 *     PspAllocatePartition @ 0x14076B05C (PspAllocatePartition.c)
 *     PspSessionObjectCreate @ 0x14076C22C (PspSessionObjectCreate.c)
 *     EtwpRegisterPrivateSession @ 0x14079E05C (EtwpRegisterPrivateSession.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1407A3C94 (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x1407B1E2C (ExpProfileCreate.c)
 *     NtCreateKeyedEvent @ 0x1407B2A40 (NtCreateKeyedEvent.c)
 *     CmpDoAccessCheckOnKCB @ 0x1407CBCA8 (CmpDoAccessCheckOnKCB.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x1408BA4BC (PspSchedulerSharedDataRegionCreate.c)
 *     NtCreateJobObject @ 0x1408DB4B0 (NtCreateJobObject.c)
 *     PspAllocateThread @ 0x1408F2828 (PspAllocateThread.c)
 *     AlpcpCreateClientPort @ 0x140916890 (AlpcpCreateClientPort.c)
 *     MiFinishCreateSection @ 0x14093CE8C (MiFinishCreateSection.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x14094B860 (VrpHandleIoctlInitializeJobForVreg.c)
 *     SepFilterToken @ 0x140997EFC (SepFilterToken.c)
 *     IoCreateDevice @ 0x14099E640 (IoCreateDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14099F4B0 (IoCreateStreamFileObjectEx2.c)
 *     NtCreateWorkerFactory @ 0x1409A67B0 (NtCreateWorkerFactory.c)
 *     IopLoadDriver @ 0x1409B0D50 (IopLoadDriver.c)
 *     WmipCreateGuidObject @ 0x1409B3958 (WmipCreateGuidObject.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 *     AlpcpCreatePort @ 0x1409E01E8 (AlpcpCreatePort.c)
 *     PsCreateSiloContext @ 0x1409E3340 (PsCreateSiloContext.c)
 *     NtCreateMutant @ 0x1409F51C0 (NtCreateMutant.c)
 *     AlpcpAcceptConnectPort @ 0x1409F5B30 (AlpcpAcceptConnectPort.c)
 *     NtCreateWaitCompletionPacket @ 0x1409FAE20 (NtCreateWaitCompletionPacket.c)
 *     NtCreateTimer @ 0x1409FAF30 (NtCreateTimer.c)
 *     NtCreatePrivateNamespace @ 0x140A06400 (NtCreatePrivateNamespace.c)
 *     NtCreateTimer2 @ 0x140A16540 (NtCreateTimer2.c)
 *     NtCreateIoCompletion @ 0x140A182B0 (NtCreateIoCompletion.c)
 *     ObCreateSymbolicLink @ 0x140A201A8 (ObCreateSymbolicLink.c)
 *     ObpCreateDirectoryObject @ 0x140A41B20 (ObpCreateDirectoryObject.c)
 *     NtCreateRegistryTransaction @ 0x140A4ADE0 (NtCreateRegistryTransaction.c)
 *     NtAllocateReserveObject @ 0x140A4E490 (NtAllocateReserveObject.c)
 *     NtCreateThreadStateChange @ 0x140A5DB20 (NtCreateThreadStateChange.c)
 *     EtwpRealtimeConnect @ 0x140A5E498 (EtwpRealtimeConnect.c)
 *     ExCreateCallback @ 0x140A62280 (ExCreateCallback.c)
 *     EtwpCreateUmReplyObject @ 0x140A74164 (EtwpCreateUmReplyObject.c)
 *     PspCreateActivityReference @ 0x140A74EC0 (PspCreateActivityReference.c)
 *     NtCreateDebugObject @ 0x140AA4F70 (NtCreateDebugObject.c)
 *     IoCreateDriver @ 0x140AACA20 (IoCreateDriver.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     RtlEqualSid @ 0x14036A6E0 (RtlEqualSid.c)
 *     SepPrivilegeCheck @ 0x140400B10 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ObpAllocateObject @ 0x14085AAF0 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x14085C5F0 (ObpCaptureObjectCreateInformation.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14089FC40 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ObpRegisterObject @ 0x140AB24BC (ObpRegisterObject.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  _GENERAL_LOOKASIDE *P; // rbx
  _SLIST_ENTRY *v16; // rdi
  int Information; // ebx
  int v18; // eax
  int v19; // ecx
  struct _KPRCB *v20; // rdx
  _GENERAL_LOOKASIDE *v21; // rcx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v23; // rdx
  _GENERAL_LOOKASIDE *v24; // rcx
  LUID v26; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // r12
  __int64 *v29; // rsi
  _QWORD *v30; // rax
  _QWORD *v31; // r12
  _QWORD *v32; // rsi
  char v33; // r15
  _QWORD *v34; // rcx
  void *v35; // rbx
  signed __int64 v36; // r8
  _KPROCESS *v37; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v39; // rtt
  struct _KPRCB *v40; // rax
  _GENERAL_LOOKASIDE *v41; // r8
  __int64 *v42; // rcx
  int v43; // eax
  signed __int64 *v44; // rcx
  _GENERAL_LOOKASIDE *L; // rbx
  __int64 Type; // rcx
  int v47; // r11d
  LUID *v48; // r8
  __int64 v49; // r10
  __int64 **v50; // rdx
  __int64 *v51; // rax
  __int64 v52; // rdi
  LUID *v53; // rdx
  __int64 v54; // r9
  LUID **v55; // r8
  LUID *v56; // rax
  void (__stdcall *FreeEx)(PVOID); // rax
  PVOID Object; // [rsp+40h] [rbp-79h] BYREF
  PVOID v59[2]; // [rsp+48h] [rbp-71h]
  __int64 v60; // [rsp+58h] [rbp-61h]
  __int64 *v61; // [rsp+60h] [rbp-59h]
  PSE_EXPORTS v62; // [rsp+68h] [rbp-51h]
  PSLIST_ENTRY ListEntry[2]; // [rsp+70h] [rbp-49h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-39h]
  __int64 v65; // [rsp+88h] [rbp-31h] BYREF
  _QWORD *v66; // [rsp+90h] [rbp-29h]
  _DWORD v67[2]; // [rsp+A0h] [rbp-19h] BYREF
  LUID v68; // [rsp+A8h] [rbp-11h] BYREF
  int v69; // [rsp+B0h] [rbp-9h]

  CurrentPrcb = KeGetCurrentPrcb();
  v66 = a9;
  P = CurrentPrcb->PPLookasideList[4].P;
  v65 = 0LL;
  *(_OWORD *)ListEntry = 0LL;
  ++P->TotalAllocates;
  v16 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v16
    || (++P->AllocateMisses,
        L = CurrentPrcb->PPLookasideList[4].L,
        ++L->TotalAllocates,
        (v16 = RtlpInterlockedPopEntrySList(&L->ListHead)) != 0LL)
    || (Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v16 = (_SLIST_ENTRY *)guard_dispatch_icall_no_overrides(Type)) != 0LL) )
  {
    LODWORD(v16->Next) = CurrentPrcb->Number;
  }
  if ( v16 )
  {
    Information = ObpCaptureObjectCreateInformation(a1, a4, a3, (unsigned int)ListEntry, (__int64)v16, 0);
    if ( Information < 0 )
    {
      v40 = KeGetCurrentPrcb();
      v41 = v40->PPLookasideList[4].P;
      ++v41->TotalFrees;
      if ( LOWORD(v41->ListHead.Alignment) >= v41->Depth )
      {
        ++v41->FreeMisses;
        v41 = v40->PPLookasideList[4].L;
        ++v41->TotalFrees;
        if ( LOWORD(v41->ListHead.Alignment) >= v41->Depth )
        {
          ++v41->FreeMisses;
          FreeEx = (void (__stdcall *)(PVOID))v41->FreeEx;
LABEL_85:
          if ( FreeEx == ExFreePool )
            ExFreePool(v16);
          else
            guard_dispatch_icall_no_overrides(v16);
          return (unsigned int)Information;
        }
      }
      RtlpInterlockedPushEntrySList(&v41->ListHead, v16);
      return (unsigned int)Information;
    }
    if ( ((__int64)v16->Next & a2[18]) != 0 )
    {
      Information = -1073741811;
      goto LABEL_12;
    }
    if ( ((__int64)v16->Next & 0x10) == 0 )
      goto LABEL_7;
    v26 = SeCreatePermanentPrivilege;
    *(_OWORD *)v59 = 0LL;
    CurrentThread = KeGetCurrentThread();
    Process = (__int64)CurrentThread->ApcState.Process;
    v60 = *(_QWORD *)(Process + 464);
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v62 = (PSE_EXPORTS)KeGetCurrentThread();
      --WORD2(v62->SeLowMandatorySid);
      BugCheckParameter2 = (ULONG_PTR)&CurrentThread[1].WaitBlockList;
      v42 = KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL);
      v61 = v42;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx(
          (signed __int64 *)&CurrentThread[1].WaitBlockList,
          0,
          v42,
          (unsigned __int64)&CurrentThread[1].WaitBlockList);
        v42 = v61;
      }
      if ( v42 )
        *((_BYTE *)v42 + 10) = 1;
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v61 = (__int64 *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v61, 0x75536553u);
        v43 = *(&CurrentThread[1].MiscFlags + 1);
        v29 = v61;
        LODWORD(v59[0]) = v43 & 3;
      }
      else
      {
        v29 = 0LL;
      }
      v44 = (signed __int64 *)BugCheckParameter2;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
      {
        ExfReleasePushLockShared(v44);
        v44 = (signed __int64 *)BugCheckParameter2;
      }
      KeAbPostRelease((ULONG_PTR)v44);
      KeLeaveCriticalRegionThread((__int64)v62);
    }
    else
    {
      v29 = 0LL;
    }
    Object = v29;
    v30 = (_QWORD *)PsReferencePrimaryTokenWithTag(Process, 0x75536553u);
    v31 = v30;
    v59[1] = v30;
    if ( SeTokenLeakTracking )
    {
      if ( v30 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v30[143] + 284LL));
        v31 = v59[1];
        if ( v59[1] == (PVOID)SepTokenLeakToken )
          __debugbreak();
      }
      v32 = Object;
      if ( Object )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)Object + 143) + 284LL));
        v32 = Object;
        if ( Object == (PVOID)SepTokenLeakToken )
          __debugbreak();
        v31 = v59[1];
      }
    }
    else
    {
      v32 = Object;
    }
    v67[0] = 1;
    v67[1] = 1;
    v68 = v26;
    v69 = 0;
    if ( !a1 )
    {
      v33 = 1;
LABEL_34:
      if ( SeTokenLeakTracking )
      {
        if ( v31 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v31[143] + 284LL));
          if ( v59[1] == (PVOID)SepTokenLeakToken )
            __debugbreak();
          v32 = Object;
        }
        if ( v32 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v32[143] + 284LL));
          if ( Object == (PVOID)SepTokenLeakToken )
            __debugbreak();
        }
      }
      v36 = (signed __int64)v59[1];
      v37 = KeGetCurrentThread()->ApcState.Process;
      _m_prefetchw(&v37[1].ActiveProcessors);
      ActiveProcessors = (signed __int64)v37[1].ActiveProcessors;
      do
      {
        if ( (v36 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
        {
          ObfDereferenceObjectWithTag((PVOID)v36, 0x75536553u);
          goto LABEL_40;
        }
        v39 = ActiveProcessors;
        ActiveProcessors = _InterlockedCompareExchange64(
                             (volatile signed __int64 *)&v37[1].ActiveProcessors,
                             ActiveProcessors + 1,
                             ActiveProcessors);
      }
      while ( v39 != ActiveProcessors );
      if ( ObpTraceFlags )
        ObpPushStackInfo(v36 - 48, 0, 1u, 0x75536553u);
LABEL_40:
      v59[1] = 0LL;
      if ( Object )
        ObfDereferenceObjectWithTag(Object, 0x75536553u);
      if ( v33 )
      {
LABEL_7:
        v18 = a7;
        if ( !a7 )
          v18 = a2[26];
        v19 = a8;
        if ( !a8 )
          v19 = a2[27];
        HIDWORD(v16[1].Next) = v18;
        *((_DWORD *)&v16[1].Next + 2) = v19;
        Information = ObpAllocateObject(v16, a4, (__int64)a2, ListEntry, a6, &v65, a10);
        if ( Information >= 0 )
        {
          v52 = v65;
          if ( ObpTraceFlags )
          {
            ObpRegisterObject(v65);
            ObpPushStackInfo(v52, 1, 1u, 0x746C6644u);
          }
          *v66 = v52 + 48;
          return (unsigned int)Information;
        }
        goto LABEL_12;
      }
      Information = -1073741727;
LABEL_12:
      if ( ListEntry[1] )
      {
        if ( WORD1(ListEntry[0]) == 248 )
        {
          v20 = KeGetCurrentPrcb();
          v21 = v20->PPLookasideList[5].P;
          ++v21->TotalFrees;
          if ( LOWORD(v21->ListHead.Alignment) < v21->Depth
            || (++v21->FreeMisses,
                v21 = v20->PPLookasideList[5].L,
                ++v21->TotalFrees,
                LOWORD(v21->ListHead.Alignment) < v21->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v21->ListHead, ListEntry[1]);
          }
          else
          {
            ++v21->FreeMisses;
            if ( (void (__stdcall *)(PVOID))v21->FreeEx == ExFreePool )
              ExFreePool(ListEntry[1]);
            else
              guard_dispatch_icall_no_overrides(ListEntry[1]);
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
      v23 = KeGetCurrentPrcb();
      v24 = v23->PPLookasideList[4].P;
      ++v24->TotalFrees;
      if ( LOWORD(v24->ListHead.Alignment) >= v24->Depth )
      {
        ++v24->FreeMisses;
        v24 = v23->PPLookasideList[4].L;
        ++v24->TotalFrees;
        if ( LOWORD(v24->ListHead.Alignment) >= v24->Depth )
        {
          ++v24->FreeMisses;
          FreeEx = (void (__stdcall *)(PVOID))v24->FreeEx;
          goto LABEL_85;
        }
      }
      RtlpInterlockedPushEntrySList(&v24->ListHead, v16);
      return (unsigned int)Information;
    }
    if ( v32 )
    {
      if ( SLODWORD(v59[0]) < 2 )
      {
        v33 = 0;
        goto LABEL_31;
      }
    }
    else
    {
      v32 = v31;
    }
    v31 = v59[1];
    v33 = SepPrivilegeCheck((__int64)v32, (__int64)&v68, 1u, 1, a1);
    v32 = Object;
LABEL_31:
    v34 = v31;
    if ( v32 )
      v34 = v32;
    v35 = *(void **)v34[19];
    if ( !RtlEqualSid(SeLocalSystemSid, v35) )
    {
      v62 = SeExports;
      if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, v35) && !RtlEqualSid(v62->SeLocalServiceSid, v35) )
        goto LABEL_49;
      v47 = 0;
      if ( v67[0] )
      {
        v48 = &v68;
        v49 = v67[0];
        do
        {
          v50 = SepFilterPrivileges;
          v51 = *SepFilterPrivileges;
          while ( v48->LowPart != *(_DWORD *)v51 || v48->HighPart != *((_DWORD *)v51 + 1) )
          {
            v51 = v50[1];
            ++v50;
            if ( !v51 )
              goto LABEL_75;
          }
          ++v47;
LABEL_75:
          v48 = (LUID *)((char *)v48 + 12);
          --v49;
        }
        while ( v49 );
        v53 = &v68;
        v54 = v67[0];
        do
        {
          v55 = &SepServicesFilterPrivileges;
          v56 = SepServicesFilterPrivileges;
          while ( v53->LowPart != v56->LowPart || v53->HighPart != v56->HighPart )
          {
            v56 = v55[1];
            ++v55;
            if ( !v56 )
              goto LABEL_80;
          }
          ++v47;
LABEL_80:
          v53 = (LUID *)((char *)v53 + 12);
          --v54;
        }
        while ( v54 );
        if ( v47 != v67[0] )
        {
LABEL_49:
          SepAdtPrivilegedServiceAuditAlarm(
            (unsigned int)&Object,
            (unsigned int)&SeSubsystemName,
            0,
            (_DWORD)v32,
            (__int64)v31,
            (__int64)v67,
            v33);
          v31 = v59[1];
          v32 = Object;
        }
      }
    }
    goto LABEL_34;
  }
  return 3221225626LL;
}
