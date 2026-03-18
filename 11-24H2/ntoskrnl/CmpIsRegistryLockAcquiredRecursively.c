/*
 * XREFs of CmpIsRegistryLockAcquiredRecursively @ 0x140667F7C
 * Callers:
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 * Callees:
 *     CmpGetThreadInfo @ 0x1404F0110 (CmpGetThreadInfo.c)
 */

bool CmpIsRegistryLockAcquiredRecursively()
{
  return LODWORD(CmpGetThreadInfo()->StaticBitmap[1]) > 1;
}
