/*
 * XREFs of BgLibraryDisable @ 0x140BB2724
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14058CDE0 (BgkNotifyDisplayOwnershipChange.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 *     BgpFwLibraryDisable @ 0x140BB3724 (BgpFwLibraryDisable.c)
 */

__int64 __fastcall BgLibraryDisable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( KeGetCurrentIrql() )
    return 3221225473LL;
  BgpFwAcquireLock(a1, a2, a3, a4);
  if ( (dword_140EF0270 & 1) != 0 )
    BgpFwLibraryDisable();
  BgpFwReleaseLock(v6, v5);
  return 0LL;
}
