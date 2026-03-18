/*
 * XREFs of sub_1409E0E1C @ 0x1409E0E1C
 * Callers:
 *     sub_140800BE0 @ 0x140800BE0 (sub_140800BE0.c)
 *     sub_1409E067C @ 0x1409E067C (sub_1409E067C.c)
 *     sub_1409E0950 @ 0x1409E0950 (sub_1409E0950.c)
 *     sub_1409E0C6C @ 0x1409E0C6C (sub_1409E0C6C.c)
 *     sub_1409E1660 @ 0x1409E1660 (sub_1409E1660.c)
 * Callees:
 *     IoFreeMdl @ 0x140267750 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140267F30 (MmUnlockPages.c)
 */

void __fastcall sub_1409E0E1C(PMDL Mdl)
{
  if ( Mdl )
  {
    MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
}
