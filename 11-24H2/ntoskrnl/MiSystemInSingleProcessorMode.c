/*
 * XREFs of MiSystemInSingleProcessorMode @ 0x14066FC00
 * Callers:
 *     MmAddRangeToCrashDump @ 0x140678B70 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x140679018 (MmRemoveSystemCacheFromDump.c)
 * Callees:
 *     MiMirrorInSingleProcessorMode @ 0x14026C0E4 (MiMirrorInSingleProcessorMode.c)
 */

_BOOL8 MiSystemInSingleProcessorMode()
{
  int v0; // eax

  if ( (MiFlags & 0x30) == 0 || (KiBugCheckActive & 3) != 0 )
    return 1LL;
  LOBYTE(v0) = MiMirrorInSingleProcessorMode();
  return v0 != 0;
}
