/*
 * XREFs of BgConsoleDestroyInterface @ 0x140BB2940
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058CDE0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x140BB2170 (BgkDestroy.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140C72ADC (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14045EC7C (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140BB2834 (BgpDisplayCharacterDestroyContext.c)
 */

__int64 __fastcall BgConsoleDestroyInterface(__int64 (__fastcall **a1)(), __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx

  BgpFwAcquireLock((__int64)a1, a2, a3, a4);
  if ( a1 == BgpConsoleInterface )
  {
    v6 = qword_140EEFD00;
    if ( qword_140EEFD00 )
    {
      if ( *(_QWORD *)(qword_140EEFD00 + 40) )
      {
        BgpDisplayCharacterDestroyContext(*(_QWORD *)(qword_140EEFD00 + 40));
        v6 = qword_140EEFD00;
      }
      BgpFwFreeMemory(v6);
      qword_140EEFD00 = 0LL;
    }
  }
  return BgpFwReleaseLock(v6, v5);
}
