/*
 * XREFs of BiExportStoreAlterationsToFirmware @ 0x140814724
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140811C84 (BcdForciblyUnloadStore.c)
 *     BiCloseStore @ 0x14085EF8C (BiCloseStore.c)
 * Callees:
 *     BiExportStoreAlterationsToEfi @ 0x140815344 (BiExportStoreAlterationsToEfi.c)
 *     BiGetFirmwareType @ 0x14085DE80 (BiGetFirmwareType.c)
 */

__int64 __fastcall BiExportStoreAlterationsToFirmware(__int64 a1)
{
  int v2; // eax
  int v3; // eax

  v2 = BiGetFirmwareType(0LL) - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( !v3 )
      return BiExportStoreAlterationsToEfi(a1);
    if ( v3 != 1 )
      return 3221225659LL;
  }
  return 0LL;
}
