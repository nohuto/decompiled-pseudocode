/*
 * XREFs of ?FKBounceKeyTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F5480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FKBounceKeyTimer(struct tagWND *a1)
{
  *(_BYTE *)(W32GetUserSessionState(a1) + 21900) = 0;
}
