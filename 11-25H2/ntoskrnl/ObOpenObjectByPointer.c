/*
 * XREFs of ObOpenObjectByPointer @ 0x140857EB0
 * Callers:
 *     PopEtEnergyTrackerQueryProcessEnergyValues @ 0x1406E9008 (PopEtEnergyTrackerQueryProcessEnergyValues.c)
 *     DbgkUserReportWorkRoutine @ 0x1406FB730 (DbgkUserReportWorkRoutine.c)
 *     ObInitServerSilo @ 0x140736FFC (ObInitServerSilo.c)
 *     PfTStart @ 0x14073AAEC (PfTStart.c)
 *     PopEtEnergyTrackerQueryDxgProcessEnergyValues @ 0x140751758 (PopEtEnergyTrackerQueryDxgProcessEnergyValues.c)
 *     TtmiOpenDefaultTerminal @ 0x140760000 (TtmiOpenDefaultTerminal.c)
 *     NtCreateCpuPartition @ 0x140765E10 (NtCreateCpuPartition.c)
 *     SmGetRegistrationInfo @ 0x140788074 (SmGetRegistrationInfo.c)
 *     CmpInitializeRegistryProcess @ 0x1407C8AB0 (CmpInitializeRegistryProcess.c)
 *     MiOpenSpecialPurposeMemory @ 0x1407EE868 (MiOpenSpecialPurposeMemory.c)
 *     PsOpenThread @ 0x1408430F0 (PsOpenThread.c)
 *     PsOpenProcess @ 0x1408572E0 (PsOpenProcess.c)
 *     NtOpenThreadTokenEx @ 0x1408A17B0 (NtOpenThreadTokenEx.c)
 *     ExGetNextProcess @ 0x1408DF930 (ExGetNextProcess.c)
 *     PspCombineSecurityDomains @ 0x1408EDED8 (PspCombineSecurityDomains.c)
 *     CmLoadDifferencingKey @ 0x140913148 (CmLoadDifferencingKey.c)
 *     CmConvertHandleToKernelHandle @ 0x140914358 (CmConvertHandleToKernelHandle.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x140920D58 (PspOneDirectionSecurityDomainCombine.c)
 *     MmManagePartitionGetMemoryEvents @ 0x14093A0E4 (MmManagePartitionGetMemoryEvents.c)
 *     VrpPostEnumerateKey @ 0x140948938 (VrpPostEnumerateKey.c)
 *     PiCMOpenObjectKey @ 0x14095B948 (PiCMOpenObjectKey.c)
 *     PiCMDuplicateRegistryHandle @ 0x14095C094 (PiCMDuplicateRegistryHandle.c)
 *     SeGetTokenDeviceMap @ 0x14097F108 (SeGetTokenDeviceMap.c)
 *     EtwpCapturePreviousRegistryData @ 0x14099B480 (EtwpCapturePreviousRegistryData.c)
 *     IopInvalidateVolumesForDevice @ 0x1409A05FC (IopInvalidateVolumesForDevice.c)
 *     NtCreateWorkerFactory @ 0x1409A67B0 (NtCreateWorkerFactory.c)
 *     WmipIoControl @ 0x1409B4870 (WmipIoControl.c)
 *     NtGetNextThread @ 0x1409BA4F0 (NtGetNextThread.c)
 *     PspCreateObjectHandle @ 0x1409BBD2C (PspCreateObjectHandle.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 *     NtOpenProcessTokenEx @ 0x1409D8850 (NtOpenProcessTokenEx.c)
 *     sub_1409FF648 @ 0x1409FF648 (sub_1409FF648.c)
 *     NtOpenPrivateNamespace @ 0x140A068D0 (NtOpenPrivateNamespace.c)
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x140A1AE34 (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 *     NtGetNextProcess @ 0x140A32180 (NtGetNextProcess.c)
 *     DbgkpOpenHandles @ 0x140A3427C (DbgkpOpenHandles.c)
 *     EtwpOpenConsumer @ 0x140A5EA18 (EtwpOpenConsumer.c)
 *     DbgkOpenProcessDebugPort @ 0x140A689A0 (DbgkOpenProcessDebugPort.c)
 *     ObOpenObjectByPointerWithTag @ 0x140A6E880 (ObOpenObjectByPointerWithTag.c)
 *     VrpPreLoadKey @ 0x140A71EB8 (VrpPreLoadKey.c)
 *     ObpSetDeviceMap @ 0x140A77D08 (ObpSetDeviceMap.c)
 *     SmKmFileInfoDuplicate @ 0x140AAC5AC (SmKmFileInfoDuplicate.c)
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
 *     SepCreateAccessStateFromSubjectContext @ 0x1403E3020 (SepCreateAccessStateFromSubjectContext.c)
 *     SepDeleteAccessState @ 0x1403F9FA0 (SepDeleteAccessState.c)
 *     ObReferenceObjectByPointerWithTag @ 0x14041B630 (ObReferenceObjectByPointerWithTag.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 */

