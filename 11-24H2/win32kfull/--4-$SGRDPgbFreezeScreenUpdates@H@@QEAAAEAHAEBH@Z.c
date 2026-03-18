/*
 * XREFs of ??4?$SGRDPgbFreezeScreenUpdates@H@@QEAAAEAHAEBH@Z @ 0x14026C560
 * Callers:
 *     xxxRemoteStopScreenUpdates @ 0x1401DF978 (xxxRemoteStopScreenUpdates.c)
 *     RemoteRedrawScreen @ 0x1401E03FC (RemoteRedrawScreen.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGRDPgbFreezeScreenUpdates<int>::operator=(__int64 a1, int *a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = *a2;
  *(_DWORD *)(W32GetUserSessionState(a1, a2) + 69116) = v2;
  return W32GetUserSessionState(v4, v3) + 69116;
}
