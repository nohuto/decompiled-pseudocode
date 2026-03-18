/*
 * XREFs of MiPersistVa @ 0x14067B968
 * Callers:
 *     MiPersistMdl @ 0x1404C7C68 (MiPersistMdl.c)
 *     MiCopyFilePage @ 0x14067A640 (MiCopyFilePage.c)
 *     MiPersistPage @ 0x14067B918 (MiPersistPage.c)
 * Callees:
 *     MiPersistMemory @ 0x14067B8F0 (MiPersistMemory.c)
 */

void __fastcall MiPersistVa(void *a1)
{
  if ( !byte_140E2DB40 )
    MiPersistMemory(a1, 0x1000u);
}
