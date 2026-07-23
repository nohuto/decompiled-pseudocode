/*
 * XREFs of FsRtlQueryMaximumVirtualDiskNestingLevel @ 0x140493C00
 * Callers:
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140493A20 (FsRtlGetVirtualDiskNestingLevel.c)
 * Callees:
 *     FsRtlpGetMaxVirtualDiskNestingLevel @ 0x14057F03C (FsRtlpGetMaxVirtualDiskNestingLevel.c)
 */

ULONG FsRtlQueryMaximumVirtualDiskNestingLevel(void)
{
  ULONG result; // eax

  result = FsRtlVirtualDiskMaxTreeDepth;
  if ( FsRtlVirtualDiskMaxTreeDepth == -1 )
  {
    result = FsRtlpGetMaxVirtualDiskNestingLevel();
    FsRtlVirtualDiskMaxTreeDepth = result;
  }
  return result;
}
