/*
 * XREFs of CmpRecordRegistryLockSharedAcquire @ 0x1406668AC
 * Callers:
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 * Callees:
 *     CmpGetThreadInfo @ 0x1404EDBB0 (CmpGetThreadInfo.c)
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
