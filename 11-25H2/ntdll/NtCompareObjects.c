/*
 * XREFs of NtCompareObjects @ 0x1801645F0
 * Callers:
 *     RtlIsCurrentProcess @ 0x1800E50C0 (RtlIsCurrentProcess.c)
 *     RtlIsCurrentThread @ 0x18010DFE0 (RtlIsCurrentThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCompareObjects(HANDLE FirstObjectHandle, HANDLE SecondObjectHandle)
{
  NTSTATUS result; // eax

  result = 159;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
