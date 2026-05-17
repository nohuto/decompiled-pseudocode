/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x180166810
 * Callers:
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800096CC (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x180011FD0 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x18002DB5C (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpLfhSubsegmentPrefetchRange @ 0x1800DEFF0 (RtlpHpLfhSubsegmentPrefetchRange.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationVirtualMemory()
{
  __int64 result; // rax

  result = 432LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
