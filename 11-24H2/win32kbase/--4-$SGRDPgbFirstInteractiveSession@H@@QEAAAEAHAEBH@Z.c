/*
 * XREFs of ??4?$SGRDPgbFirstInteractiveSession@H@@QEAAAEAHAEBH@Z @ 0x1401B0E40
 * Callers:
 *     ?CheckInitialSessions@@YAJXZ @ 0x14012A8C0 (-CheckInitialSessions@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGRDPgbFirstInteractiveSession<int>::operator=(__int64 a1, int *a2)
{
  int v2; // ebx
  __int64 v3; // rcx

  v2 = *a2;
  *(_DWORD *)(W32GetUserSessionState(a1) + 68876) = v2;
  return W32GetUserSessionState(v3) + 68876;
}
