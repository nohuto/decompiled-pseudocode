/*
 * XREFs of VfErrorStoreTriageInformation @ 0x140B955E0
 * Callers:
 *     VfReportIssueWithOptions @ 0x1406109F4 (VfReportIssueWithOptions.c)
 *     ViErrorFinishReport @ 0x140B9567C (ViErrorFinishReport.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140BA3F50 (ViCtxCheckAndReleaseIsrState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfErrorStoreTriageInformation(__int64 a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4, ULONG_PTR a5)
{
  unsigned int v5; // r10d

  v5 = 1;
  if ( _InterlockedExchange(&VfErrorBugcheckDataReady, 1) )
  {
    return 0;
  }
  else
  {
    VfErrorBugcheckData = a1;
    qword_140FFEFB8 = a2;
    qword_140FFEFC0 = a3;
    qword_140FFEFC8 = a4;
    qword_140FFEFD0 = a5;
  }
  return v5;
}
