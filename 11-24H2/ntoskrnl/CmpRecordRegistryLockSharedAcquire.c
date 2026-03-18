/*
 * XREFs of CmpRecordRegistryLockSharedAcquire @ 0x140667FC0
 * Callers:
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 * Callees:
 *     CmpGetThreadInfo @ 0x1404F0110 (CmpGetThreadInfo.c)
 */

_KAFFINITY_EX *__fastcall CmpRecordRegistryLockSharedAcquire(unsigned __int64 a1)
{
  _KAFFINITY_EX *result; // rax

  result = CmpGetThreadInfo();
  if ( !result->Bitmap[0] )
    result->Bitmap[0] = a1;
  ++LODWORD(result->StaticBitmap[1]);
  return result;
}
