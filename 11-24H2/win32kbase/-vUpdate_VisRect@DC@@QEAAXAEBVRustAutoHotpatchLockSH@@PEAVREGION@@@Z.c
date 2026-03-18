/*
 * XREFs of ?vUpdate_VisRect@DC@@QEAAXAEBVRustAutoHotpatchLockSH@@PEAVREGION@@@Z @ 0x1401C2EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUpdate_VisRectFastOpt@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@AEBVRustAutoHotpatchLockSH@@PEAVREGION@@@Z @ 0x1401C2EF0 (-vUpdate_VisRectFastOpt@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@AEBVRustAutoHotpatchLockSH@@PEAVR.c)
 */

void __fastcall DC::vUpdate_VisRect(DC *this, const struct RustAutoHotpatchLockSH *a2, struct REGION *a3)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(this);
  DC::vUpdate_VisRectFastOpt(this, *(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88), a2, a3);
}
