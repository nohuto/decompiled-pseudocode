/*
 * XREFs of ObpTraceObjectReferenceIfActive @ 0x14029B0E0
 * Callers:
 *     MiReferenceInPageFile @ 0x140208E60 (MiReferenceInPageFile.c)
 *     ObReferenceObjectSafeWithTag @ 0x140299100 (ObReferenceObjectSafeWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1402C235C (CcReferenceSharedCacheMapFileObject.c)
 *     MiViewMayContainPage @ 0x140321440 (MiViewMayContainPage.c)
 *     MiEmptyPageAccessLog @ 0x140322FE0 (MiEmptyPageAccessLog.c)
 *     MiReferenceControlAreaFileWithTag @ 0x140323330 (MiReferenceControlAreaFileWithTag.c)
 *     ObFastReferenceObject @ 0x140400CE0 (ObFastReferenceObject.c)
 *     ObReferenceObjectByPointerWithTag @ 0x14041B630 (ObReferenceObjectByPointerWithTag.c)
 *     ObReferenceObjectSafe @ 0x140420490 (ObReferenceObjectSafe.c)
 *     ObReferenceObjectExWithTag @ 0x1404297C0 (ObReferenceObjectExWithTag.c)
 *     MiReferenceControlAreaFile @ 0x14042F960 (MiReferenceControlAreaFile.c)
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x140431D24 (PopPushPowerStateTransitionRecordWithCallback.c)
 *     ObReferenceObjectByPointer @ 0x140435FB0 (ObReferenceObjectByPointer.c)
 *     ObDuplicateObject @ 0x140843A40 (ObDuplicateObject.c)
 *     PsLookupThreadByThreadId @ 0x14084E700 (PsLookupThreadByThreadId.c)
 *     ObWaitForMultipleObjects @ 0x14084F1D0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     PsOpenProcess @ 0x1408572E0 (PsOpenProcess.c)
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1408ADCB0 (ObpReferenceProcessObjectByHandle.c)
 *     PspThreadFromTicket @ 0x1408B93E0 (PspThreadFromTicket.c)
 *     NtWriteFile @ 0x1408C32D0 (NtWriteFile.c)
 *     PsLookupProcessByProcessId @ 0x140921F20 (PsLookupProcessByProcessId.c)
 *     ObReferenceFileObjectForWrite @ 0x140970E80 (ObReferenceFileObjectForWrite.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409A4E30 (NtAlertThreadByThreadIdEx.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 */

__int64 __fastcall ObpTraceObjectReferenceIfActive(int a1)
{
  __int64 result; // rax

  if ( ObpTraceFlags )
    return ObpPushStackInfo(a1);
  return result;
}
