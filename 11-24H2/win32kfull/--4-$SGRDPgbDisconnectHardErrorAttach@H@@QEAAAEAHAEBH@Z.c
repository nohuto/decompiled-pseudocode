/*
 * XREFs of ??4?$SGRDPgbDisconnectHardErrorAttach@H@@QEAAAEAHAEBH@Z @ 0x14026C70C
 * Callers:
 *     xxxHardErrorControl @ 0x140216A70 (xxxHardErrorControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGRDPgbDisconnectHardErrorAttach<int>::operator=(__int64 a1, int *a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = *a2;
  *(_DWORD *)(W32GetUserSessionState(a1, a2) + 69120) = v2;
  return W32GetUserSessionState(v4, v3) + 69120;
}
