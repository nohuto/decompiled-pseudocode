/*
 * XREFs of ZwTestAlert @ 0x180163AA0
 * Callers:
 *     _LdrpInitialize @ 0x1800AEAE4 (_LdrpInitialize.c)
 *     KiUserApcHandler @ 0x180163EC0 (KiUserApcHandler.c)
 * Callees:
 *     <none>
 */

NTSTATUS ZwTestAlert(void)
{
  NTSTATUS result; // eax

  result = 467;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
