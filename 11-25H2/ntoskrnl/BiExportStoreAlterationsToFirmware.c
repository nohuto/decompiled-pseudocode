/*
 * XREFs of BiExportStoreAlterationsToFirmware @ 0x140804BAC
 * Callers:
 *     BcdForciblyUnloadStore @ 0x14080210C (BcdForciblyUnloadStore.c)
 *     BiCloseStore @ 0x140A24D38 (BiCloseStore.c)
 * Callees:
 *     BiExportStoreAlterationsToEfi @ 0x1408057CC (BiExportStoreAlterationsToEfi.c)
 *     BiGetFirmwareType @ 0x140A27F84 (BiGetFirmwareType.c)
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
