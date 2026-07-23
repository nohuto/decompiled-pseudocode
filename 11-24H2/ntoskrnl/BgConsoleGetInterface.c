/*
 * XREFs of BgConsoleGetInterface @ 0x140BB29A0
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058CDE0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140C71ED8 (BgkInitialize.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140C72ADC (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 */

__int64 __fastcall BgConsoleGetInterface(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx

  v4 = 0LL;
  BgpFwAcquireLock(a1, a2, a3, a4);
  v6 = (unsigned int)dword_140EF0270;
  if ( (dword_140EF0270 & 1) != 0 )
  {
    v6 = (__int64)BgpConsoleInterface;
    if ( !qword_140EF0318 )
      v6 = 0LL;
    v4 = v6;
  }
  BgpFwReleaseLock(v6, v5);
  return v4;
}
