/*
 * XREFs of RtlIsImageFullyRetpolined @ 0x1404BD5B4
 * Callers:
 *     MiLogRetpolineImageLoadEvents @ 0x140A7D73C (MiLogRetpolineImageLoadEvents.c)
 *     MiIsImageFullyRetpolined @ 0x140A94C70 (MiIsImageFullyRetpolined.c)
 *     MiApplyRetpolineToBootDriver @ 0x140C5779C (MiApplyRetpolineToBootDriver.c)
 *     MiInitializeRetpoline @ 0x140C57A7C (MiInitializeRetpoline.c)
 *     MiIsBootImageTargetFullyRetpolined @ 0x140C57BA0 (MiIsBootImageTargetFullyRetpolined.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140A5E1A8 (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall RtlIsImageFullyRetpolined(__int64 a1)
{
  _DWORD *Config; // rax

  Config = (_DWORD *)LdrImageDirectoryEntryToLoadConfig(a1);
  if ( Config && *Config >= 0x94u )
    return (Config[36] >> 20) & 1;
  else
    return 0LL;
}
