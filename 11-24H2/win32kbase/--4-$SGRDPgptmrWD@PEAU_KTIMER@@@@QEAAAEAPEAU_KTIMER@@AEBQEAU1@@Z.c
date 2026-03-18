/*
 * XREFs of ??4?$SGRDPgptmrWD@PEAU_KTIMER@@@@QEAAAEAPEAU_KTIMER@@AEBQEAU1@@Z @ 0x14019E4BC
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x140165460 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     xxxRemoteConnect @ 0x140167F90 (xxxRemoteConnect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGRDPgptmrWD<_KTIMER *>::operator=(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  v2 = *a2;
  *(_QWORD *)(W32GetUserSessionState(a1) + 69200) = v2;
  return W32GetUserSessionState(v3) + 69200;
}
