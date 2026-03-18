/*
 * XREFs of ObpPushStackInfo @ 0x14029C310
 * Callers:
 *     IoFreeIrp @ 0x1402508A0 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x140250FE0 (IopFreeIrp.c)
 *     IopfCompleteRequest @ 0x140251740 (IopfCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x14027E670 (KiAbConvertWaiterToOwnerEntry.c)
 *     IopReleaseFileObjectLock @ 0x140285FF0 (IopReleaseFileObjectLock.c)
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1402991C0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14029B0E0 (ObpTraceObjectReferenceIfActive.c)
 *     ExpFreeOwnerEntry @ 0x14029C030 (ExpFreeOwnerEntry.c)
 *     IoRemoveIoCompletion @ 0x14029E4A0 (IoRemoveIoCompletion.c)
 *     NtSetInformationFile @ 0x1402A04A0 (NtSetInformationFile.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402C2260 (ObFastDereferenceObjectDeferDelete.c)
 *     CcUnmapAndPurge @ 0x1402C3E48 (CcUnmapAndPurge.c)
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402DECE0 (ExFreeHeapPool.c)
 *     NtCancelTimer @ 0x1402EB010 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x1402EB930 (ExpSetTimerObject.c)
 *     ExpReleaseResourceForThreadLite @ 0x1402FF6B0 (ExpReleaseResourceForThreadLite.c)
 *     PfSnGetFileInformation @ 0x140302AF0 (PfSnGetFileInformation.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140303750 (NtReleaseWorkerFactoryWorker.c)
 *     IopProcessWorkItem @ 0x140306B80 (IopProcessWorkItem.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140307190 (NtWaitForWorkViaWorkerFactory.c)
 *     PspRevertContainerImpersonation @ 0x140308400 (PspRevertContainerImpersonation.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     NtTraceEvent @ 0x14030A680 (NtTraceEvent.c)
 *     ExpApplyPriorityBoost @ 0x140324DC0 (ExpApplyPriorityBoost.c)
 *     IopCallDriverReference @ 0x14035D040 (IopCallDriverReference.c)
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     ObpDereferenceNamedObject @ 0x140370914 (ObpDereferenceNamedObject.c)
 *     ExpSetTimerObject2 @ 0x140370C68 (ExpSetTimerObject2.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403717F0 (NtSignalAndWaitForSingleObject.c)
 *     IopUnloadSafeCompletion @ 0x140371CB0 (IopUnloadSafeCompletion.c)
 *     IopDeleteFileObjectExtension @ 0x140371E50 (IopDeleteFileObjectExtension.c)
 *     IoReferenceIoAttributionFromThread @ 0x1403AAA00 (IoReferenceIoAttributionFromThread.c)
 *     ExReturnPoolQuota @ 0x1403C5CF0 (ExReturnPoolQuota.c)
 *     ObDereferenceObjectDeferDelete @ 0x1403F2E60 (ObDereferenceObjectDeferDelete.c)
 *     IopReferenceFileObject @ 0x1403F6490 (IopReferenceFileObject.c)
 *     IopFreeWaitCompletionPacket @ 0x14041E430 (IopFreeWaitCompletionPacket.c)
 *     MiDereferenceControlAreaFile @ 0x140432C40 (MiDereferenceControlAreaFile.c)
 *     RtlpQueryLowBoxId @ 0x140435C80 (RtlpQueryLowBoxId.c)
 *     ObDereferenceObjectEx @ 0x140437DB0 (ObDereferenceObjectEx.c)
 *     ObDereferenceObjectExWithTag @ 0x1404381A0 (ObDereferenceObjectExWithTag.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140840E80 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpIsSystemEntity @ 0x1408416A0 (CmpIsSystemEntity.c)
 *     SeDeleteAccessState @ 0x140844A10 (SeDeleteAccessState.c)
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     PsOpenProcess @ 0x1408572E0 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x140857EB0 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     ObCreateObject @ 0x140858920 (ObCreateObject.c)
 *     IopAllocRealFileObject @ 0x14085A290 (IopAllocRealFileObject.c)
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 *     EtwpRegisterUMProvider @ 0x14089D2F0 (EtwpRegisterUMProvider.c)
 *     CmpCreateKeyBody @ 0x14089EB50 (CmpCreateKeyBody.c)
 *     NtCreateSemaphore @ 0x14089F4E0 (NtCreateSemaphore.c)
 *     NtCreateEvent @ 0x14089FF70 (NtCreateEvent.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     NtOpenThreadTokenEx @ 0x1408A17B0 (NtOpenThreadTokenEx.c)
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 *     PsImpersonateClient @ 0x1408A51C0 (PsImpersonateClient.c)
 *     SepCreateClientSecurityEx @ 0x1408A6AF0 (SepCreateClientSecurityEx.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140925E00 (EtwpGetSidExtendedHeaderItem.c)
 *     PsQueryProcessAttributes @ 0x1409BE6C0 (PsQueryProcessAttributes.c)
 *     ObRetagReferences @ 0x1409C0A60 (ObRetagReferences.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     RtlCaptureStackBackTrace @ 0x140347BC0 (RtlCaptureStackBackTrace.c)
 *     MmCanThreadFault @ 0x140348130 (MmCanThreadFault.c)
 *     EtwTraceObjectOperation @ 0x1403F8ED4 (EtwTraceObjectOperation.c)
 *     ObpDeferPushRefDerefInfo @ 0x1405C7D90 (ObpDeferPushRefDerefInfo.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObpPushRefDerefInfo @ 0x140739208 (ObpPushRefDerefInfo.c)
 */

char __fastcall ObpPushStackInfo(__int64 a1, char a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rcx
  USHORT v9; // ax
  signed __int32 v10; // ebx
  int CanThreadFault; // eax
  int v12; // r9d
  int v13; // edx
  PVOID BackTrace[16]; // [rsp+30h] [rbp-88h] BYREF

  memset_0(BackTrace, 0, sizeof(BackTrace));
  if ( (xmmword_140FC5B10 & 0x80u) != 0LL )
  {
    LOWORD(v8) = 4403 - (a2 != 0);
    EtwTraceObjectOperation(v8, a1, a3, a4);
  }
  LOBYTE(v9) = ObpTraceFlags;
  if ( (ObpTraceFlags & 0x73) != 0 && (*(_BYTE *)(a1 + 25) & 1) != 0 )
  {
    LOBYTE(v9) = ObGetCurrentIrql();
    if ( (unsigned __int8)v9 <= 2u )
    {
      v9 = RtlCaptureStackBackTrace(1u, 0x10u, BackTrace, 0LL);
      if ( v9 )
      {
        if ( v9 < 0x10u )
          memset_0(&BackTrace[v9], 0, 8LL * (16 - (unsigned int)v9));
        v10 = _InterlockedExchangeAdd(&ObpStackSequence, 1u);
        CanThreadFault = MmCanThreadFault();
        v12 = v10 + 1;
        LOBYTE(v13) = a2;
        if ( CanThreadFault )
          LOBYTE(v9) = ObpPushRefDerefInfo(a1, v13, (unsigned __int16)a3, v12, BackTrace, a4);
        else
          LOBYTE(v9) = ObpDeferPushRefDerefInfo(a1, v13, (unsigned __int16)a3, v12, (__int64)BackTrace, a4);
      }
    }
  }
  return v9;
}
