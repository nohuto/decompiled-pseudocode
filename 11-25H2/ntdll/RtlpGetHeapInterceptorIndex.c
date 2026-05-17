/*
 * XREFs of RtlpGetHeapInterceptorIndex @ 0x18011F114
 * Callers:
 *     RtlpHpHeapCreate @ 0x1800351B4 (RtlpHpHeapCreate.c)
 *     RtlpCreateHeap @ 0x180036390 (RtlpCreateHeap.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1801441D0 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetHeapInterceptorIndex(__int64 (__fastcall *a1)())
{
  __int64 result; // rax
  bool v2; // zf

  LOWORD(result) = 0;
  while ( (unsigned __int16)result < 2u )
  {
    v2 = RtlpInterceptorRoutines[(unsigned __int16)result] == a1;
    result = (unsigned __int16)(result + 1);
    if ( v2 )
      return result;
  }
  return 0LL;
}
