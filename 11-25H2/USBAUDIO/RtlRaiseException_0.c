/*
 * XREFs of RtlRaiseException_0 @ 0x14001C605
 * Callers:
 *     RaiseException @ 0x14001C000 (RaiseException.c)
 *     _raise_exc_ex @ 0x14001C110 (_raise_exc_ex.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlRaiseException_0(PEXCEPTION_RECORD ExceptionRecord)
{
  RtlRaiseException(ExceptionRecord);
}
