/*
 * XREFs of BgkDestroy @ 0x140BA0170
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058C5E0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140C5E998 (BgkInitialize.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A891C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A8BF0 (BgpFwAcquireLock.c)
 *     BgkpDisableConsole @ 0x14058CB0C (BgkpDisableConsole.c)
 *     BgDisplayBackgroundUpdate @ 0x140BA05EC (BgDisplayBackgroundUpdate.c)
 *     BgDisplayProgressIndicator @ 0x140BA0628 (BgDisplayProgressIndicator.c)
 *     BgConsoleDestroyInterface @ 0x140BA0940 (BgConsoleDestroyInterface.c)
 *     BgpFwLibraryDestroy @ 0x140BA1678 (BgpFwLibraryDestroy.c)
 */

__int64 BgkDestroy()
{
  unsigned int v0; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int16 v4; // di

  v0 = 0;
  if ( !byte_140E65B48 )
    return 0LL;
  BgkpDisableConsole();
  byte_140E65B52 = 0;
  byte_140E65B48 = 0;
  BgDisplayProgressIndicator(0LL);
  byte_140E65B51 = 0;
  BgDisplayBackgroundUpdate(0LL);
  byte_140E65B21 = 0;
  byte_140E65B20 = 0;
  if ( qword_140E65B08 )
  {
    BgConsoleDestroyInterface();
    qword_140E65B08 = 0LL;
  }
  if ( KeGetCurrentIrql() <= 2u )
  {
    BgpFwAcquireLock();
    v4 = dword_140EEFD90;
    if ( (dword_140EEFD90 & 1) == 0
      || (qword_140EEFEF0 = 0LL, xmmword_140EEFF00 = 0LL, v0 = BgpFwLibraryDestroy(), (v4 & 0xC00) != 0xC00) )
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
