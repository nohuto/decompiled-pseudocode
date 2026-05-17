/*
 * XREFs of ZwTestAlert @ 0x1801656E0
 * Callers:
 *     _LdrpInitialize @ 0x180066904 (_LdrpInitialize.c)
 *     KiUserApcHandler @ 0x180165B00 (KiUserApcHandler.c)
 * Callees:
 *     <none>
 */

__int64 ZwTestAlert()
{
  __int64 result; // rax

  result = 467LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
