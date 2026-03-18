/*
 * XREFs of MiPersistMemory @ 0x140670130
 * Callers:
 *     MiPersistMdl @ 0x1404C7140 (MiPersistMdl.c)
 *     MiPersistVa @ 0x1406701A8 (MiPersistVa.c)
 * Callees:
 *     KeInvalidateRangeAllCaches @ 0x14026F2F0 (KeInvalidateRangeAllCaches.c)
 *     KePersistMemory @ 0x1406A8110 (KePersistMemory.c)
 */

void __fastcall MiPersistMemory(void *a1, ULONG a2)
{
  if ( _bittest64(&KeFeatureBits, 0x24u) )
    KePersistMemory();
  else
    KeInvalidateRangeAllCaches(a1, a2);
}
