/*
 * XREFs of ExGetHandlePointer @ 0x14041B770
 * Callers:
 *     ObpShutdownCloseHandleProcedure @ 0x140741E10 (ObpShutdownCloseHandleProcedure.c)
 *     EtwpObjectHandleEnumCallback @ 0x1407B1180 (EtwpObjectHandleEnumCallback.c)
 *     ObDuplicateObject @ 0x14083C270 (ObDuplicateObject.c)
 *     PsLookupThreadByThreadId @ 0x140846770 (PsLookupThreadByThreadId.c)
 *     ObWaitForMultipleObjects @ 0x140847240 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandleTableEntry @ 0x140848260 (ObCloseHandleTableEntry.c)
 *     PsOpenProcess @ 0x140850610 (PsOpenProcess.c)
 *     IopIsFileOpenOrSection @ 0x1408612F0 (IopIsFileOpenOrSection.c)
 *     ObpEnumFindHandleProcedure @ 0x1408613E0 (ObpEnumFindHandleProcedure.c)
 *     PnpHandleProcessWalkWorker @ 0x1408614A0 (PnpHandleProcessWalkWorker.c)
 *     ObReferenceFileObjectForWrite @ 0x140863440 (ObReferenceFileObjectForWrite.c)
 *     ObpAuditObjectAccess @ 0x140863834 (ObpAuditObjectAccess.c)
 *     ObInheritObjectHandle @ 0x140891E74 (ObInheritObjectHandle.c)
 *     AlpcpLookupMessage @ 0x140892E20 (AlpcpLookupMessage.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140894C20 (ObpReferenceProcessObjectByHandle.c)
 *     AlpcpSendMessage @ 0x140898440 (AlpcpSendMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x14089F010 (NtAlpcImpersonateClientOfPort.c)
 *     NtWriteFile @ 0x1408BEB30 (NtWriteFile.c)
 *     PspThreadFromTicket @ 0x1408EA5C0 (PspThreadFromTicket.c)
 *     ExpSnapShotHandleTables @ 0x1408F1D40 (ExpSnapShotHandleTables.c)
 *     PsLookupProcessByProcessId @ 0x1408F21F0 (PsLookupProcessByProcessId.c)
 *     RtlQueryAtomInAtomTable @ 0x1408F4910 (RtlQueryAtomInAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1408F4D50 (RtlpAtomMapAtomToHandleEntry.c)
 *     RtlLookupAtomInAtomTable @ 0x14097DD80 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x140986FF0 (RtlpHashStringToAtom.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409892F0 (NtAlertThreadByThreadIdEx.c)
 *     ObpCaptureHandleInformation @ 0x14099AFB0 (ObpCaptureHandleInformation.c)
 *     ObpCaptureHandleInformationEx @ 0x1409C30F0 (ObpCaptureHandleInformationEx.c)
 *     ExQueryProcessHandleInformation @ 0x1409C6748 (ExQueryProcessHandleInformation.c)
 *     ObSetHandleAttributes @ 0x1409F4780 (ObSetHandleAttributes.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExGetHandlePointer(__int64 *a1)
{
  return (*a1 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
}
