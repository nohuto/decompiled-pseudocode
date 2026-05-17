/*
 * XREFs of ZwRaiseException @ 0x180164B00
 * Callers:
 *     WerpBreakIntoDebuggerIfPresent @ 0x180001534 (WerpBreakIntoDebuggerIfPresent.c)
 *     RtlUnwindEx @ 0x180015480 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x180070510 (RtlRaiseException.c)
 *     RtlRaiseNoncontinuableException @ 0x1801213D0 (RtlRaiseNoncontinuableException.c)
 *     LdrpLogFatalUserCallbackException @ 0x1801602F0 (LdrpLogFatalUserCallbackException.c)
 *     KiUserExceptionDispatcher @ 0x180165CF0 (KiUserExceptionDispatcher.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRaiseException()
{
  __int64 result; // rax

  result = 372LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
