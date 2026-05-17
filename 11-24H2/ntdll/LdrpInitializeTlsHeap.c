/*
 * XREFs of LdrpInitializeTlsHeap @ 0x18008EE94
 * Callers:
 *     LdrpInitializeTls @ 0x18008ECD0 (LdrpInitializeTls.c)
 * Callees:
 *     RtlSetHeapInformation @ 0x180096E70 (RtlSetHeapInformation.c)
 *     RtlpCreateHeap @ 0x1800A7550 (RtlpCreateHeap.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 LdrpInitializeTlsHeap()
{
  __int64 result; // rax
  __int64 Heap; // rax
  __int64 v2; // [rsp+40h] [rbp-18h] BYREF

  v2 = 0x70616548534C54LL;
  if ( !qword_1801D29A8 )
  {
    LdrpTlsHeap = (__int64)NtCurrentPeb()->ProcessHeap;
    return 0LL;
  }
  Heap = RtlpCreateHeap(2, 0, 0, 0, 0LL, 0LL, 0);
  LdrpTlsHeap = Heap;
  if ( !Heap )
    return 3221225495LL;
  result = RtlSetHeapInformation(Heap, 7LL, &v2, 8LL);
  if ( (int)result >= 0 || AvrfAppVerifierMode )
    return 0LL;
  return result;
}
