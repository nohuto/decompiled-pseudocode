/*
 * XREFs of MmLockRegistryRecoverySections @ 0x1407E8704
 * Callers:
 *     CmInitSystem2 @ 0x140C61648 (CmInitSystem2.c)
 * Callees:
 *     MmEnumerateSystemImages @ 0x1404F8410 (MmEnumerateSystemImages.c)
 */

__int64 MmLockRegistryRecoverySections()
{
  return MmEnumerateSystemImages((__int64)MiLockRegistryRecoverySection, 0LL);
}
