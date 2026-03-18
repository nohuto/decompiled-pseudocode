/*
 * XREFs of RtlIsImageFullyRetpolined @ 0x1404C35C4
 * Callers:
 *     MiLogRetpolineImageLoadEvents @ 0x140A7F04C (MiLogRetpolineImageLoadEvents.c)
 *     MiIsImageFullyRetpolined @ 0x140A942C4 (MiIsImageFullyRetpolined.c)
 *     MiApplyRetpolineToBootDriver @ 0x140C44324 (MiApplyRetpolineToBootDriver.c)
 *     MiInitializeRetpoline @ 0x140C44604 (MiInitializeRetpoline.c)
 *     MiIsBootImageTargetFullyRetpolined @ 0x140C44730 (MiIsBootImageTargetFullyRetpolined.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140A63300 (LdrImageDirectoryEntryToLoadConfig.c)
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
