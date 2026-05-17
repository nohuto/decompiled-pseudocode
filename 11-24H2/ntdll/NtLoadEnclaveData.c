/*
 * XREFs of NtLoadEnclaveData @ 0x180163E60
 * Callers:
 *     LdrpLoadEnclaveModule @ 0x1800D9218 (LdrpLoadEnclaveModule.c)
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
