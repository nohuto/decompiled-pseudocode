/*
 * XREFs of MmLockRegistryRecoverySections @ 0x1407D8274
 * Callers:
 *     CmInitSystem2 @ 0x140C4E174 (CmInitSystem2.c)
 * Callees:
 *     MmEnumerateSystemImages @ 0x1404F8690 (MmEnumerateSystemImages.c)
 */

__int64 MmLockRegistryRecoverySections()
{
  return MmEnumerateSystemImages((__int64)MiLockRegistryRecoverySection, 0LL);
}
