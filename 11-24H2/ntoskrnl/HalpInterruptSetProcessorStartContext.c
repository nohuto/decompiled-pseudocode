/*
 * XREFs of HalpInterruptSetProcessorStartContext @ 0x14053F770
 * Callers:
 *     HalpSetupRealModeResume @ 0x1406A6F40 (HalpSetupRealModeResume.c)
 *     HalpInterruptStartProcessor @ 0x140B4DF10 (HalpInterruptStartProcessor.c)
 * Callees:
 *     HalpInterruptDetermineProcessorStartupFlags @ 0x140556D3C (HalpInterruptDetermineProcessorStartupFlags.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall HalpInterruptSetProcessorStartContext(__int64 a1, const void *a2, char a3, unsigned int a4)
{
  if ( a2 )
    memmove((char *)HalpInterruptGlobalStartupBlock + 144, a2, 0x5C0uLL);
  *((_DWORD *)HalpInterruptGlobalStartupBlock + 2) = HalpInterruptDetermineProcessorStartupFlags(a4);
  if ( a3 )
    *((_QWORD *)HalpInterruptGlobalStartupBlock + 11) = HalpBlkTiledMemoryMapPa;
  else
    *((_QWORD *)HalpInterruptGlobalStartupBlock + 11) = (unsigned int)dword_140FC0F2C;
  return 0LL;
}
