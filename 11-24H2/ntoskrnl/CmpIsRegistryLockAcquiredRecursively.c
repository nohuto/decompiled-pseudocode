/*
 * XREFs of CmpIsRegistryLockAcquiredRecursively @ 0x140666868
 * Callers:
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 * Callees:
 *     CmpGetThreadInfo @ 0x1404EDBB0 (CmpGetThreadInfo.c)
 */

bool CmpIsRegistryLockAcquiredRecursively()
{
  return LODWORD(CmpGetThreadInfo()->StaticBitmap[1]) > 1;
}
