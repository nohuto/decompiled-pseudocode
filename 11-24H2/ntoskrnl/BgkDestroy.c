/*
 * XREFs of BgkDestroy @ 0x140BB2170
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058CDE0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140C71ED8 (BgkInitialize.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 *     BgkpDisableConsole @ 0x14058D30C (BgkpDisableConsole.c)
 *     BgDisplayBackgroundUpdate @ 0x140BB25EC (BgDisplayBackgroundUpdate.c)
 *     BgDisplayProgressIndicator @ 0x140BB2628 (BgDisplayProgressIndicator.c)
 *     BgConsoleDestroyInterface @ 0x140BB2940 (BgConsoleDestroyInterface.c)
 *     BgpFwLibraryDestroy @ 0x140BB3678 (BgpFwLibraryDestroy.c)
 */

__int64 BgkDestroy()
{
  unsigned int v0; // ebx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int16 v8; // di

  v0 = 0;
  if ( !byte_140E65EE0 )
    return 0LL;
  BgkpDisableConsole();
  byte_140E65EE8 = 0;
  byte_140E65EE0 = 0;
  BgDisplayProgressIndicator(0LL);
  byte_140E65EE1 = 0;
  BgDisplayBackgroundUpdate(0LL);
  v5 = qword_140E65EB0;
  byte_140E65EA0 = 0;
  byte_140E65EC0 = 0;
  if ( qword_140E65EB0 )
  {
    BgConsoleDestroyInterface();
    qword_140E65EB0 = 0LL;
  }
  if ( KeGetCurrentIrql() <= 2u )
  {
    BgpFwAcquireLock(v5, v2, v3, v4);
    v8 = dword_140EF0270;
    if ( (dword_140EF0270 & 1) == 0
      || (qword_140EF03D0 = 0LL, xmmword_140EF03E0 = 0LL, v0 = BgpFwLibraryDestroy(), (v8 & 0xC00) != 0xC00) )
    {
      BgpFwReleaseLock(v7, v6);
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v0;
}
