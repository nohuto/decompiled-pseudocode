/*
 * XREFs of NtApphelpCacheControl @ 0x180162610
 * Callers:
 *     CompatCachepLookupCdb @ 0x180072A0C (CompatCachepLookupCdb.c)
 * Callees:
 *     <none>
 */

__int64 NtApphelpCacheControl()
{
  __int64 result; // rax

  result = 76LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
