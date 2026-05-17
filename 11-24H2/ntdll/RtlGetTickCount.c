/*
 * XREFs of RtlGetTickCount @ 0x180143950
 * Callers:
 *     NtGetTickCount_syscall_thunk @ 0x1801659A0 (NtGetTickCount_syscall_thunk.c)
 * Callees:
 *     <none>
 */

unsigned __int64 RtlGetTickCount()
{
  return (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
}
