/*
 * XREFs of RtlpGetHeapInterceptorIndex @ 0x18011D844
 * Callers:
 *     RtlpHpHeapCreate @ 0x1800A6374 (RtlpHpHeapCreate.c)
 *     RtlpCreateHeap @ 0x1800A7550 (RtlpCreateHeap.c)
 *     RtlpSetHeapDebuggingInformation @ 0x180142AE0 (RtlpSetHeapDebuggingInformation.c)
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
