/*
 * XREFs of ObpPushStackInfo @ 0x14031FC8C
 * Callers:
 *     CcUnmapAndPurge @ 0x140207728 (CcUnmapAndPurge.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402090F0 (ObFastDereferenceObjectDeferDelete.c)
 *     ExReturnPoolQuota @ 0x14021ACC0 (ExReturnPoolQuota.c)
 *     PfSnGetFileInformation @ 0x14022B790 (PfSnGetFileInformation.c)
 *     ExpApplyPriorityBoost @ 0x14022CFA0 (ExpApplyPriorityBoost.c)
 *     IopCallDriverReference @ 0x14025C740 (IopCallDriverReference.c)
 *     IoReferenceIoAttributionFromThread @ 0x140273BD0 (IoReferenceIoAttributionFromThread.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140288470 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     NtCancelTimer @ 0x1402BCF30 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x1402BD850 (ExpSetTimerObject.c)
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x1402C37E0 (IopFreeIrp.c)
 *     IopReleaseFileObjectLock @ 0x1402C60B0 (IopReleaseFileObjectLock.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x1402CBF00 (KiAbConvertWaiterToOwnerEntry.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     NtTraceEvent @ 0x1402CE8A0 (NtTraceEvent.c)
 *     IopProcessWorkItem @ 0x1402D1B40 (IopProcessWorkItem.c)
 *     PspRevertContainerImpersonation @ 0x1402D21C0 (PspRevertContainerImpersonation.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 *     IoRemoveIoCompletion @ 0x1402D3950 (IoRemoveIoCompletion.c)
 *     ExpFreeOwnerEntry @ 0x14031EC90 (ExpFreeOwnerEntry.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14031F930 (ObpTraceObjectReferenceIfActive.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 *     ExpReleaseResourceForThreadLite @ 0x140357E60 (ExpReleaseResourceForThreadLite.c)
 *     ExFreeHeapPool @ 0x140359950 (ExFreeHeapPool.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1403AD210 (NtReleaseWorkerFactoryWorker.c)
 *     ObpDereferenceNamedObject @ 0x1403B0688 (ObpDereferenceNamedObject.c)
 *     ExpSetTimerObject2 @ 0x1403B09D8 (ExpSetTimerObject2.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403B1560 (NtSignalAndWaitForSingleObject.c)
 *     IopUnloadSafeCompletion @ 0x1403B1A30 (IopUnloadSafeCompletion.c)
 *     IopDeleteFileObjectExtension @ 0x1403B1BD0 (IopDeleteFileObjectExtension.c)
 *     NtSetInformationFile @ 0x1403B2080 (NtSetInformationFile.c)
 *     ObDereferenceObjectExWithTag @ 0x1403B3DE0 (ObDereferenceObjectExWithTag.c)
 *     ObDereferenceObjectEx @ 0x1403B47B8 (ObDereferenceObjectEx.c)
 *     ObDereferenceObjectDeferDelete @ 0x1403B48A0 (ObDereferenceObjectDeferDelete.c)
 *     PspUpdateContainerImpersonation @ 0x1403B4C5C (PspUpdateContainerImpersonation.c)
 *     IopReferenceFileObject @ 0x1403EB740 (IopReferenceFileObject.c)
 *     IopFreeWaitCompletionPacket @ 0x14040F850 (IopFreeWaitCompletionPacket.c)
 *     MiDereferenceControlAreaFile @ 0x14041F2B0 (MiDereferenceControlAreaFile.c)
 *     RtlpQueryLowBoxId @ 0x1404247E0 (RtlpQueryLowBoxId.c)
 *     EtwpRegisterUMProvider @ 0x140838D50 (EtwpRegisterUMProvider.c)
 *     NtCreateSemaphore @ 0x14083A3C0 (NtCreateSemaphore.c)
 *     CmpCreateKeyBody @ 0x14083A700 (CmpCreateKeyBody.c)
 *     NtCreateMutant @ 0x14083AEC0 (NtCreateMutant.c)
 *     NtCreateWaitCompletionPacket @ 0x14083B1F0 (NtCreateWaitCompletionPacket.c)
 *     SeDeleteAccessState @ 0x14083D240 (SeDeleteAccessState.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     PsOpenProcess @ 0x140850610 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x1408511D0 (ObOpenObjectByPointer.c)
 *     NtOpenThreadTokenEx @ 0x140851680 (NtOpenThreadTokenEx.c)
 *     NtCreateEvent @ 0x1408532A0 (NtCreateEvent.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     SepCreateClientSecurityEx @ 0x1408A0160 (SepCreateClientSecurityEx.c)
 *     IopAllocRealFileObject @ 0x1408A3050 (IopAllocRealFileObject.c)
 *     ObOpenObjectByNameEx @ 0x1408A41E0 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408E4560 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpIsSystemEntity @ 0x1408E4D80 (CmpIsSystemEntity.c)
 *     PsImpersonateClient @ 0x1408E7A20 (PsImpersonateClient.c)
 *     ObCreateObject @ 0x140973930 (ObCreateObject.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14098FEE0 (EtwpGetSidExtendedHeaderItem.c)
 *     PsQueryProcessAttributes @ 0x1409C65D0 (PsQueryProcessAttributes.c)
 *     ObRetagReferences @ 0x1409C6A70 (ObRetagReferences.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140231C20 (RtlCaptureStackBackTrace.c)
 *     MmCanThreadFault @ 0x1402331D0 (MmCanThreadFault.c)
 *     ObGetCurrentIrql @ 0x140288400 (ObGetCurrentIrql.c)
 *     EtwTraceObjectOperation @ 0x1403FBD80 (EtwTraceObjectOperation.c)
 *     ObpDeferPushRefDerefInfo @ 0x1405C9AD0 (ObpDeferPushRefDerefInfo.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObpPushRefDerefInfo @ 0x140743518 (ObpPushRefDerefInfo.c)
 */

