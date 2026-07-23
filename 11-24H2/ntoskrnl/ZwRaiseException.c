/*
 * XREFs of ZwRaiseException @ 0x1406AA230
 * Callers:
 *     RtlUnwindEx @ 0x1402322B0 (RtlUnwindEx.c)
 *     RtlRaiseNoncontinuableException @ 0x1404FA930 (RtlRaiseNoncontinuableException.c)
 *     RtlRaiseException @ 0x1405E5EE0 (RtlRaiseException.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, BOOLEAN FirstChance)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ExceptionRecord);
}
