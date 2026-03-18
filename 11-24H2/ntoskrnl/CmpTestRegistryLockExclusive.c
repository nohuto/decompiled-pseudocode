/*
 * XREFs of CmpTestRegistryLockExclusive @ 0x1406680E4
 * Callers:
 *     HvpTruncateBins @ 0x14097ED44 (HvpTruncateBins.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 * Callees:
 *     ExIsResourceAcquiredExclusiveLite @ 0x140403710 (ExIsResourceAcquiredExclusiveLite.c)
 *     CmpGetThreadInfo @ 0x1404F0110 (CmpGetThreadInfo.c)
 */

bool CmpTestRegistryLockExclusive()
{
  char v0; // bl
  unsigned __int64 v2; // rcx

  v0 = 0;
  if ( !dword_140EF6D28 )
    return ExIsResourceAcquiredExclusiveLite(CmpRegistryLock) != 0;
  v2 = CmpGetThreadInfo()->Bitmap[0];
  if ( v2 )
    return v2 == 1;
  return v0;
}
