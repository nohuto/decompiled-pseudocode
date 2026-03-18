/*
 * XREFs of ExpBlockOnLockedHandleEntry @ 0x140851898
 * Callers:
 *     ExLockHandleTableEntry @ 0x1404018A0 (ExLockHandleTableEntry.c)
 *     ObDuplicateObject @ 0x140843A40 (ObDuplicateObject.c)
 *     PsLookupThreadByThreadId @ 0x14084E700 (PsLookupThreadByThreadId.c)
 *     ObpCloseHandle @ 0x14084E9C0 (ObpCloseHandle.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     ExMapHandleToPointer @ 0x14084EF40 (ExMapHandleToPointer.c)
 *     ObWaitForMultipleObjects @ 0x14084F1D0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     PsOpenProcess @ 0x1408572E0 (PsOpenProcess.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140859580 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpLookupMessage @ 0x1408AAFC0 (AlpcpLookupMessage.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1408ADCB0 (ObpReferenceProcessObjectByHandle.c)
 *     AlpcpSendMessage @ 0x1408B0BA0 (AlpcpSendMessage.c)
 *     ExMapHandleToPointerEx @ 0x1408B4C40 (ExMapHandleToPointerEx.c)
 *     PspThreadFromTicket @ 0x1408B93E0 (PspThreadFromTicket.c)
 *     NtWriteFile @ 0x1408C32D0 (NtWriteFile.c)
 *     RtlQueryAtomInAtomTable @ 0x14091E760 (RtlQueryAtomInAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x14091EB80 (RtlpAtomMapAtomToHandleEntry.c)
 *     ExpSnapShotHandleTables @ 0x140921A40 (ExpSnapShotHandleTables.c)
 *     PsLookupProcessByProcessId @ 0x140921F20 (PsLookupProcessByProcessId.c)
 *     RtlLookupAtomInAtomTable @ 0x1409529A0 (RtlLookupAtomInAtomTable.c)
 *     ObReferenceFileObjectForWrite @ 0x140970E80 (ObReferenceFileObjectForWrite.c)
 *     ExSweepHandleTable @ 0x140972794 (ExSweepHandleTable.c)
 *     ExEnumHandleTable @ 0x1409864C0 (ExEnumHandleTable.c)
 *     RtlpHashStringToAtom @ 0x14099BF00 (RtlpHashStringToAtom.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409A4E30 (NtAlertThreadByThreadIdEx.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x14036E7C0 (ExBlockOnAddressPushLock.c)
 */

__int64 __fastcall ExpBlockOnLockedHandleEntry(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ExBlockOnAddressPushLock((signed __int64 *)(a1 + 48), a2, &v4, 8LL, 0LL);
}
