/*
 * XREFs of ObReferenceProcessHandleTable @ 0x140894BB0
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1405940D8 (IoRevokeHandlesForProcess.c)
 *     PsSetProcessHandleTracingInformation @ 0x1407747D8 (PsSetProcessHandleTracingInformation.c)
 *     EtwpObjectHandleRundown @ 0x1407B13BC (EtwpObjectHandleRundown.c)
 *     ObpCloseHandle @ 0x140846A30 (ObpCloseHandle.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     ObWaitForMultipleObjects @ 0x140847240 (ObWaitForMultipleObjects.c)
 *     IopQueryProcessIdsUsingFile @ 0x140860E10 (IopQueryProcessIdsUsingFile.c)
 *     ObFindHandleForObject @ 0x1408610E0 (ObFindHandleForObject.c)
 *     ObCaptureObjectStateForDuplication @ 0x1408946D0 (ObCaptureObjectStateForDuplication.c)
 *     ObCompleteObjectDuplication @ 0x1408948C8 (ObCompleteObjectDuplication.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     PspRundownSingleProcess @ 0x1408FED98 (PspRundownSingleProcess.c)
 *     ObInitProcess @ 0x14094D010 (ObInitProcess.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 *     ObSetHandleAttributes @ 0x1409F4780 (ObSetHandleAttributes.c)
 *     ObQueryObjectAuditingByHandle @ 0x140A0FC60 (ObQueryObjectAuditingByHandle.c)
 *     PspApplyMitigationOptions @ 0x140A4B32C (PspApplyMitigationOptions.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140A80988 (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExfAcquireRundownProtection @ 0x1402F60C0 (ExfAcquireRundownProtection.c)
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
