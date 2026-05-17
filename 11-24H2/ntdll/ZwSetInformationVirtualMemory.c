/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x180165280
 * Callers:
 *     RtlpGuardGrantSuppressedCallAccess @ 0x180003CAC (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x18004B138 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x180056390 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpLfhSubsegmentPrefetchRange @ 0x1800E2320 (RtlpHpLfhSubsegmentPrefetchRange.c)
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
