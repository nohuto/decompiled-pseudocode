/*
 * XREFs of BiCloseStore @ 0x140A81ABC
 * Callers:
 *     BiOpenSystemStore @ 0x1409A7610 (BiOpenSystemStore.c)
 *     BcdCloseStore @ 0x140A81A08 (BcdCloseStore.c)
 * Callees:
 *     BiSanitizeHandle @ 0x1404A1930 (BiSanitizeHandle.c)
 *     BiSetFirmwareModified @ 0x1404A29C4 (BiSetFirmwareModified.c)
 *     BiWasFirmwareModified @ 0x1404BB13C (BiWasFirmwareModified.c)
 *     BiExportStoreAlterationsToFirmware @ 0x140814E64 (BiExportStoreAlterationsToFirmware.c)
 *     BiCloseKey @ 0x1408588F0 (BiCloseKey.c)
 *     BiLogMessage @ 0x1409A4E48 (BiLogMessage.c)
 *     BiUnloadHiveByHandle @ 0x140A81B58 (BiUnloadHiveByHandle.c)
 */

__int64 __fastcall BiCloseStore(__int64 a1, char a2)
{
  int v3; // edi
  unsigned __int64 v4; // rax
  void *v5; // rbx
  char v6; // dl

  v3 = 0;
  v4 = BiSanitizeHandle(a1);
  v5 = (void *)v4;
  if ( (v6 & 4) != 0 && BiWasFirmwareModified(v4) )
  {
    BiLogMessage();
    v3 = BiExportStoreAlterationsToFirmware(v5);
    if ( v3 < 0 )
      BiLogMessage();
    else
      BiSetFirmwareModified((__int64)v5, 0);
  }
  if ( (a2 & 2) != 0 )
    BiUnloadHiveByHandle(v5, 0LL);
  else
    BiCloseKey(v5);
  return (unsigned int)v3;
}
