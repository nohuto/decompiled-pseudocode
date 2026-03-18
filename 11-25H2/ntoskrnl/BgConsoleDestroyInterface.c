/*
 * XREFs of BgConsoleDestroyInterface @ 0x140BA0940
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058C5E0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x140BA0170 (BgkDestroy.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140C5F59C (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140468C70 (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x1404A891C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A8BF0 (BgpFwAcquireLock.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140BA0834 (BgpDisplayCharacterDestroyContext.c)
 */

__int64 __fastcall BgConsoleDestroyInterface(__int64 (__fastcall **a1)())
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  BgpFwAcquireLock();
  if ( a1 == BgpConsoleInterface )
  {
    v3 = qword_140EEF810;
    if ( qword_140EEF810 )
    {
      if ( *(_QWORD *)(qword_140EEF810 + 40) )
      {
        BgpDisplayCharacterDestroyContext(*(_QWORD *)(qword_140EEF810 + 40));
        v3 = qword_140EEF810;
      }
      BgpFwFreeMemory(v3);
      qword_140EEF810 = 0LL;
    }
  }
  return BgpFwReleaseLock(v3, v2);
}
