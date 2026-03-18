/*
 * XREFs of ExpLookupHandleTableEntry @ 0x14084BF30
 * Callers:
 *     ObDuplicateObject @ 0x14083FFB0 (ObDuplicateObject.c)
 *     PsLookupThreadByThreadId @ 0x14084A4B0 (PsLookupThreadByThreadId.c)
 *     ObpCloseHandle @ 0x14084A770 (ObpCloseHandle.c)
 *     NtClose @ 0x14084AA00 (NtClose.c)
 *     ExMapHandleToPointer @ 0x14084ACF0 (ExMapHandleToPointer.c)
 *     ObWaitForMultipleObjects @ 0x14084AF80 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     PsOpenProcess @ 0x140854350 (PsOpenProcess.c)
 *     AlpcpSendMessage @ 0x14088E810 (AlpcpSendMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140896970 (NtAlpcImpersonateClientOfPort.c)
 *     NtWriteFile @ 0x1408C1170 (NtWriteFile.c)
 *     ExEnumHandleTable @ 0x1408EF990 (ExEnumHandleTable.c)
 *     PspThreadFromTicket @ 0x140912E70 (PspThreadFromTicket.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x140935E40 (RtlpAtomMapAtomToHandleEntry.c)
 *     ExpSetHandleExtraInfo @ 0x14093B924 (ExpSetHandleExtraInfo.c)
 *     ExQueryProcessHandleInformation @ 0x14093BA20 (ExQueryProcessHandleInformation.c)
 *     ExpGetNextHandleTableEntry @ 0x14093BC20 (ExpGetNextHandleTableEntry.c)
 *     ExDupHandleTable @ 0x14093D080 (ExDupHandleTable.c)
 *     AlpcpLookupMessage @ 0x14093E7E0 (AlpcpLookupMessage.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1409405E0 (ObpReferenceProcessObjectByHandle.c)
 *     PsLookupProcessByProcessId @ 0x14094DC80 (PsLookupProcessByProcessId.c)
 *     ObReferenceFileObjectForWrite @ 0x140988C30 (ObReferenceFileObjectForWrite.c)
 *     ExMapHandleToPointerEx @ 0x14098A1A0 (ExMapHandleToPointerEx.c)
 *     RtlLookupAtomInAtomTable @ 0x140992D40 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x14099CFC0 (RtlpHashStringToAtom.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409A5CD0 (NtAlertThreadByThreadIdEx.c)
 *     ExSweepHandleTable @ 0x1409E502C (ExSweepHandleTable.c)
 *     ObSetHandleAttributes @ 0x1409FBA40 (ObSetHandleAttributes.c)
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
