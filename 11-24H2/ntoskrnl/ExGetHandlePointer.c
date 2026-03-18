/*
 * XREFs of ExGetHandlePointer @ 0x1404275E0
 * Callers:
 *     ObpShutdownCloseHandleProcedure @ 0x140743EE0 (ObpShutdownCloseHandleProcedure.c)
 *     EtwpObjectHandleEnumCallback @ 0x1407B0D30 (EtwpObjectHandleEnumCallback.c)
 *     ObDuplicateObject @ 0x14083FFB0 (ObDuplicateObject.c)
 *     PsLookupThreadByThreadId @ 0x14084A4B0 (PsLookupThreadByThreadId.c)
 *     ObWaitForMultipleObjects @ 0x14084AF80 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandleTableEntry @ 0x14084BFA0 (ObCloseHandleTableEntry.c)
 *     PsOpenProcess @ 0x140854350 (PsOpenProcess.c)
 *     AlpcpSendMessage @ 0x14088E810 (AlpcpSendMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140896970 (NtAlpcImpersonateClientOfPort.c)
 *     NtWriteFile @ 0x1408C1170 (NtWriteFile.c)
 *     IopIsFileOpenOrSection @ 0x1408EFAF0 (IopIsFileOpenOrSection.c)
 *     ObpEnumFindHandleProcedure @ 0x1408EFBE0 (ObpEnumFindHandleProcedure.c)
 *     PnpHandleProcessWalkWorker @ 0x1408EFCA0 (PnpHandleProcessWalkWorker.c)
 *     PspThreadFromTicket @ 0x140912E70 (PspThreadFromTicket.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x140935E40 (RtlpAtomMapAtomToHandleEntry.c)
 *     ExQueryProcessHandleInformation @ 0x14093BA20 (ExQueryProcessHandleInformation.c)
 *     ObInheritObjectHandle @ 0x14093D784 (ObInheritObjectHandle.c)
 *     AlpcpLookupMessage @ 0x14093E7E0 (AlpcpLookupMessage.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1409405E0 (ObpReferenceProcessObjectByHandle.c)
 *     ExpSnapShotHandleTables @ 0x14094D7D0 (ExpSnapShotHandleTables.c)
 *     PsLookupProcessByProcessId @ 0x14094DC80 (PsLookupProcessByProcessId.c)
 *     ObReferenceFileObjectForWrite @ 0x140988C30 (ObReferenceFileObjectForWrite.c)
 *     ObpAuditObjectAccess @ 0x140989024 (ObpAuditObjectAccess.c)
 *     RtlLookupAtomInAtomTable @ 0x140992D40 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x14099CFC0 (RtlpHashStringToAtom.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409A5CD0 (NtAlertThreadByThreadIdEx.c)
 *     ObpCaptureHandleInformation @ 0x1409B14F0 (ObpCaptureHandleInformation.c)
 *     ObpCaptureHandleInformationEx @ 0x1409D32C0 (ObpCaptureHandleInformationEx.c)
 *     ObSetHandleAttributes @ 0x1409FBA40 (ObSetHandleAttributes.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExGetHandlePointer(__int64 *a1)
{
  return (*a1 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
}
