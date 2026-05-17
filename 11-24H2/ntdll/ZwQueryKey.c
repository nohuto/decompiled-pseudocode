/*
 * XREFs of ZwQueryKey @ 0x180161F50
 * Callers:
 *     LdrpCodeAuthzInitialize @ 0x180058660 (LdrpCodeAuthzInitialize.c)
 *     RtlpValidateKeyTrust @ 0x1800B6FDC (RtlpValidateKeyTrust.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryKey()
{
  __int64 result; // rax

  result = 22LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
