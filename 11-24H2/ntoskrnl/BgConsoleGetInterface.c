/*
 * XREFs of BgConsoleGetInterface @ 0x140BB09A0
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058FDC0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140C6FD78 (BgkInitialize.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140C7097C (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A9ACC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A9CA4 (BgpFwAcquireLock.c)
 */

__int64 BgConsoleGetInterface()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx

  v0 = 0LL;
  BgpFwAcquireLock();
  v2 = (unsigned int)dword_140EF0050;
  if ( (dword_140EF0050 & 1) != 0 )
  {
    v2 = (__int64)BgpConsoleInterface;
    if ( !qword_140EF00F8 )
      v2 = 0LL;
    v0 = v2;
  }
  BgpFwReleaseLock(v2, v1);
  return v0;
}
