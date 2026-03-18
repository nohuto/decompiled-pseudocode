/*
 * XREFs of MiPersistMemory @ 0x14067B8F0
 * Callers:
 *     MiPersistMdl @ 0x1404C7C68 (MiPersistMdl.c)
 *     MiPersistVa @ 0x14067B968 (MiPersistVa.c)
 * Callees:
 *     KeInvalidateRangeAllCaches @ 0x14047A650 (KeInvalidateRangeAllCaches.c)
 *     KePersistMemory @ 0x1406B33E0 (KePersistMemory.c)
 */

void __fastcall MiPersistMemory(void *a1, ULONG a2)
{
  if ( _bittest64(&KeFeatureBits, 0x24u) )
    KePersistMemory();
  else
    KeInvalidateRangeAllCaches(a1, a2);
}
