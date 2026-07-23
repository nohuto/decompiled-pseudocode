/*
 * XREFs of CmpGetThreadInfo @ 0x1404EDBB0
 * Callers:
 *     CmpGetSharedLockHandle @ 0x14066684C (CmpGetSharedLockHandle.c)
 *     CmpIsRegistryLockAcquiredRecursively @ 0x140666868 (CmpIsRegistryLockAcquiredRecursively.c)
 *     CmpRecordRegistryLockExclusiveAcquire @ 0x140666884 (CmpRecordRegistryLockExclusiveAcquire.c)
 *     CmpRecordRegistryLockSharedAcquire @ 0x1406668AC (CmpRecordRegistryLockSharedAcquire.c)
 *     CmpTestRegistryLockExclusive @ 0x1406669D4 (CmpTestRegistryLockExclusive.c)
 * Callees:
 *     CmpThreadInfoLogStack @ 0x1404B9E80 (CmpThreadInfoLogStack.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

_KAFFINITY_EX *CmpGetThreadInfo()
{
  struct _KTHREAD *CurrentThread; // rbx
  _KAFFINITY_EX *result; // rax

  CurrentThread = KeGetCurrentThread();
  result = CurrentThread[1].UserAffinity;
  if ( dword_140EF6F68 )
  {
    if ( !result )
    {
      CmpThreadInfoLogStack();
      KeBugCheckEx(0x51u, 0x35uLL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
    }
  }
  return result;
}
