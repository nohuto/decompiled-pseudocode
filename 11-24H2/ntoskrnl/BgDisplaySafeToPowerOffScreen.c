/*
 * XREFs of BgDisplaySafeToPowerOffScreen @ 0x140697D0C
 * Callers:
 *     PopShutdownHandler @ 0x140B60010 (PopShutdownHandler.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A9ACC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A9CA4 (BgpFwAcquireLock.c)
 *     BgpDisplaySafeToPowerOffScreen @ 0x14069A0EC (BgpDisplaySafeToPowerOffScreen.c)
 */

__int64 BgDisplaySafeToPowerOffScreen()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // ebx

  BgpFwAcquireLock();
  if ( (dword_140EF0050 & 2) != 0 )
    v2 = BgpDisplaySafeToPowerOffScreen();
  else
    v2 = -1073741823;
  BgpFwReleaseLock(v1, v0);
  return v2;
}
