/*
 * XREFs of BgConsoleDestroyInterface @ 0x140BB0940
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058FDC0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x140BB0170 (BgkDestroy.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140C7097C (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14037DE10 (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x1404A9ACC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A9CA4 (BgpFwAcquireLock.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140BB0834 (BgpDisplayCharacterDestroyContext.c)
 */

__int64 __fastcall BgConsoleDestroyInterface(__int64 (__fastcall **a1)())
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  BgpFwAcquireLock();
  if ( a1 == BgpConsoleInterface )
  {
    v3 = qword_140EEFAB0;
    if ( qword_140EEFAB0 )
    {
      if ( *(_QWORD *)(qword_140EEFAB0 + 40) )
      {
        BgpDisplayCharacterDestroyContext(*(_QWORD *)(qword_140EEFAB0 + 40));
        v3 = qword_140EEFAB0;
      }
      BgpFwFreeMemory(v3);
      qword_140EEFAB0 = 0LL;
    }
  }
  return BgpFwReleaseLock(v3, v2);
}
