/*
 * XREFs of ?OnConnected@ShellGesturesClientProxy@@MEAAJXZ @ 0x18002DCB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_back_internal@AEAPEAVShellGesturesClientProxy@@@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@AEAAXAEAPEAVShellGesturesClientProxy@@@Z @ 0x18002DBD8 (--$_Emplace_back_internal@AEAPEAVShellGesturesClientProxy@@@-$deque@PEAVShellGesturesClientProxy.c)
 *     ?OnInputSinkDataChanged@ShellGesturesClientProxy@@MEAAJXZ @ 0x18002DCF0 (-OnInputSinkDataChanged@ShellGesturesClientProxy@@MEAAJXZ.c)
 *     ?CheckCapability@ShellGesturesClientProxy@@AEAAJXZ @ 0x18002DE80 (-CheckCapability@ShellGesturesClientProxy@@AEAAJXZ.c)
 *     ?GetDesktop@ShellGesturesClientProxy@@AEAAJXZ @ 0x18002E510 (-GetDesktop@ShellGesturesClientProxy@@AEAAJXZ.c)
 */

__int64 __fastcall ShellGesturesClientProxy::OnConnected(ShellGesturesClientProxy *this)
{
  __int64 v2; // rcx
  ShellGesturesClientProxy *v4; // [rsp+30h] [rbp+8h] BYREF

  ShellGesturesClientProxy::OnInputSinkDataChanged(this);
  v4 = this;
  std::deque<ShellGesturesClientProxy *>::_Emplace_back_internal<ShellGesturesClientProxy * &>(v2, (__int64 *)&v4);
  ShellGesturesClientProxy::GetDesktop(this);
  ShellGesturesClientProxy::CheckCapability(this);
  return 0LL;
}
