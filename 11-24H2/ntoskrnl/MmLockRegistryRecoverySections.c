/*
 * XREFs of MmLockRegistryRecoverySections @ 0x1407E8134
 * Callers:
 *     CmInitSystem2 @ 0x140C5F4F8 (CmInitSystem2.c)
 * Callees:
 *     MmEnumerateSystemImages @ 0x1404FAB30 (MmEnumerateSystemImages.c)
 */

__int64 MmLockRegistryRecoverySections()
{
  return MmEnumerateSystemImages((__int64)MiLockRegistryRecoverySection, 0LL);
}
