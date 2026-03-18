/*
 * XREFs of RtlIsImageFullyRetpolined @ 0x1404C1FC4
 * Callers:
 *     MiLogRetpolineImageLoadEvents @ 0x140A82C1C (MiLogRetpolineImageLoadEvents.c)
 *     MiIsImageFullyRetpolined @ 0x140A984B4 (MiIsImageFullyRetpolined.c)
 *     MiApplyRetpolineToBootDriver @ 0x140C5560C (MiApplyRetpolineToBootDriver.c)
 *     MiInitializeRetpoline @ 0x140C558EC (MiInitializeRetpoline.c)
 *     MiIsBootImageTargetFullyRetpolined @ 0x140C55A10 (MiIsBootImageTargetFullyRetpolined.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140A659D8 (LdrImageDirectoryEntryToLoadConfig.c)
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
