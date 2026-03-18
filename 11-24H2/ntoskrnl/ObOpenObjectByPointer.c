/*
 * XREFs of ObOpenObjectByPointer @ 0x140854F10
 * Callers:
 *     DbgkUserReportWorkRoutine @ 0x140707610 (DbgkUserReportWorkRoutine.c)
 *     ObInitServerSilo @ 0x14074301C (ObInitServerSilo.c)
 *     PfTStart @ 0x140746B0C (PfTStart.c)
 *     PopEtEnergyTrackerQueryDxgProcessEnergyValues @ 0x14075E150 (PopEtEnergyTrackerQueryDxgProcessEnergyValues.c)
 *     TtmiOpenDefaultTerminal @ 0x14076F9C0 (TtmiOpenDefaultTerminal.c)
 *     NtCreateCpuPartition @ 0x1407757E0 (NtCreateCpuPartition.c)
 *     SmGetRegistrationInfo @ 0x140797444 (SmGetRegistrationInfo.c)
 *     CmpInitializeRegistryProcess @ 0x1407D8250 (CmpInitializeRegistryProcess.c)
 *     MiOpenSpecialPurposeMemory @ 0x1407FE6F8 (MiOpenSpecialPurposeMemory.c)
 *     PsOpenThread @ 0x14083F680 (PsOpenThread.c)
 *     NtOpenProcessTokenEx @ 0x1408541D0 (NtOpenProcessTokenEx.c)
 *     PsOpenProcess @ 0x140854350 (PsOpenProcess.c)
 *     NtOpenThreadTokenEx @ 0x1408553C0 (NtOpenThreadTokenEx.c)
 *     ExGetNextProcess @ 0x1408EED40 (ExGetNextProcess.c)
 *     NtGetNextProcess @ 0x1408EFDC0 (NtGetNextProcess.c)
 *     VrpPostEnumerateKey @ 0x1409284D8 (VrpPostEnumerateKey.c)
 *     CmLoadDifferencingKey @ 0x14092C750 (CmLoadDifferencingKey.c)
 *     CmConvertHandleToKernelHandle @ 0x14092D980 (CmConvertHandleToKernelHandle.c)
 *     MmManagePartitionGetMemoryEvents @ 0x140932528 (MmManagePartitionGetMemoryEvents.c)
 *     NtGetNextThread @ 0x14093B590 (NtGetNextThread.c)
 *     PspCombineSecurityDomains @ 0x14094706C (PspCombineSecurityDomains.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x14094DFD4 (PspOneDirectionSecurityDomainCombine.c)
 *     PiCMOpenObjectKey @ 0x140963AF8 (PiCMOpenObjectKey.c)
 *     PiCMDuplicateRegistryHandle @ 0x14096424C (PiCMDuplicateRegistryHandle.c)
 *     EtwpCapturePreviousRegistryData @ 0x14098C820 (EtwpCapturePreviousRegistryData.c)
 *     IopInvalidateVolumesForDevice @ 0x1409A4954 (IopInvalidateVolumesForDevice.c)
 *     NtCreateWorkerFactory @ 0x1409A6CF0 (NtCreateWorkerFactory.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 *     WmipIoControl @ 0x1409CCBD0 (WmipIoControl.c)
 *     sub_1409FC424 @ 0x1409FC424 (sub_1409FC424.c)
 *     NtOpenPrivateNamespace @ 0x140A09B40 (NtOpenPrivateNamespace.c)
 *     PspCreateObjectHandle @ 0x140A0C160 (PspCreateObjectHandle.c)
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x140A25E28 (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 *     DbgkpOpenHandles @ 0x140A394BC (DbgkpOpenHandles.c)
 *     EtwpOpenConsumer @ 0x140A5F1AC (EtwpOpenConsumer.c)
 *     DbgkOpenProcessDebugPort @ 0x140A6B414 (DbgkOpenProcessDebugPort.c)
 *     ObOpenObjectByPointerWithTag @ 0x140A70A80 (ObOpenObjectByPointerWithTag.c)
 *     VrpPreLoadKey @ 0x140A73F7C (VrpPreLoadKey.c)
 *     ObpSetDeviceMap @ 0x140A79B78 (ObpSetDeviceMap.c)
 *     SmKmFileInfoDuplicate @ 0x140AB181C (SmKmFileInfoDuplicate.c)
 *     PopEtEnergyTrackerQueryProcessEnergyValues @ 0x140ACA438 (PopEtEnergyTrackerQueryProcessEnergyValues.c)
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
 *     SepCreateAccessStateFromSubjectContext @ 0x1403EBC80 (SepCreateAccessStateFromSubjectContext.c)
 *     SepDeleteAccessState @ 0x140401610 (SepDeleteAccessState.c)
 *     ObReferenceObjectByPointerWithTag @ 0x140418730 (ObReferenceObjectByPointerWithTag.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
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
  struct _KTHREAD *CurrentThread; // r13
  __int64 Process; // r12
  _QWORD *v14; // rbx
  ULONG_PTR v15; // rax
  NTSTATUS v16; // ebx
  __int64 v17; // rdx
  NTSTATUS v18; // edi
  __int64 v19; // r8
  __int64 v20; // r9
  signed __int64 v21; // r8
  _KPROCESS *v22; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v24; // rtt
  PACCESS_TOKEN v25; // rcx
  _QWORD *v26; // rbx
  _QWORD *PrimaryToken; // rax
  _QWORD *ClientToken; // rax
  _QWORD *v30; // [rsp+68h] [rbp-200h] BYREF
  __int128 v31; // [rsp+70h] [rbp-1F8h]
  __int64 v32; // [rsp+80h] [rbp-1E8h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-1E0h]
  struct _KTHREAD *v34; // [rsp+90h] [rbp-1D8h]
  _QWORD v35[20]; // [rsp+A0h] [rbp-1C8h] BYREF
  _QWORD v36[28]; // [rsp+140h] [rbp-128h] BYREF

  memset_0(v36, 0, sizeof(v36));
  memset_0(v35, 0, sizeof(v35));
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
      v31 = 0LL;
      Process = (__int64)CurrentThread->ApcState.Process;
      v32 = *(_QWORD *)(Process + 464);
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v34 = KeGetCurrentThread();
        --v34->KernelApcDisable;
        BugCheckParameter2 = (ULONG_PTR)&CurrentThread[1].WaitBlockList;
        v26 = KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(
            (signed __int64 *)&CurrentThread[1].WaitBlockList,
            0,
            v26,
            (__int64)&CurrentThread[1].WaitBlockList);
        if ( v26 )
          *((_BYTE *)v26 + 10) = 1;
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
        {
          v14 = (_QWORD *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
          ObfReferenceObjectWithTag(v14, 0x75536553u);
          LODWORD(v31) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
        }
        else
        {
          v14 = 0LL;
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
        KeAbPostRelease(BugCheckParameter2);
        KeLeaveCriticalRegionThread();
      }
      else
      {
        v14 = 0LL;
      }
      v30 = v14;
      v15 = PsReferencePrimaryTokenWithTag(Process, 0x75536553u);
      *((_QWORD *)&v31 + 1) = v15;
      if ( SeTokenLeakTracking )
      {
        if ( v15 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 1144) + 284LL));
          if ( v15 == SepTokenLeakToken )
            __debugbreak();
          v14 = v30;
        }
        if ( v14 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v14[143] + 284LL));
          if ( v30 == (_QWORD *)SepTokenLeakToken )
            __debugbreak();
        }
      }
      v16 = SepCreateAccessStateFromSubjectContext(
              &v30,
              v35,
              v36,
              DesiredAccess,
              &v10->TypeInfo.GenericMapping.GenericRead);
      if ( v16 < 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
        return v16;
      }
      PassedAccessState = (PACCESS_STATE)v35;
    }
    v18 = ObpCreateHandle(
            1u,
            (struct _FILE_OBJECT *)Object,
            0,
            (__int64)PassedAccessState,
            0,
            HandleAttributes,
            AccessMode,
            0LL,
            0,
            0LL,
            (__int64 *)Handle);
    if ( v18 < 0 )
      ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    if ( PassedAccessState == (PACCESS_STATE)v35 )
    {
      SepDeleteAccessState((__int64)PassedAccessState, v17, v19, v20);
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
      v21 = (signed __int64)PassedAccessState->SubjectSecurityContext.PrimaryToken;
      v22 = KeGetCurrentThread()->ApcState.Process;
      _m_prefetchw(&v22[1].ActiveProcessors);
      ActiveProcessors = (signed __int64)v22[1].ActiveProcessors;
      do
      {
        if ( (v21 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
        {
          ObfDereferenceObjectWithTag((PVOID)v21, 0x75536553u);
          goto LABEL_21;
        }
        v24 = ActiveProcessors;
        ActiveProcessors = _InterlockedCompareExchange64(
                             (volatile signed __int64 *)&v22[1].ActiveProcessors,
                             ActiveProcessors + 1,
                             ActiveProcessors);
      }
      while ( v24 != ActiveProcessors );
      if ( ObpTraceFlags )
        ObpPushStackInfo(v21 - 48, 0, 1u, 0x75536553u);
LABEL_21:
      v25 = PassedAccessState->SubjectSecurityContext.ClientToken;
      PassedAccessState->SubjectSecurityContext.PrimaryToken = 0LL;
      if ( v25 )
        ObfDereferenceObjectWithTag(v25, 0x75536553u);
      PassedAccessState->SubjectSecurityContext.ClientToken = 0LL;
    }
    return v18;
  }
  return result;
}
