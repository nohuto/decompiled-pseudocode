/*
 * XREFs of CmpRecordRegistryLockRelease @ 0x1404EDC80
 * Callers:
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 * Callees:
 *     CmpThreadInfoLogStack @ 0x1404B9E80 (CmpThreadInfoLogStack.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char CmpRecordRegistryLockRelease()
{
  struct _KTHREAD *CurrentThread; // rbx
  _KAFFINITY_EX *UserAffinity; // rcx
  int v2; // eax

  CurrentThread = KeGetCurrentThread();
  UserAffinity = CurrentThread[1].UserAffinity;
  if ( dword_140EF6F68 )
  {
    if ( !UserAffinity )
    {
      CmpThreadInfoLogStack();
      KeBugCheckEx(0x51u, 0x35uLL, (ULONG_PTR)CurrentThread, 0LL, 0LL);
    }
    if ( dword_140EF6F68 == 1 )
      goto LABEL_6;
  }
  if ( UserAffinity )
  {
LABEL_6:
    v2 = LODWORD(UserAffinity->StaticBitmap[1]) - 1;
    LODWORD(UserAffinity->StaticBitmap[1]) = v2;
    if ( dword_140EF6F68 == 1 && !v2 )
      UserAffinity->Bitmap[0] = 0LL;
  }
  else
  {
    LOBYTE(v2) = CmpThreadInfoLogStack();
  }
  return v2;
}
