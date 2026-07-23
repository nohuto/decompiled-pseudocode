/*
 * XREFs of MiPersistVa @ 0x14067CB48
 * Callers:
 *     MiPersistMdl @ 0x1404C10C8 (MiPersistMdl.c)
 *     MiCopyFilePage @ 0x14067B820 (MiCopyFilePage.c)
 *     MiPersistPage @ 0x14067CAF8 (MiPersistPage.c)
 * Callees:
 *     MiPersistMemory @ 0x14067CAD0 (MiPersistMemory.c)
 */

void __fastcall MiPersistVa(void *a1)
{
  if ( !byte_140E2DC80 )
    MiPersistMemory(a1, 0x1000u);
}
