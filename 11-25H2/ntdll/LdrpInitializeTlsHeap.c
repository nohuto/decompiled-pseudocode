/*
 * XREFs of LdrpInitializeTlsHeap @ 0x1800B8054
 * Callers:
 *     LdrpInitializeTls @ 0x1800B7E90 (LdrpInitializeTls.c)
 * Callees:
 *     RtlSetHeapInformation @ 0x1800024D0 (RtlSetHeapInformation.c)
 *     RtlpCreateHeap @ 0x180036390 (RtlpCreateHeap.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 LdrpInitializeTlsHeap()
{
  __int64 result; // rax
  _DWORD *Heap; // rax
  __int64 v2; // [rsp+40h] [rbp-18h] BYREF

  v2 = 0x70616548534C54LL;
  if ( !qword_1801D4A28 )
  {
    LdrpTlsHeap = (__int64)NtCurrentPeb()->ProcessHeap;
    return 0LL;
  }
  Heap = (_DWORD *)RtlpCreateHeap(2, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  LdrpTlsHeap = (__int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  result = RtlSetHeapInformation(Heap, 7, (__int64)&v2, 8uLL);
  if ( (int)result >= 0 || AvrfAppVerifierMode )
    return 0LL;
  return result;
}
