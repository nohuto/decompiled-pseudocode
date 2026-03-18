/*
 * XREFs of ?EnsureValidCursorPosition@CCursorClip@@QEAAXXZ @ 0x14020B058
 * Callers:
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x140047F28 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x140157CAC (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 *     DisableDelegation @ 0x140189550 (DisableDelegation.c)
 * Callees:
 *     ApiSetEditionInternalSetCursorPos @ 0x140192280 (ApiSetEditionInternalSetCursorPos.c)
 */

void __fastcall CCursorClip::EnsureValidCursorPosition(CCursorClip *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  __int64 UserSessionState; // rax

  v1 = *(_QWORD *)(W32GetUserSessionState(this) + 19928);
  v2 = *(_DWORD *)(v1 + 4964);
  UserSessionState = W32GetUserSessionState(v1);
  ApiSetEditionInternalSetCursorPos(*(unsigned int *)(*(_QWORD *)(UserSessionState + 19928) + 4960LL), v2, 2u);
}
