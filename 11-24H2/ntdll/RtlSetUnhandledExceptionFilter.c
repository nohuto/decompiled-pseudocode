/*
 * XREFs of RtlSetUnhandledExceptionFilter @ 0x180003BB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEncodePointer @ 0x180004AC0 (RtlEncodePointer.c)
 */

__int64 RtlSetUnhandledExceptionFilter()
{
  __int64 result; // rax

  result = RtlEncodePointer();
  RtlpUnhandledExceptionFilter = result;
  return result;
}