char __fastcall ObpPushStackInfo(__int64 a1, char a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  USHORT v10; // ax
  __int64 v11; // rdx
  __int64 v12; // rcx
  signed __int32 v13; // ebx
  BOOL CanThreadFault; // eax
  int v15; // r9d
  int v16; // edx
  PVOID BackTrace[16]; // [rsp+30h] [rbp-88h] BYREF

  memset_0(BackTrace, 0, sizeof(BackTrace));
  if ( (xmmword_140FC6B50 & 0x80u) != 0LL )
  {
    LOWORD(v9) = 4403 - (a2 != 0);
    EtwTraceObjectOperation(v9, a1, a3, a4);
  }
  LOBYTE(v10) = ObpTraceFlags;
  if ( (ObpTraceFlags & 0x73) != 0 && (*(_BYTE *)(a1 + 25) & 1) != 0 )
  {
    LOBYTE(v10) = ObGetCurrentIrql(v9, v8);
    if ( (unsigned __int8)v10 <= 2u )
    {
      v10 = RtlCaptureStackBackTrace(1u, 0x10u, BackTrace, 0LL);
      if ( v10 )
      {
        if ( v10 < 0x10u )
          memset_0(&BackTrace[v10], 0, 8LL * (16 - (unsigned int)v10));
        v13 = _InterlockedExchangeAdd(&ObpStackSequence, 1u);
        CanThreadFault = MmCanThreadFault(v12, v11);
        v15 = v13 + 1;
        LOBYTE(v16) = a2;
        if ( CanThreadFault )
          LOBYTE(v10) = ObpPushRefDerefInfo(a1, v16, (unsigned __int16)a3, v15, BackTrace, a4);
        else
          LOBYTE(v10) = ObpDeferPushRefDerefInfo(a1, v16, (unsigned __int16)a3, v15, (__int64)BackTrace, a4);
      }
    }
  }
  return v10;
}
