/*
 * XREFs of HalpInterruptSetProcessorStartContext @ 0x14053F640
 * Callers:
 *     HalpSetupRealModeResume @ 0x14069ACF0 (HalpSetupRealModeResume.c)
 *     HalpInterruptStartProcessor @ 0x140B3BED0 (HalpInterruptStartProcessor.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     KeForceEnableNx @ 0x140B47870 (KeForceEnableNx.c)
 */

__int64 __fastcall HalpInterruptSetProcessorStartContext(__int64 a1, const void *a2, char a3)
{
  int v4; // ecx

  if ( a2 )
    memmove((char *)HalpInterruptGlobalStartupBlock + 144, a2, 0x5C0uLL);
  v4 = (unsigned __int8)KeForceEnableNx() != 0;
  if ( HalpInterruptProcessorHidden )
    v4 |= 4u;
  *((_DWORD *)HalpInterruptGlobalStartupBlock + 2) = v4;
  if ( a3 )
    *((_QWORD *)HalpInterruptGlobalStartupBlock + 11) = HalpBlkTiledMemoryMapPa;
  else
    *((_QWORD *)HalpInterruptGlobalStartupBlock + 11) = (unsigned int)dword_140FC0534;
  return 0LL;
}
