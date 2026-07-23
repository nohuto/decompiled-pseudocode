/*
 * XREFs of ExpBlockOnLockedHandleEntry @ 0x140849D30
 * Callers:
 *     ExLockHandleTableEntry @ 0x140401530 (ExLockHandleTableEntry.c)
 *     ObDuplicateObject @ 0x14083C270 (ObDuplicateObject.c)
 *     PsLookupThreadByThreadId @ 0x140846770 (PsLookupThreadByThreadId.c)
 *     ObpCloseHandle @ 0x140846A30 (ObpCloseHandle.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     ExMapHandleToPointer @ 0x140846FB0 (ExMapHandleToPointer.c)
 *     ObWaitForMultipleObjects @ 0x140847240 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     PsOpenProcess @ 0x140850610 (PsOpenProcess.c)
 *     ExEnumHandleTable @ 0x140861190 (ExEnumHandleTable.c)
 *     ObReferenceFileObjectForWrite @ 0x140863440 (ObReferenceFileObjectForWrite.c)
 *     AlpcpLookupMessage @ 0x140892E20 (AlpcpLookupMessage.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140894C20 (ObpReferenceProcessObjectByHandle.c)
 *     ExMapHandleToPointerEx @ 0x140896120 (ExMapHandleToPointerEx.c)
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
 *     ExSweepHandleTable @ 0x1409DFA8C (ExSweepHandleTable.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1402BB7C0 (ExBlockOnAddressPushLock.c)
 */

__int64 __fastcall ExpBlockOnLockedHandleEntry(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ExBlockOnAddressPushLock((signed __int64 *)(a1 + 48), a2, &v4, 8LL, 0LL);
}
