/*
 * XREFs of BiExportStoreAlterationsToFirmware @ 0x140814E64
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1408123C4 (BcdForciblyUnloadStore.c)
 *     BiCloseStore @ 0x140A81ABC (BiCloseStore.c)
 * Callees:
 *     BiExportStoreAlterationsToEfi @ 0x140815A84 (BiExportStoreAlterationsToEfi.c)
 *     BiGetFirmwareType @ 0x140859BF0 (BiGetFirmwareType.c)
 */

__int64 __fastcall BiExportStoreAlterationsToFirmware(void *a1)
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
