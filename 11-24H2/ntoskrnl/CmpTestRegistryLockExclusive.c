/*
 * XREFs of CmpTestRegistryLockExclusive @ 0x1406669D4
 * Callers:
 *     HvpTruncateBins @ 0x140967554 (HvpTruncateBins.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 * Callees:
 *     ExIsResourceAcquiredExclusiveLite @ 0x1403FE4D0 (ExIsResourceAcquiredExclusiveLite.c)
 *     CmpGetThreadInfo @ 0x1404EDBB0 (CmpGetThreadInfo.c)
 */

bool CmpTestRegistryLockExclusive()
{
  char v0; // bl
  unsigned __int64 v2; // rcx

  v0 = 0;
  if ( !dword_140EF6F68 )
    return ExIsResourceAcquiredExclusiveLite(CmpRegistryLock) != 0;
  v2 = CmpGetThreadInfo()->Bitmap[0];
  if ( v2 )
    return v2 == 1;
  return v0;
}
