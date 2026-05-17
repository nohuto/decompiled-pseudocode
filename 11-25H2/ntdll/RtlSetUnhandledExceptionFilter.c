/*
 * XREFs of RtlSetUnhandledExceptionFilter @ 0x1800EBAE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEncodePointer @ 0x1800EBB00 (RtlEncodePointer.c)
 */

__int64 __fastcall RtlSetUnhandledExceptionFilter(__int64 a1)
{
  __int64 result; // rax

  result = RtlEncodePointer(a1);
  RtlpUnhandledExceptionFilter = result;
  return result;
}
