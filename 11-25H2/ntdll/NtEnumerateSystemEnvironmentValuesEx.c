/*
 * XREFs of NtEnumerateSystemEnvironmentValuesEx @ 0x180164F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtEnumerateSystemEnvironmentValuesEx()
{
  __int64 result; // rax

  result = 233LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
