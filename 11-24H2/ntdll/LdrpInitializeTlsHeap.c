/*
 * XREFs of LdrpInitializeTlsHeap @ 0x180026868
 * Callers:
 *     LdrpInitializeTls @ 0x1800266A4 (LdrpInitializeTls.c)
 * Callees:
 *     RtlpCreateHeap @ 0x1800248B0 (RtlpCreateHeap.c)
 *     RtlSetHeapInformation @ 0x18002BE70 (RtlSetHeapInformation.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

NTSTATUS LdrpInitializeTlsHeap()
{
  NTSTATUS result; // eax
  char *Heap; // rax
  __int64 HeapInformation; // [rsp+40h] [rbp-18h] BYREF

  HeapInformation = 0x70616548534C54LL;
  if ( !qword_1801D19A8 )
  {
    LdrpTlsHeap = NtCurrentPeb()->ProcessHeap;
    return 0;
  }
  Heap = RtlpCreateHeap(2u, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  LdrpTlsHeap = Heap;
  if ( !Heap )
    return -1073741801;
  result = RtlSetHeapInformation(Heap, HeapTag, &HeapInformation, 8uLL);
  if ( result >= 0 || AvrfAppVerifierMode )
    return 0;
  return result;
}
