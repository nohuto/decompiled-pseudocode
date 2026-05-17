/*
 * XREFs of ZwCreateKey @ 0x180162030
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180089F88 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x18008B194 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x18008B48C (RtlpCreateIFEOKeyFilterKey.c)
 *     RtlpGetRegistryHandle @ 0x1800B6868 (RtlpGetRegistryHandle.c)
 *     RtlInitializeRXact @ 0x180106310 (RtlInitializeRXact.c)
 *     RXactpCommit @ 0x180106868 (RXactpCommit.c)
 *     LdrpCreateKey @ 0x18013EF00 (LdrpCreateKey.c)
 *     RtlpNtCreateKey @ 0x18014B510 (RtlpNtCreateKey.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateKey()
{
  __int64 result; // rax

  result = 29LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
