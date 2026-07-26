/*
 * XREFs of datapathVerifierReportProblemAsync @ 0x1400AA500
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisLiveBugCheck@@YAX_K000@Z @ 0x14009B88C (-ndisLiveBugCheck@@YAX_K000@Z.c)
 */

__int64 datapathVerifierReportProblemAsync()
{
  ndisLiveBugCheck(qword_140126FC0, qword_140126FC8, qword_140126FD0, qword_140126FD8);
  return (unsigned int)_InterlockedExchange(&dword_140126F74, 0);
}
