/*
 * XREFs of BiExportStoreAlterationsToEfi @ 0x140815A84
 * Callers:
 *     BiExportStoreAlterationsToFirmware @ 0x140814E64 (BiExportStoreAlterationsToFirmware.c)
 * Callees:
 *     BiExportBcdObjects @ 0x14081595C (BiExportBcdObjects.c)
 *     BiLogMessage @ 0x1409A4E48 (BiLogMessage.c)
 *     BiBuildIdentifierList @ 0x1409A55CC (BiBuildIdentifierList.c)
 *     BiFreeIdentifierList @ 0x1409A8250 (BiFreeIdentifierList.c)
 *     BiExportEfiBootManager @ 0x140AADFCC (BiExportEfiBootManager.c)
 */

__int64 __fastcall BiExportStoreAlterationsToEfi(HANDLE BcdStoreHandle)
{
  int v2; // ebx
  int v3; // eax
  int v4; // edi
  const GUID *v6[3]; // [rsp+20h] [rbp-18h] BYREF

  BiLogMessage(2LL, L"Exporting store alterations to efi");
  v6[1] = (const GUID *)v6;
  v6[0] = (const GUID *)v6;
  v2 = BiBuildIdentifierList(BcdStoreHandle);
  if ( v2 < 0 )
    goto LABEL_6;
  v3 = BiExportBcdObjects(BcdStoreHandle, v6);
  if ( v3 < 0 )
    v2 = v3;
  v4 = v2;
  v2 = BiExportEfiBootManager(BcdStoreHandle, v6);
  if ( v2 < 0 || (v2 = v4, v4 < 0) )
LABEL_6:
    BiLogMessage(4LL, L"BiExportStoreAlterationsToEfi failed %x", (unsigned int)v2);
  BiFreeIdentifierList(v6);
  return (unsigned int)v2;
}
