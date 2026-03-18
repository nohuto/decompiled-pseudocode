/*
 * XREFs of BgConsoleGetInterface @ 0x140BA09A0
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058C5E0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140C5E998 (BgkInitialize.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140C5F59C (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A891C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A8BF0 (BgpFwAcquireLock.c)
 */

__int64 BgConsoleGetInterface()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx

  v0 = 0LL;
  BgpFwAcquireLock();
  v2 = (unsigned int)dword_140EEFD90;
  if ( (dword_140EEFD90 & 1) != 0 )
  {
    v2 = (__int64)BgpConsoleInterface;
    if ( !qword_140EEFE38 )
      v2 = 0LL;
    v0 = v2;
  }
  BgpFwReleaseLock(v2, v1);
  return v0;
}
