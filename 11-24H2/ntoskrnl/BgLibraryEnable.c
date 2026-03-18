/*
 * XREFs of BgLibraryEnable @ 0x140697D44
 * Callers:
 *     BgkAcquireDisplayOwnership @ 0x14058FBA0 (BgkAcquireDisplayOwnership.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x14058FDC0 (BgkNotifyDisplayOwnershipChange.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A9ACC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A9CA4 (BgpFwAcquireLock.c)
 *     BgpFwLibraryEnable @ 0x140698104 (BgpFwLibraryEnable.c)
 */

__int64 __fastcall BgLibraryEnable(__int64 a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx

  if ( a2 )
    dword_140EF0050 |= 0xC00u;
  if ( !a1 )
    return (dword_140EF0050 & 2) == 0 ? 0xC00000EF : 0;
  if ( !a2 && KeGetCurrentIrql() )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140EF0050 & 1) != 0 )
    v6 = BgpFwLibraryEnable(a1);
  else
    v6 = -1073741637;
  BgpFwReleaseLock(v5, v4);
  return v6;
}
