/*
 * XREFs of NtCompareObjects @ 0x180163060
 * Callers:
 *     RtlIsCurrentProcess @ 0x1800E60F0 (RtlIsCurrentProcess.c)
 *     RtlIsCurrentThread @ 0x18010B990 (RtlIsCurrentThread.c)
 * Callees:
 *     <none>
 */

__int64 NtCompareObjects()
{
  __int64 result; // rax

  result = 159LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
