/*
 * XREFs of MiPersistMemory @ 0x14067CAD0
 * Callers:
 *     MiPersistMdl @ 0x1404C10C8 (MiPersistMdl.c)
 *     MiPersistVa @ 0x14067CB48 (MiPersistVa.c)
 * Callees:
 *     KeInvalidateRangeAllCaches @ 0x140475CD0 (KeInvalidateRangeAllCaches.c)
 *     KePersistMemory @ 0x1406B4380 (KePersistMemory.c)
 */

void __fastcall MiPersistMemory(void *a1, ULONG a2)
{
  if ( _bittest64(&KeFeatureBits, 0x24u) )
    KePersistMemory();
  else
    KeInvalidateRangeAllCaches(a1, a2);
}
