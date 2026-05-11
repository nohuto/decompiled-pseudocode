/*
 * XREFs of RtlRaiseException_0 @ 0x14001BAD5
 * Callers:
 *     RaiseException @ 0x14001B4D0 (RaiseException.c)
 *     _raise_exc_ex @ 0x14001B5E0 (_raise_exc_ex.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlRaiseException_0(PEXCEPTION_RECORD ExceptionRecord)
{
  RtlRaiseException(ExceptionRecord);
}
