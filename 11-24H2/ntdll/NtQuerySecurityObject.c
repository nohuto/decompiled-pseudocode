/*
 * XREFs of NtQuerySecurityObject @ 0x180164980
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800CEBBC (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x180131B50 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlIsUntrustedObject @ 0x180139110 (RtlIsUntrustedObject.c)
 * Callees:
 *     <none>
 */

__int64 NtQuerySecurityObject()
{
  __int64 result; // rax

  result = 360LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
