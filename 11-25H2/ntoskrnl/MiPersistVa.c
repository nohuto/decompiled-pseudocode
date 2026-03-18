/*
 * XREFs of MiPersistVa @ 0x1406701A8
 * Callers:
 *     MiPersistMdl @ 0x1404C7140 (MiPersistMdl.c)
 *     MiCopyFilePage @ 0x14066EE80 (MiCopyFilePage.c)
 *     MiPersistPage @ 0x140670158 (MiPersistPage.c)
 * Callees:
 *     MiPersistMemory @ 0x140670130 (MiPersistMemory.c)
 */

void __fastcall MiPersistVa(void *a1)
{
  if ( !byte_140E2D900 )
    MiPersistMemory(a1, 0x1000u);
}
