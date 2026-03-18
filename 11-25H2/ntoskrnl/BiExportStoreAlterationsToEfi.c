/*
 * XREFs of BiExportStoreAlterationsToEfi @ 0x1408057CC
 * Callers:
 *     BiExportStoreAlterationsToFirmware @ 0x140804BAC (BiExportStoreAlterationsToFirmware.c)
 * Callees:
 *     BiExportBcdObjects @ 0x1408056A4 (BiExportBcdObjects.c)
 *     BiLogMessage @ 0x140A26990 (BiLogMessage.c)
 *     BiBuildIdentifierList @ 0x140A27590 (BiBuildIdentifierList.c)
 *     BiFreeIdentifierList @ 0x140A28030 (BiFreeIdentifierList.c)
 *     BiExportEfiBootManager @ 0x140AADFBC (BiExportEfiBootManager.c)
 */

__int64 __fastcall BiExportStoreAlterationsToEfi(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  int v4; // eax
  int v5; // edi
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  BiLogMessage(2LL, L"Exporting store alterations to efi");
  v7[1] = (__int64)v7;
  v7[0] = (__int64)v7;
  v3 = BiBuildIdentifierList(a1, v2, v7);
  if ( v3 < 0 )
    goto LABEL_6;
  v4 = BiExportBcdObjects(a1, v7);
  if ( v4 < 0 )
    v3 = v4;
  v5 = v3;
  v3 = BiExportEfiBootManager(a1, v7);
  if ( v3 < 0 || (v3 = v5, v5 < 0) )
LABEL_6:
    BiLogMessage(4LL, L"BiExportStoreAlterationsToEfi failed %x", (unsigned int)v3);
  BiFreeIdentifierList(v7);
  return (unsigned int)v3;
}
