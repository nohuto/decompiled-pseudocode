/*
 * XREFs of RtlRaiseExceptionForReturnAddressHijack @ 0x1801646A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseException @ 0x18008CDF0 (RtlRaiseException.c)
 */

void RtlRaiseExceptionForReturnAddressHijack(void)
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+18h] [rbp-C0h] BYREF

  ExceptionRecord.ExceptionCode = -2147483597;
  memset(&ExceptionRecord.ExceptionFlags, 0, 24);
  RtlRaiseException(&ExceptionRecord);
}
