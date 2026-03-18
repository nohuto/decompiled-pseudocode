/*
 * XREFs of FsRtlQueryMaximumVirtualDiskNestingLevel @ 0x140499270
 * Callers:
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140499090 (FsRtlGetVirtualDiskNestingLevel.c)
 * Callees:
 *     FsRtlpGetMaxVirtualDiskNestingLevel @ 0x140581CBC (FsRtlpGetMaxVirtualDiskNestingLevel.c)
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
