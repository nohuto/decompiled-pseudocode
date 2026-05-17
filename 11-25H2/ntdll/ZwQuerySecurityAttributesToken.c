/*
 * XREFs of ZwQuerySecurityAttributesToken @ 0x180165EF0
 * Callers:
 *     RtlQueryPackageClaims @ 0x1800AF4B0 (RtlQueryPackageClaims.c)
 *     RtlQueryTokenHostIdAsUlong64 @ 0x18010C8A0 (RtlQueryTokenHostIdAsUlong64.c)
 * Callees:
 *     <none>
 */

__int64 ZwQuerySecurityAttributesToken()
{
  __int64 result; // rax

  result = 359LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
