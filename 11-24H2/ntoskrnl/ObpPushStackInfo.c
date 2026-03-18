/*
 * XREFs of ObpPushStackInfo @ 0x1403407AC
 * Callers:
 *     CcUnmapAndPurge @ 0x14023F5D8 (CcUnmapAndPurge.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x140240FA0 (ObFastDereferenceObjectDeferDelete.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140257E60 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14025E950 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PfSnGetFileInformation @ 0x140276200 (PfSnGetFileInformation.c)
 *     ExpApplyPriorityBoost @ 0x140277A10 (ExpApplyPriorityBoost.c)
 *     PspUpdateContainerImpersonation @ 0x1402A11C4 (PspUpdateContainerImpersonation.c)
 *     IopProcessWorkItem @ 0x1402A2410 (IopProcessWorkItem.c)
 *     PspRevertContainerImpersonation @ 0x1402A2A90 (PspRevertContainerImpersonation.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A3010 (NtWaitForWorkViaWorkerFactory.c)
 *     IoRemoveIoCompletion @ 0x1402A4220 (IoRemoveIoCompletion.c)
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402B0E50 (ExFreeHeapPool.c)
 *     ExReturnPoolQuota @ 0x1402B4980 (ExReturnPoolQuota.c)
 *     ExpReleaseResourceForThreadLite @ 0x1402D6BE0 (ExpReleaseResourceForThreadLite.c)
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 *     IoFreeIrp @ 0x14031A520 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x14031AC50 (IopFreeIrp.c)
 *     IopReleaseFileObjectLock @ 0x14031D520 (IopReleaseFileObjectLock.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x140323370 (KiAbConvertWaiterToOwnerEntry.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     NtTraceEvent @ 0x140325D10 (NtTraceEvent.c)
 *     NtCancelTimer @ 0x1403320A0 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x1403329C0 (ExpSetTimerObject.c)
 *     ExpFreeOwnerEntry @ 0x14033F7B0 (ExpFreeOwnerEntry.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140340450 (ObpTraceObjectReferenceIfActive.c)
 *     ObFastDereferenceObject @ 0x140356880 (ObFastDereferenceObject.c)
 *     SeAccessCheckByType @ 0x14035C8A0 (SeAccessCheckByType.c)
 *     IopCallDriverReference @ 0x140373E80 (IopCallDriverReference.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1403BE580 (NtReleaseWorkerFactoryWorker.c)
 *     ObpDereferenceNamedObject @ 0x1403C1AC8 (ObpDereferenceNamedObject.c)
 *     ExpSetTimerObject2 @ 0x1403C1E18 (ExpSetTimerObject2.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403C29A0 (NtSignalAndWaitForSingleObject.c)
 *     IopUnloadSafeCompletion @ 0x1403C2E70 (IopUnloadSafeCompletion.c)
 *     IopDeleteFileObjectExtension @ 0x1403C3010 (IopDeleteFileObjectExtension.c)
 *     NtSetInformationFile @ 0x1403C34C0 (NtSetInformationFile.c)
 *     ObDereferenceObjectExWithTag @ 0x1403C5220 (ObDereferenceObjectExWithTag.c)
 *     ObDereferenceObjectEx @ 0x1403C5BF8 (ObDereferenceObjectEx.c)
 *     ObDereferenceObjectDeferDelete @ 0x1403C5CE0 (ObDereferenceObjectDeferDelete.c)
 *     IoReferenceIoAttributionFromThread @ 0x1403C6140 (IoReferenceIoAttributionFromThread.c)
 *     IopReferenceFileObject @ 0x1403F5300 (IopReferenceFileObject.c)
 *     IopFreeWaitCompletionPacket @ 0x14041BD10 (IopFreeWaitCompletionPacket.c)
 *     MiDereferenceControlAreaFile @ 0x14042C500 (MiDereferenceControlAreaFile.c)
 *     RtlpQueryLowBoxId @ 0x1404322A0 (RtlpQueryLowBoxId.c)
 *     EtwpRegisterUMProvider @ 0x14083C6F0 (EtwpRegisterUMProvider.c)
 *     NtCreateSemaphore @ 0x14083DDC0 (NtCreateSemaphore.c)
 *     CmpCreateKeyBody @ 0x14083E100 (CmpCreateKeyBody.c)
 *     NtCreateMutant @ 0x14083E8C0 (NtCreateMutant.c)
 *     SeDeleteAccessState @ 0x140840F80 (SeDeleteAccessState.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     PsOpenProcess @ 0x140854350 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x140854F10 (ObOpenObjectByPointer.c)
 *     NtOpenThreadTokenEx @ 0x1408553C0 (NtOpenThreadTokenEx.c)
 *     NtCreateEvent @ 0x140856FC0 (NtCreateEvent.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     SepCreateClientSecurityEx @ 0x140897AC0 (SepCreateClientSecurityEx.c)
 *     IopAllocRealFileObject @ 0x14089A9B0 (IopAllocRealFileObject.c)
 *     ObOpenObjectByNameEx @ 0x14089BB40 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x14089C4F0 (ObCreateObjectEx.c)
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14090CE40 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpIsSystemEntity @ 0x14090D660 (CmpIsSystemEntity.c)
 *     PsImpersonateClient @ 0x1409102D0 (PsImpersonateClient.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1409227D0 (EtwpGetSidExtendedHeaderItem.c)
 *     ObCreateObject @ 0x14098A240 (ObCreateObject.c)
 *     PsQueryProcessAttributes @ 0x1409D67A0 (PsQueryProcessAttributes.c)
 *     ObRetagReferences @ 0x1409D69F0 (ObRetagReferences.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140257DF0 (ObGetCurrentIrql.c)
 *     RtlCaptureStackBackTrace @ 0x14027C690 (RtlCaptureStackBackTrace.c)
 *     MmCanThreadFault @ 0x14027DC40 (MmCanThreadFault.c)
 *     EtwTraceObjectOperation @ 0x140401410 (EtwTraceObjectOperation.c)
 *     ObpDeferPushRefDerefInfo @ 0x1405CC360 (ObpDeferPushRefDerefInfo.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObpPushRefDerefInfo @ 0x140745228 (ObpPushRefDerefInfo.c)
 */

char __fastcall ObpPushStackInfo(__int64 a1, char a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rcx
  USHORT v9; // ax
  signed __int32 v10; // ebx
  BOOL CanThreadFault; // eax
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
