/*
 * XREFs of BgLibraryDisable @ 0x140BA0724
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058C5E0 (BgkNotifyDisplayOwnershipChange.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A891C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A8BF0 (BgpFwAcquireLock.c)
 *     BgpFwLibraryDisable @ 0x140BA1724 (BgpFwLibraryDisable.c)
 */

__int64 BgLibraryDisable()
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  if ( KeGetCurrentIrql() )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140EEFD90 & 1) != 0 )
    BgpFwLibraryDisable();
  BgpFwReleaseLock(v2, v1);
  return 0LL;
}
