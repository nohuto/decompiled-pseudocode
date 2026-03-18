/*
 * XREFs of BiCloseStore @ 0x14085EF8C
 * Callers:
 *     BcdCloseStore @ 0x14085EED8 (BcdCloseStore.c)
 *     BiOpenSystemStore @ 0x1409C0FC0 (BiOpenSystemStore.c)
 * Callees:
 *     BiSanitizeHandle @ 0x1404A6FD0 (BiSanitizeHandle.c)
 *     BiSetFirmwareModified @ 0x1404A7F74 (BiSetFirmwareModified.c)
 *     BiWasFirmwareModified @ 0x1404BFC0C (BiWasFirmwareModified.c)
 *     BiExportStoreAlterationsToFirmware @ 0x140814724 (BiExportStoreAlterationsToFirmware.c)
 *     BiCloseKey @ 0x14085CB80 (BiCloseKey.c)
 *     BiUnloadHiveByHandle @ 0x14085EDB0 (BiUnloadHiveByHandle.c)
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 */

__int64 __fastcall BiCloseStore(__int64 a1, char a2)
{
  unsigned int v3; // edi
  unsigned __int64 v4; // rax
  void *v5; // rbx
  char v6; // dl
  int v7; // eax

  v3 = 0;
  v4 = BiSanitizeHandle(a1);
  v5 = (void *)v4;
  if ( (v6 & 4) != 0 && BiWasFirmwareModified(v4) )
  {
    BiLogMessage(2LL, L"Exporting alterations to firmware.");
    v7 = BiExportStoreAlterationsToFirmware((__int64)v5);
    v3 = v7;
    if ( v7 < 0 )
      BiLogMessage(4LL, L"Failed to export alterations to firmware. Status: %x", (unsigned int)v7);
    else
      BiSetFirmwareModified((__int64)v5, 0);
  }
  if ( (a2 & 2) != 0 )
    BiUnloadHiveByHandle(v5, 0);
  else
    BiCloseKey(v5);
  return v3;
}
