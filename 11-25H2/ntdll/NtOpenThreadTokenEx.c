/*
 * XREFs of NtOpenThreadTokenEx @ 0x180163800
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1800601A0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x18008F880 (RtlCheckTokenCapability.c)
 *     RtlpOpenThreadToken @ 0x1800EA84C (RtlpOpenThreadToken.c)
 *     RtlpIsAppContainer @ 0x18011B2A8 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenThreadTokenEx()
{
  __int64 result; // rax

  result = 47LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
