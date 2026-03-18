/*
 * XREFs of BgLibraryEnable @ 0x14068C9F4
 * Callers:
 *     BgkAcquireDisplayOwnership @ 0x14058C3C0 (BgkAcquireDisplayOwnership.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x14058C5E0 (BgkNotifyDisplayOwnershipChange.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A891C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A8BF0 (BgpFwAcquireLock.c)
 *     BgpFwLibraryEnable @ 0x14068CDB4 (BgpFwLibraryEnable.c)
 */

__int64 __fastcall BgLibraryEnable(__int64 a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx

  if ( a2 )
    dword_140EEFD90 |= 0xC00u;
  if ( !a1 )
    return (dword_140EEFD90 & 2) == 0 ? 0xC00000EF : 0;
  if ( !a2 && KeGetCurrentIrql() )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140EEFD90 & 1) != 0 )
    v6 = BgpFwLibraryEnable(a1);
  else
    v6 = -1073741637;
  BgpFwReleaseLock(v5, v4);
  return v6;
}
