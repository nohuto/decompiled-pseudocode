/*
 * XREFs of ZwCallbackReturn @ 0x180161D30
 * Callers:
 *     KiUserCallbackDispatcherHandler @ 0x180165C10 (KiUserCallbackDispatcherHandler.c)
 *     KiUserCallbackDispatcher @ 0x180165CA0 (KiUserCallbackDispatcher.c)
 * Callees:
 *     <none>
 */

__int64 ZwCallbackReturn()
{
  __int64 result; // rax

  result = 5LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
