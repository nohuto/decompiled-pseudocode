/*
 * XREFs of CmpGetSharedLockHandle @ 0x140667F60
 * Callers:
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 * Callees:
 *     CmpGetThreadInfo @ 0x1404F0110 (CmpGetThreadInfo.c)
 */

unsigned __int64 CmpGetSharedLockHandle()
{
  return CmpGetThreadInfo()->Bitmap[0];
}
