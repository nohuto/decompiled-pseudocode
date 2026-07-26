/*
 * XREFs of datapathVerifierReportProblemAsync @ 0x1400A2350
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisLiveBugCheck@@YAX_K000@Z @ 0x14009049C (-ndisLiveBugCheck@@YAX_K000@Z.c)
 */

__int64 datapathVerifierReportProblemAsync()
{
  ndisLiveBugCheck(qword_14011CF10, qword_14011CF18, qword_14011CF20, qword_14011CF28);
  return (unsigned int)_InterlockedExchange(&dword_14011CEC4, 0);
}
