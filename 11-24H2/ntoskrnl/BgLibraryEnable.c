/*
 * XREFs of BgLibraryEnable @ 0x140698DC4
 * Callers:
 *     BgkAcquireDisplayOwnership @ 0x14058CBC0 (BgkAcquireDisplayOwnership.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x14058CDE0 (BgkNotifyDisplayOwnershipChange.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 *     BgpFwLibraryEnable @ 0x140699184 (BgpFwLibraryEnable.c)
 */

__int64 __fastcall BgLibraryEnable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx

  if ( (_BYTE)a2 )
    dword_140EF0270 |= 0xC00u;
  if ( !a1 )
    return (dword_140EF0270 & 2) == 0 ? 0xC00000EF : 0;
  if ( !(_BYTE)a2 && KeGetCurrentIrql() )
    return 3221225473LL;
  BgpFwAcquireLock(a1, a2, a3, a4);
  if ( (dword_140EF0270 & 1) != 0 )
    v8 = BgpFwLibraryEnable(a1);
  else
    v8 = -1073741637;
  BgpFwReleaseLock(v7, v6);
  return v8;
}
