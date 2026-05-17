/*
 * XREFs of ZwRaiseException @ 0x180166090
 * Callers:
 *     RtlRaiseException @ 0x180075020 (RtlRaiseException.c)
 *     RtlUnwindEx @ 0x180077090 (RtlUnwindEx.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800CF0F4 (WerpBreakIntoDebuggerIfPresent.c)
 *     RtlRaiseNoncontinuableException @ 0x180122EB0 (RtlRaiseNoncontinuableException.c)
 *     LdrpLogFatalUserCallbackException @ 0x180161840 (LdrpLogFatalUserCallbackException.c)
 *     KiUserExceptionDispatcher @ 0x180167280 (KiUserExceptionDispatcher.c)
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
