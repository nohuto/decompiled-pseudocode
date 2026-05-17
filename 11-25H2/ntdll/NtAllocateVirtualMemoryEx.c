/*
 * XREFs of NtAllocateVirtualMemoryEx @ 0x180164110
 * Callers:
 *     RtlpHpEnvAllocVA @ 0x1800BB710 (RtlpHpEnvAllocVA.c)
 * Callees:
 *     <none>
 */

__int64 NtAllocateVirtualMemoryEx()
{
  __int64 result; // rax

  result = 120LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
