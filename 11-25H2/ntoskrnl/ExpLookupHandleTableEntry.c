/*
 * XREFs of ExpLookupHandleTableEntry @ 0x140850180
 * Callers:
 *     ObDuplicateObject @ 0x140843A40 (ObDuplicateObject.c)
 *     PsLookupThreadByThreadId @ 0x14084E700 (PsLookupThreadByThreadId.c)
 *     ObpCloseHandle @ 0x14084E9C0 (ObpCloseHandle.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     ExMapHandleToPointer @ 0x14084EF40 (ExMapHandleToPointer.c)
 *     ObWaitForMultipleObjects @ 0x14084F1D0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
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
 *     PsLookupProcessByProcessId @ 0x140921F20 (PsLookupProcessByProcessId.c)
 *     RtlLookupAtomInAtomTable @ 0x1409529A0 (RtlLookupAtomInAtomTable.c)
 *     ObReferenceFileObjectForWrite @ 0x140970E80 (ObReferenceFileObjectForWrite.c)
 *     ExpSetHandleExtraInfo @ 0x140971274 (ExpSetHandleExtraInfo.c)
 *     ExQueryProcessHandleInformation @ 0x140971498 (ExQueryProcessHandleInformation.c)
 *     ExpGetNextHandleTableEntry @ 0x140971690 (ExpGetNextHandleTableEntry.c)
 *     ExDupHandleTable @ 0x140971B80 (ExDupHandleTable.c)
 *     ExSweepHandleTable @ 0x140972794 (ExSweepHandleTable.c)
 *     ExEnumHandleTable @ 0x1409864C0 (ExEnumHandleTable.c)
 *     RtlpHashStringToAtom @ 0x14099BF00 (RtlpHashStringToAtom.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409A4E30 (NtAlertThreadByThreadIdEx.c)
 *     ObSetHandleAttributes @ 0x1409FE7C0 (ObSetHandleAttributes.c)
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