NTSTATUS __stdcall ObOpenObjectByPointer(
        PVOID Object,
        ULONG HandleAttributes,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        PHANDLE Handle)
{
  POBJECT_TYPE v10; // rdi
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // r14
  __int64 Process; // r13
  _QWORD *v14; // rbx
  ULONG_PTR v15; // rax
  NTSTATUS v16; // ebx
  NTSTATUS v17; // edi
  signed __int64 v18; // r8
  _KPROCESS *v19; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v21; // rtt
  PACCESS_TOKEN v22; // rcx
  __int64 *v23; // rbx
  _QWORD *PrimaryToken; // rax
  _QWORD *ClientToken; // rax
  _QWORD *v27; // [rsp+68h] [rbp-200h] BYREF
  __int128 v28; // [rsp+70h] [rbp-1F8h]
  __int64 v29; // [rsp+80h] [rbp-1E8h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-1E0h]
  struct _KTHREAD *v31; // [rsp+90h] [rbp-1D8h]
  _QWORD v32[20]; // [rsp+A0h] [rbp-1C8h] BYREF
  _QWORD v33[28]; // [rsp+140h] [rbp-128h] BYREF

  memset_0(v33, 0, sizeof(v33));
  memset_0(v32, 0, sizeof(v32));
  v10 = ObjectType;
  *Handle = 0LL;
  result = ObReferenceObjectByPointerWithTag(Object, 0, ObjectType, AccessMode, 0x6E48624Fu);
  if ( result >= 0 )
  {
    if ( !ObjectType )
      v10 = (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( (HandleAttributes & v10->TypeInfo.InvalidAttributes) != 0
      || (*((char *)Object - 21) & 1) != 0 && *((_QWORD *)Object - 2) )
    {
      ++ObpInvalidOpenByPointer;
      ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      return -1073741811;
    }
    if ( !PassedAccessState )
    {
      CurrentThread = KeGetCurrentThread();
      v28 = 0LL;
      Process = (__int64)CurrentThread->ApcState.Process;
      v29 = *(_QWORD *)(Process + 464);
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v31 = KeGetCurrentThread();
        --v31->KernelApcDisable;
        BugCheckParameter2 = (ULONG_PTR)&CurrentThread[1].WaitBlockList;
        v23 = KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(
            (signed __int64 *)&CurrentThread[1].WaitBlockList,
            0,
            v23,
            (unsigned __int64)&CurrentThread[1].WaitBlockList);
        if ( v23 )
          *((_BYTE *)v23 + 10) = 1;
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
        {
          v14 = (_QWORD *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
          ObfReferenceObjectWithTag(v14, 0x75536553u);
          LODWORD(v28) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
        }
        else
        {
          v14 = 0LL;
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
        KeAbPostRelease(BugCheckParameter2);
        KeLeaveCriticalRegionThread((__int64)v31);
      }
      else
      {
        v14 = 0LL;
      }
      v27 = v14;
      v15 = PsReferencePrimaryTokenWithTag(Process, 0x75536553u);
      *((_QWORD *)&v28 + 1) = v15;
      if ( SeTokenLeakTracking )
      {
        if ( v15 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 1144) + 284LL));
          if ( v15 == SepTokenLeakToken )
            __debugbreak();
          v14 = v27;
        }
        if ( v14 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v14[143] + 284LL));
          if ( v27 == (_QWORD *)SepTokenLeakToken )
            __debugbreak();
        }
      }
      v16 = SepCreateAccessStateFromSubjectContext(
              &v27,
              v32,
              v33,
              DesiredAccess,
              &v10->TypeInfo.GenericMapping.GenericRead);
      if ( v16 < 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
        return v16;
      }
      PassedAccessState = (PACCESS_STATE)v32;
    }
    v17 = ObpCreateHandle(
            1u,
            (char *)Object,
            0,
            (__int64)PassedAccessState,
            0,
            HandleAttributes,
            AccessMode,
            0LL,
            0,
            0LL,
            (__int64 *)Handle);
    if ( v17 < 0 )
      ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    if ( PassedAccessState == (PACCESS_STATE)v32 )
    {
      SepDeleteAccessState((__int64)PassedAccessState);
      if ( SeTokenLeakTracking )
      {
        PrimaryToken = PassedAccessState->SubjectSecurityContext.PrimaryToken;
        if ( PrimaryToken )
        {
          _InterlockedDecrement((volatile signed __int32 *)(PrimaryToken[143] + 284LL));
          if ( PassedAccessState->SubjectSecurityContext.PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
            __debugbreak();
        }
        ClientToken = PassedAccessState->SubjectSecurityContext.ClientToken;
        if ( ClientToken )
        {
          _InterlockedDecrement((volatile signed __int32 *)(ClientToken[143] + 284LL));
          if ( PassedAccessState->SubjectSecurityContext.ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
            __debugbreak();
        }
      }
      v18 = (signed __int64)PassedAccessState->SubjectSecurityContext.PrimaryToken;
      v19 = KeGetCurrentThread()->ApcState.Process;
      _m_prefetchw(&v19[1].ActiveProcessors);
      ActiveProcessors = (signed __int64)v19[1].ActiveProcessors;
      do
      {
        if ( (v18 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
        {
          ObfDereferenceObjectWithTag((PVOID)v18, 0x75536553u);
          goto LABEL_21;
        }
        v21 = ActiveProcessors;
        ActiveProcessors = _InterlockedCompareExchange64(
                             (volatile signed __int64 *)&v19[1].ActiveProcessors,
                             ActiveProcessors + 1,
                             ActiveProcessors);
      }
      while ( v21 != ActiveProcessors );
      if ( ObpTraceFlags )
        ObpPushStackInfo(v18 - 48, 0, 1u, 0x75536553u);
LABEL_21:
      v22 = PassedAccessState->SubjectSecurityContext.ClientToken;
      PassedAccessState->SubjectSecurityContext.PrimaryToken = 0LL;
      if ( v22 )
        ObfDereferenceObjectWithTag(v22, 0x75536553u);
      PassedAccessState->SubjectSecurityContext.ClientToken = 0LL;
    }
    return v17;
  }
  return result;
}
