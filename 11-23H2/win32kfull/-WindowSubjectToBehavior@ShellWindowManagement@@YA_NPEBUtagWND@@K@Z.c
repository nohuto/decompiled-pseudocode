/*
 * XREFs of ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z @ 0x1C021D7B8
 * Callers:
 *     NtUserSetWindowPos @ 0x1C0045B40 (NtUserSetWindowPos.c)
 *     ?IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z @ 0x1C01E99D4 (-IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F04DC (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C01FFF28 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C0200170 (xxxHandleNCMouseGuys.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C021D528 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C005BCE4 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     _anonymous_namespace_::EligibleWindow @ 0x1C00A41D0 (_anonymous_namespace_--EligibleWindow.c)
 */

char __fastcall ShellWindowManagement::WindowSubjectToBehavior(ShellWindowManagement **this, const struct tagWND *a2)
{
  char result; // al
  __int64 v3; // rcx
  char v4; // r9
  struct tagWND *v5; // r10

  result = ShellWindowManagement::BehaviorEnabled(this[3], a2);
  if ( result )
    return anonymous_namespace_::EligibleWindow(v5, (v4 & 0xC) == 0 || (*(_DWORD *)(v3 + 336) & 0x10000000) == 0);
  return result;
}
