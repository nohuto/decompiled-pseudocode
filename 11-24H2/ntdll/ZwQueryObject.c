/*
 * XREFs of ZwQueryObject @ 0x180161E90
 * Callers:
 *     PsspWalkHandleTable @ 0x1800C425C (PsspWalkHandleTable.c)
 *     RtlpWow64SuspendThread @ 0x1800F8F50 (RtlpWow64SuspendThread.c)
 *     RtlpWow64SuspendProcess @ 0x1801323E8 (RtlpWow64SuspendProcess.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryObject()
{
  __int64 result; // rax

  result = 16LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
