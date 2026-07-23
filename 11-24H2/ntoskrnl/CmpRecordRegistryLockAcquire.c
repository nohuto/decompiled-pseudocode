/*
 * XREFs of CmpRecordRegistryLockAcquire @ 0x1404EDC10
 * Callers:
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 * Callees:
 *     CmpThreadInfoLogStack @ 0x1404B9E80 (CmpThreadInfoLogStack.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char CmpRecordRegistryLockAcquire()
{
  struct _KTHREAD *CurrentThread; // rbx
  _KAFFINITY_EX *UserAffinity; // rax

  CurrentThread = KeGetCurrentThread();
  UserAffinity = CurrentThread[1].UserAffinity;
  if ( dword_140EF6F68 )
  {
    if ( !UserAffinity )
    {
      CmpThreadInfoLogStack();
      KeBugCheckEx(0x51u, 0x35uLL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
    }
    goto LABEL_5;
  }
  if ( UserAffinity )
  {
LABEL_5:
    ++LODWORD(UserAffinity->StaticBitmap[1]);
    return (char)UserAffinity;
  }
  LOBYTE(UserAffinity) = CmpThreadInfoLogStack();
  return (char)UserAffinity;
}
