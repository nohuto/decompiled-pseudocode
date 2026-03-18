/*
 * XREFs of ExpBlockOnLockedHandleEntry @ 0x14084DA70
 * Callers:
 *     ExLockHandleTableEntry @ 0x140409050 (ExLockHandleTableEntry.c)
 *     ObDuplicateObject @ 0x14083FFB0 (ObDuplicateObject.c)
 *     PsLookupThreadByThreadId @ 0x14084A4B0 (PsLookupThreadByThreadId.c)
 *     ObpCloseHandle @ 0x14084A770 (ObpCloseHandle.c)
 *     NtClose @ 0x14084AA00 (NtClose.c)
 *     ExMapHandleToPointer @ 0x14084ACF0 (ExMapHandleToPointer.c)
 *     ObWaitForMultipleObjects @ 0x14084AF80 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     PsOpenProcess @ 0x140854350 (PsOpenProcess.c)
 *     AlpcpSendMessage @ 0x14088E810 (AlpcpSendMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140896970 (NtAlpcImpersonateClientOfPort.c)
 *     NtWriteFile @ 0x1408C1170 (NtWriteFile.c)
 *     ExEnumHandleTable @ 0x1408EF990 (ExEnumHandleTable.c)
 *     PspThreadFromTicket @ 0x140912E70 (PspThreadFromTicket.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x140935E40 (RtlpAtomMapAtomToHandleEntry.c)
 *     AlpcpLookupMessage @ 0x14093E7E0 (AlpcpLookupMessage.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1409405E0 (ObpReferenceProcessObjectByHandle.c)
 *     ExpSnapShotHandleTables @ 0x14094D7D0 (ExpSnapShotHandleTables.c)
 *     PsLookupProcessByProcessId @ 0x14094DC80 (PsLookupProcessByProcessId.c)
 *     ObReferenceFileObjectForWrite @ 0x140988C30 (ObReferenceFileObjectForWrite.c)
 *     ExMapHandleToPointerEx @ 0x14098A1A0 (ExMapHandleToPointerEx.c)
 *     RtlLookupAtomInAtomTable @ 0x140992D40 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x14099CFC0 (RtlpHashStringToAtom.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409A5CD0 (NtAlertThreadByThreadIdEx.c)
 *     ExSweepHandleTable @ 0x1409E502C (ExSweepHandleTable.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1402C6C40 (ExBlockOnAddressPushLock.c)
 */

__int64 __fastcall ExpBlockOnLockedHandleEntry(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ExBlockOnAddressPushLock((signed __int64 *)(a1 + 48), a2, &v4, 8LL, 0LL);
}
