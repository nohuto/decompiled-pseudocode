/*
 * XREFs of _anonymous_namespace_::ResolveWindowManagementTargetWindow @ 0x14014893C
 * Callers:
 *     ?WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x14014834C (-WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z.c)
 *     ?ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z @ 0x140148540 (-ShellHotKey@NotifyShell@@YA_NPEBUtagWND@@_J_KW4SHELLHOTKEYADDITIONACTIONRESULT@@@Z.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x14014873C (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1401488C8 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?SHData_GetCustomDockTargetWindow@MOVESIZEDATA@@QEBAPEAUtagWND@@XZ @ 0x140149C50 (-SHData_GetCustomDockTargetWindow@MOVESIZEDATA@@QEBAPEAUtagWND@@XZ.c)
 */

struct tagWND *__fastcall anonymous_namespace_::ResolveWindowManagementTargetWindow(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  struct tagTHREADINFO *v4; // r8
  __int64 v5; // rcx
  struct tagWND *result; // rax
  MOVESIZEDATA *v7; // rcx

  v2 = a1;
  v4 = PtiCurrent(a1, a2);
  v5 = *((_QWORD *)v4 + 62);
  result = 0LL;
  if ( v5 && *(_QWORD *)(v5 + 288) )
  {
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        v7 = (MOVESIZEDATA *)*((_QWORD *)v4 + 89);
        if ( v7 )
          return MOVESIZEDATA::SHData_GetCustomDockTargetWindow(v7);
      }
    }
    else
    {
      return *(struct tagWND **)(*((_QWORD *)PtiCurrent(v5, v3) + 62) + 328LL);
    }
  }
  return result;
}
