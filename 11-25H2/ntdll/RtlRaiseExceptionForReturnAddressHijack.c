/*
 * XREFs of RtlRaiseExceptionForReturnAddressHijack @ 0x180167870
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseException @ 0x180075020 (RtlRaiseException.c)
 */

void RtlRaiseExceptionForReturnAddressHijack(void)
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+18h] [rbp-C0h] BYREF

  ExceptionRecord.ExceptionCode = -2147483597;
  memset(&ExceptionRecord.ExceptionFlags, 0, 24);
  RtlRaiseException(&ExceptionRecord);
}
