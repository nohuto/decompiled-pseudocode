/*
 * XREFs of MiSystemInSingleProcessorMode @ 0x140662EF0
 * Callers:
 *     MmAddRangeToCrashDump @ 0x14066C040 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x14066C4E8 (MmRemoveSystemCacheFromDump.c)
 * Callees:
 *     MiMirrorInSingleProcessorMode @ 0x140390068 (MiMirrorInSingleProcessorMode.c)
 */

_BOOL8 MiSystemInSingleProcessorMode()
{
  int v0; // eax

  if ( (MiFlags & 0x30) == 0 || (KiBugCheckActive & 3) != 0 )
    return 1LL;
  LOBYTE(v0) = MiMirrorInSingleProcessorMode();
  return v0 != 0;
}
