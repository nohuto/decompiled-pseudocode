/*
 * XREFs of BgDisplaySafeToPowerOffScreen @ 0x14068C9BC
 * Callers:
 *     PopShutdownHandler @ 0x140B4FEE0 (PopShutdownHandler.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A891C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A8BF0 (BgpFwAcquireLock.c)
 *     BgpDisplaySafeToPowerOffScreen @ 0x14068ED9C (BgpDisplaySafeToPowerOffScreen.c)
 */

__int64 BgDisplaySafeToPowerOffScreen()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // ebx

  BgpFwAcquireLock();
  if ( (dword_140EEFD90 & 2) != 0 )
    v2 = BgpDisplaySafeToPowerOffScreen();
  else
    v2 = -1073741823;
  BgpFwReleaseLock(v1, v0);
  return v2;
}
