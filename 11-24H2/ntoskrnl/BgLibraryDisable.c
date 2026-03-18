/*
 * XREFs of BgLibraryDisable @ 0x140BB0724
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058FDC0 (BgkNotifyDisplayOwnershipChange.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A9ACC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A9CA4 (BgpFwAcquireLock.c)
 *     BgpFwLibraryDisable @ 0x140BB1724 (BgpFwLibraryDisable.c)
 */

__int64 BgLibraryDisable()
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  if ( KeGetCurrentIrql() )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140EF0050 & 1) != 0 )
    BgpFwLibraryDisable();
  BgpFwReleaseLock(v2, v1);
  return 0LL;
}
