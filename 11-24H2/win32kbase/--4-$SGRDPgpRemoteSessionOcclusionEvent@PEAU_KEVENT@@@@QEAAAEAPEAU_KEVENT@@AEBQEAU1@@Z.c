/*
 * XREFs of ??4?$SGRDPgpRemoteSessionOcclusionEvent@PEAU_KEVENT@@@@QEAAAEAPEAU_KEVENT@@AEBQEAU1@@Z @ 0x14019E480
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x140165460 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGRDPgpRemoteSessionOcclusionEvent<_KEVENT *>::operator=(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  v2 = *a2;
  *(_QWORD *)(W32GetUserSessionState(a1) + 68696) = v2;
  return W32GetUserSessionState(v3) + 68696;
}
