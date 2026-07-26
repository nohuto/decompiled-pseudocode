/*
 * XREFs of ?ndisLiveBugCheck@@YAX_K000@Z @ 0x14009B88C
 * Callers:
 *     datapathVerifierReportProblem @ 0x1400AA400 (datapathVerifierReportProblem.c)
 *     datapathVerifierReportProblemAsync @ 0x1400AA500 (datapathVerifierReportProblemAsync.c)
 *     ndisReportTimeoutWaitingForExternalDriver @ 0x14014CFB0 (ndisReportTimeoutWaitingForExternalDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisLiveBugCheck(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  DbgkWerCaptureLiveKernelDump(L"NDIS", 350LL, a1, a2, a3, a4, 0LL, 0LL, 0);
}
