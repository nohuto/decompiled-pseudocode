/*
 * XREFs of ZwRaiseException @ 0x180162EC0
 * Callers:
 *     RtlUnwindEx @ 0x180041E80 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x18008CDF0 (RtlRaiseException.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x18010B594 (WerpBreakIntoDebuggerIfPresent.c)
 *     RtlRaiseNoncontinuableException @ 0x18011F600 (RtlRaiseNoncontinuableException.c)
 *     LdrpLogFatalUserCallbackException @ 0x18015E6B0 (LdrpLogFatalUserCallbackException.c)
 *     KiUserExceptionDispatcher @ 0x1801640B0 (KiUserExceptionDispatcher.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, BOOLEAN FirstChance)
{
  NTSTATUS result; // eax

  result = 372;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
