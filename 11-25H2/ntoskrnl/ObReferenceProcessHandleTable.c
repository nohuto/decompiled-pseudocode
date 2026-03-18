/*
 * XREFs of ObReferenceProcessHandleTable @ 0x1408ADC40
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140593A48 (IoRevokeHandlesForProcess.c)
 *     PsSetProcessHandleTracingInformation @ 0x140764BE8 (PsSetProcessHandleTracingInformation.c)
 *     EtwpObjectHandleRundown @ 0x1407A1B9C (EtwpObjectHandleRundown.c)
 *     ObpCloseHandle @ 0x14084E9C0 (ObpCloseHandle.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     ObWaitForMultipleObjects @ 0x14084F1D0 (ObWaitForMultipleObjects.c)
 *     ObCaptureObjectStateForDuplication @ 0x1408AD75C (ObCaptureObjectStateForDuplication.c)
 *     ObCompleteObjectDuplication @ 0x1408AD954 (ObCompleteObjectDuplication.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     PspRundownSingleProcess @ 0x1408E0448 (PspRundownSingleProcess.c)
 *     ObInitProcess @ 0x1409716EC (ObInitProcess.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140986080 (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x140986140 (IopQueryProcessIdsUsingFile.c)
 *     ObFindHandleForObject @ 0x140986410 (ObFindHandleForObject.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 *     ObSetHandleAttributes @ 0x1409FE7C0 (ObSetHandleAttributes.c)
 *     ObQueryObjectAuditingByHandle @ 0x140A0E3A0 (ObQueryObjectAuditingByHandle.c)
 *     PspApplyMitigationOptions @ 0x140A521AC (PspApplyMitigationOptions.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExfAcquireRundownProtection @ 0x140326BD0 (ExfAcquireRundownProtection.c)
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
