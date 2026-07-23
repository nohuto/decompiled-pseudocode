/*
 * XREFs of sub_1409DABCC @ 0x1409DABCC
 * Callers:
 *     sub_140801320 @ 0x140801320 (sub_140801320.c)
 *     sub_1409DA42C @ 0x1409DA42C (sub_1409DA42C.c)
 *     sub_1409DA700 @ 0x1409DA700 (sub_1409DA700.c)
 *     sub_1409DAA1C @ 0x1409DAA1C (sub_1409DAA1C.c)
 *     sub_1409DB410 @ 0x1409DB410 (sub_1409DB410.c)
 * Callees:
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 */

void __fastcall sub_1409DABCC(PMDL Mdl)
{
  if ( Mdl )
  {
    MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
}
