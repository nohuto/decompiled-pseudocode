/*
 * XREFs of ??4?$SGRDPgbConnectCompleted@H@@QEAAAEAHAEBH@Z @ 0x14019E564
 * Callers:
 *     SetConnectedState @ 0x14014C310 (SetConnectedState.c)
 *     SetConnectCompletedState @ 0x14014C390 (SetConnectCompletedState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGRDPgbConnectCompleted<int>::operator=(__int64 a1, int *a2)
{
  int v2; // ebx
  __int64 v3; // rcx

  v2 = *a2;
  *(_DWORD *)(W32GetUserSessionState(a1) + 69016) = v2;
  return W32GetUserSessionState(v3) + 69016;
}
