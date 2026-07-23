/*
 * XREFs of ExpLookupHandleTableEntry @ 0x1408481F0
 * Callers:
 *     ObDuplicateObject @ 0x14083C270 (ObDuplicateObject.c)
 *     PsLookupThreadByThreadId @ 0x140846770 (PsLookupThreadByThreadId.c)
 *     ObpCloseHandle @ 0x140846A30 (ObpCloseHandle.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     ExMapHandleToPointer @ 0x140846FB0 (ExMapHandleToPointer.c)
 *     ObWaitForMultipleObjects @ 0x140847240 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     PsOpenProcess @ 0x140850610 (PsOpenProcess.c)
 *     ExEnumHandleTable @ 0x140861190 (ExEnumHandleTable.c)
 *     ObReferenceFileObjectForWrite @ 0x140863440 (ObReferenceFileObjectForWrite.c)
 *     ExDupHandleTable @ 0x140891770 (ExDupHandleTable.c)
 *     AlpcpLookupMessage @ 0x140892E20 (AlpcpLookupMessage.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140894C20 (ObpReferenceProcessObjectByHandle.c)
 *     ExMapHandleToPointerEx @ 0x140896120 (ExMapHandleToPointerEx.c)
 *     AlpcpSendMessage @ 0x140898440 (AlpcpSendMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x14089F010 (NtAlpcImpersonateClientOfPort.c)
 *     NtWriteFile @ 0x1408BEB30 (NtWriteFile.c)
 *     PspThreadFromTicket @ 0x1408EA5C0 (PspThreadFromTicket.c)
 *     PsLookupProcessByProcessId @ 0x1408F21F0 (PsLookupProcessByProcessId.c)
 *     RtlQueryAtomInAtomTable @ 0x1408F4910 (RtlQueryAtomInAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1408F4D50 (RtlpAtomMapAtomToHandleEntry.c)
 *     ExpSetHandleExtraInfo @ 0x14094CF14 (ExpSetHandleExtraInfo.c)
 *     RtlLookupAtomInAtomTable @ 0x14097DD80 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x140986FF0 (RtlpHashStringToAtom.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409892F0 (NtAlertThreadByThreadIdEx.c)
 *     ExQueryProcessHandleInformation @ 0x1409C6748 (ExQueryProcessHandleInformation.c)
 *     ExpGetNextHandleTableEntry @ 0x1409C6940 (ExpGetNextHandleTableEntry.c)
 *     ExSweepHandleTable @ 0x1409DFA8C (ExSweepHandleTable.c)
 *     ObSetHandleAttributes @ 0x1409F4780 (ObSetHandleAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpLookupHandleTableEntry(unsigned int *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // r8

  v2 = a2 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v2 >= *a1 )
    return 0LL;
  v3 = *((_QWORD *)a1 + 1);
  if ( (v3 & 3) == 1 )
    return *(_QWORD *)(v3 + 8 * (v2 >> 10) - 1) + 4 * (v2 & 0x3FF);
  if ( (v3 & 3) != 0 )
    return *(_QWORD *)(*(_QWORD *)(v3 + 8 * (v2 >> 19) - 2) + 8 * ((v2 >> 10) & 0x1FF)) + 4 * (v2 & 0x3FF);
  return v3 + 4 * v2;
}
