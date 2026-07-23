/*
 * XREFs of ZwSetEventEx @ 0x180163460
 * Callers:
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x180040ED0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlpUnWaitCriticalSection @ 0x180138DE0 (RtlpUnWaitCriticalSection.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetEventEx()
{
  __int64 result; // rax

  result = 417LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
