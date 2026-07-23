/*
 * XREFs of LdrpInitializeTlsHeap @ 0x1800B8054
 * Callers:
 *     LdrpInitializeTls @ 0x1800B7E90 (LdrpInitializeTls.c)
 * Callees:
 *     RtlSetHeapInformation @ 0x1800024D0 (RtlSetHeapInformation.c)
 *     RtlpCreateHeap @ 0x180036390 (RtlpCreateHeap.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

NTSTATUS LdrpInitializeTlsHeap()
{
  NTSTATUS result; // eax
  void *Heap; // rax
  __int64 HeapInformation; // [rsp+40h] [rbp-18h] BYREF

  HeapInformation = 0x70616548534C54LL;
  if ( !qword_1801D4A28 )
  {
    LdrpTlsHeap = NtCurrentPeb()->ProcessHeap;
    return 0;
  }
  Heap = (void *)RtlpCreateHeap(2, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  LdrpTlsHeap = Heap;
  if ( !Heap )
    return -1073741801;
  result = RtlSetHeapInformation(Heap, HeapTag, &HeapInformation, 8uLL);
  if ( result >= 0 || AvrfAppVerifierMode )
    return 0;
  return result;
}
