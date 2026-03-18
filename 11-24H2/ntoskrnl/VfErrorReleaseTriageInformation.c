/*
 * XREFs of VfErrorReleaseTriageInformation @ 0x140B934B0
 * Callers:
 *     VfReportIssueWithOptions @ 0x140612434 (VfReportIssueWithOptions.c)
 * Callees:
 *     <none>
 */

__int64 VfErrorReleaseTriageInformation()
{
  return (unsigned int)_InterlockedExchange(&VfErrorBugcheckDataReady, 0);
}
