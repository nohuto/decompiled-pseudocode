/*
 * XREFs of ObReferenceProcessHandleTable @ 0x140940570
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140597158 (IoRevokeHandlesForProcess.c)
 *     PsSetProcessHandleTracingInformation @ 0x1407745B8 (PsSetProcessHandleTracingInformation.c)
 *     EtwpObjectHandleRundown @ 0x1407B0F6C (EtwpObjectHandleRundown.c)
 *     ObpCloseHandle @ 0x14084A770 (ObpCloseHandle.c)
 *     NtClose @ 0x14084AA00 (NtClose.c)
 *     ObWaitForMultipleObjects @ 0x14084AF80 (ObWaitForMultipleObjects.c)
 *     PspRundownSingleProcess @ 0x1408A8B38 (PspRundownSingleProcess.c)
 *     IopQueryProcessIdsUsingFile @ 0x1408EF610 (IopQueryProcessIdsUsingFile.c)
 *     ObFindHandleForObject @ 0x1408EF8E0 (ObFindHandleForObject.c)
 *     ObInitProcess @ 0x14093BD38 (ObInitProcess.c)
 *     ObCaptureObjectStateForDuplication @ 0x140940090 (ObCaptureObjectStateForDuplication.c)
 *     ObCompleteObjectDuplication @ 0x140940288 (ObCompleteObjectDuplication.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 *     ObSetHandleAttributes @ 0x1409FBA40 (ObSetHandleAttributes.c)
 *     ObQueryObjectAuditingByHandle @ 0x140A16A80 (ObQueryObjectAuditingByHandle.c)
 *     PspApplyMitigationOptions @ 0x140A5333C (PspApplyMitigationOptions.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140A85E48 (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExfAcquireRundownProtection @ 0x140247210 (ExfAcquireRundownProtection.c)
 */

unsigned __int64 __fastcall ObReferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v2; // rbx
  unsigned __int64 v3; // rtt
  unsigned __int64 Count; // rdi

  v2 = a1 + 61;
  _m_prefetchw(&a1[61]);
  v3 = a1[61].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v3 != _InterlockedCompareExchange64((volatile signed __int64 *)&a1[61], v3 + 2, v3)
    && !ExfAcquireRundownProtection(a1 + 61) )
  {
    return 0LL;
  }
  Count = a1[96].Count;
  if ( !Count )
    ExReleaseRundownProtection_0(v2);
  return Count;
}
