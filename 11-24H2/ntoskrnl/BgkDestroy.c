/*
 * XREFs of BgkDestroy @ 0x140BB0170
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058FDC0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140C6FD78 (BgkInitialize.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A9ACC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A9CA4 (BgpFwAcquireLock.c)
 *     BgkpDisableConsole @ 0x1405902EC (BgkpDisableConsole.c)
 *     BgDisplayBackgroundUpdate @ 0x140BB05EC (BgDisplayBackgroundUpdate.c)
 *     BgDisplayProgressIndicator @ 0x140BB0628 (BgDisplayProgressIndicator.c)
 *     BgConsoleDestroyInterface @ 0x140BB0940 (BgConsoleDestroyInterface.c)
 *     BgpFwLibraryDestroy @ 0x140BB1678 (BgpFwLibraryDestroy.c)
 */

__int64 BgkDestroy()
{
  unsigned int v0; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int16 v4; // di

  v0 = 0;
  if ( !byte_140E65DA8 )
    return 0LL;
  BgkpDisableConsole();
  byte_140E65DB1 = 0;
  byte_140E65DA8 = 0;
  BgDisplayProgressIndicator(0LL);
  byte_140E65DA9 = 0;
  BgDisplayBackgroundUpdate(0LL);
  byte_140E65D68 = 0;
  byte_140E65D80 = 0;
  if ( qword_140E65D70 )
  {
    BgConsoleDestroyInterface();
    qword_140E65D70 = 0LL;
  }
  if ( KeGetCurrentIrql() <= 2u )
  {
    BgpFwAcquireLock();
    v4 = dword_140EF0050;
    if ( (dword_140EF0050 & 1) == 0
      || (qword_140EF01B0 = 0LL, xmmword_140EF01C0 = 0LL, v0 = BgpFwLibraryDestroy(), (v4 & 0xC00) != 0xC00) )
    {
      BgpFwReleaseLock(v3, v2);
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v0;
}
