/*
 * XREFs of MiSystemInSingleProcessorMode @ 0x14066EA30
 * Callers:
 *     MmAddRangeToCrashDump @ 0x140677990 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x140677E38 (MmRemoveSystemCacheFromDump.c)
 * Callees:
 *     MiMirrorInSingleProcessorMode @ 0x1403A7018 (MiMirrorInSingleProcessorMode.c)
 */

_BOOL8 MiSystemInSingleProcessorMode()
{
  int v0; // eax

  if ( (MiFlags & 0x30) == 0 || (KiBugCheckActive & 3) != 0 )
    return 1LL;
  LOBYTE(v0) = MiMirrorInSingleProcessorMode();
  return v0 != 0;
}
