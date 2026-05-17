/*
 * XREFs of NtLoadEnclaveData @ 0x1801653F0
 * Callers:
 *     LdrpLoadEnclaveModule @ 0x1800D91B8 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     <none>
 */

__int64 NtLoadEnclaveData()
{
  __int64 result; // rax

  result = 271LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
