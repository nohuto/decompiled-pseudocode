/*
 * XREFs of NtQueryDirectoryFile @ 0x1801638C0
 * Callers:
 *     RtlpMUIEnumerateFolder @ 0x18010DBCC (RtlpMUIEnumerateFolder.c)
 *     LdrpCnvrtShortToLongFileName @ 0x180119888 (LdrpCnvrtShortToLongFileName.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryDirectoryFile()
{
  __int64 result; // rax

  result = 53LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
