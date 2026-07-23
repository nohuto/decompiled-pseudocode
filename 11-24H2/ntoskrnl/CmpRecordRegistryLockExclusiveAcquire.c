/*
 * XREFs of CmpRecordRegistryLockExclusiveAcquire @ 0x140666884
 * Callers:
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 * Callees:
 *     CmpGetThreadInfo @ 0x1404EDBB0 (CmpGetThreadInfo.c)
 */

_KAFFINITY_EX *CmpRecordRegistryLockExclusiveAcquire()
{
  _KAFFINITY_EX *result; // rax

  result = CmpGetThreadInfo();
  if ( !result->Bitmap[0] )
    result->Bitmap[0] = 1LL;
  ++LODWORD(result->StaticBitmap[1]);
  return result;
}
