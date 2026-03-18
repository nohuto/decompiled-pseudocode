/*
 * XREFs of ExGetHandlePointer @ 0x140431FD0
 * Callers:
 *     ObpShutdownCloseHandleProcedure @ 0x140737EC0 (ObpShutdownCloseHandleProcedure.c)
 *     EtwpObjectHandleEnumCallback @ 0x1407A1960 (EtwpObjectHandleEnumCallback.c)
 *     ObDuplicateObject @ 0x140843A40 (ObDuplicateObject.c)
 *     PsLookupThreadByThreadId @ 0x14084E700 (PsLookupThreadByThreadId.c)
 *     ObWaitForMultipleObjects @ 0x14084F1D0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandleTableEntry @ 0x1408501F0 (ObCloseHandleTableEntry.c)
 *     PsOpenProcess @ 0x1408572E0 (PsOpenProcess.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140859580 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpLookupMessage @ 0x1408AAFC0 (AlpcpLookupMessage.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1408ADCB0 (ObpReferenceProcessObjectByHandle.c)
 *     AlpcpSendMessage @ 0x1408B0BA0 (AlpcpSendMessage.c)
 *     PspThreadFromTicket @ 0x1408B93E0 (PspThreadFromTicket.c)
 *     NtWriteFile @ 0x1408C32D0 (NtWriteFile.c)
 *     RtlQueryAtomInAtomTable @ 0x14091E760 (RtlQueryAtomInAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x14091EB80 (RtlpAtomMapAtomToHandleEntry.c)
 *     ExpSnapShotHandleTables @ 0x140921A40 (ExpSnapShotHandleTables.c)
 *     PsLookupProcessByProcessId @ 0x140921F20 (PsLookupProcessByProcessId.c)
 *     RtlLookupAtomInAtomTable @ 0x1409529A0 (RtlLookupAtomInAtomTable.c)
 *     ObReferenceFileObjectForWrite @ 0x140970E80 (ObReferenceFileObjectForWrite.c)
 *     ObpAuditObjectAccess @ 0x140971330 (ObpAuditObjectAccess.c)
 *     ExQueryProcessHandleInformation @ 0x140971498 (ExQueryProcessHandleInformation.c)
 *     ObInheritObjectHandle @ 0x140972284 (ObInheritObjectHandle.c)
 *     IopIsFileOpenOrSection @ 0x140986620 (IopIsFileOpenOrSection.c)
 *     ObpEnumFindHandleProcedure @ 0x140986710 (ObpEnumFindHandleProcedure.c)
 *     PnpHandleProcessWalkWorker @ 0x1409867D0 (PnpHandleProcessWalkWorker.c)
 *     RtlpHashStringToAtom @ 0x14099BF00 (RtlpHashStringToAtom.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409A4E30 (NtAlertThreadByThreadIdEx.c)
 *     ObpCaptureHandleInformation @ 0x1409C6150 (ObpCaptureHandleInformation.c)
 *     ObpCaptureHandleInformationEx @ 0x1409CF8D0 (ObpCaptureHandleInformationEx.c)
 *     ObSetHandleAttributes @ 0x1409FE7C0 (ObSetHandleAttributes.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExGetHandlePointer(__int64 *a1)
{
  return (*a1 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
}
