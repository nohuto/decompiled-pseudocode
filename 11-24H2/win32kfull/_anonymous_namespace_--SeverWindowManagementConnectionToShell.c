/*
 * XREFs of _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1402C0A44
 * Callers:
 *     ?WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x14014834C (-WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z.c)
 *     ?ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z @ 0x140148540 (-ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x14014873C (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1401488C8 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _PostMessage @ 0x140066460 (_PostMessage.c)
 *     ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x140220244 (-SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 */

struct tagWND *__fastcall anonymous_namespace_::SeverWindowManagementConnectionToShell(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v2; // rax
  struct tagWND *v3; // r8
  struct tagWND *result; // rax

  v2 = PtiCurrent(a1, a2);
  result = ShellWindowManagement::SetWindow(*((ShellWindowManagement **)v2 + 62), 0LL, v3);
  if ( result )
    return (struct tagWND *)PostMessage((int)result, 835, 0, 0);
  return result;
}
