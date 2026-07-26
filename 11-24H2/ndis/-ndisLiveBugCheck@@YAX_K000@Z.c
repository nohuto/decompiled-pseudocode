/*
 * XREFs of ?ndisLiveBugCheck@@YAX_K000@Z @ 0x14009049C
 * Callers:
 *     datapathVerifierReportProblem @ 0x1400A2250 (datapathVerifierReportProblem.c)
 *     datapathVerifierReportProblemAsync @ 0x1400A2350 (datapathVerifierReportProblemAsync.c)
 *     ndisReportTimeoutWaitingForExternalDriver @ 0x1401422E0 (ndisReportTimeoutWaitingForExternalDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisLiveBugCheck(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  DbgkWerCaptureLiveKernelDump(L"NDIS", 350LL, a1, a2, a3, a4, 0LL, 0LL, 0);
}
