/*
 * XREFs of CmpGetThreadInfo @ 0x1404F0110
 * Callers:
 *     CmpGetSharedLockHandle @ 0x140667F60 (CmpGetSharedLockHandle.c)
 *     CmpIsRegistryLockAcquiredRecursively @ 0x140667F7C (CmpIsRegistryLockAcquiredRecursively.c)
 *     CmpRecordRegistryLockExclusiveAcquire @ 0x140667F98 (CmpRecordRegistryLockExclusiveAcquire.c)
 *     CmpRecordRegistryLockSharedAcquire @ 0x140667FC0 (CmpRecordRegistryLockSharedAcquire.c)
 *     CmpTestRegistryLockExclusive @ 0x1406680E4 (CmpTestRegistryLockExclusive.c)
 * Callees:
 *     CmpThreadInfoLogStack @ 0x1404BECC0 (CmpThreadInfoLogStack.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

_KAFFINITY_EX *CmpGetThreadInfo()
{
  struct _KTHREAD *CurrentThread; // rbx
  _KAFFINITY_EX *result; // rax

  CurrentThread = KeGetCurrentThread();
  result = CurrentThread[1].UserAffinity;
  if ( dword_140EF6D28 )
  {
    if ( !result )
    {
      CmpThreadInfoLogStack();
      KeBugCheckEx(0x51u, 0x35uLL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
    }
  }
  return result;
}
