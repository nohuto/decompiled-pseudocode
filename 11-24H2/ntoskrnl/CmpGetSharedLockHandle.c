/*
 * XREFs of CmpGetSharedLockHandle @ 0x14066684C
 * Callers:
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 * Callees:
 *     CmpGetThreadInfo @ 0x1404EDBB0 (CmpGetThreadInfo.c)
 */

unsigned __int64 CmpGetSharedLockHandle()
{
  return CmpGetThreadInfo()->Bitmap[0];
}
