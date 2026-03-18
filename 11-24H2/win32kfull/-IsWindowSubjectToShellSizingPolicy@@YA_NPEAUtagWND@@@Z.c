/*
 * XREFs of ?IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z @ 0x1402A5FF0
 * Callers:
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A9828 (-xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@W4AdditionalWindowCheck@1@@Z @ 0x140068010 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x14006809C (-BehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x14014EAE0 (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 */

char __fastcall IsWindowSubjectToShellSizingPolicy(struct tagWND *a1, __int64 a2)
{
  if ( ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)8, a2) )
    return 0;
  if ( IsArranged(a1) && ShellWindowManagement::WindowSubjectToBehavior((__int64)a1, 0x40u, 0, 1) )
    return 1;
  return ShellWindowManagement::WindowSubjectToBehavior((__int64)a1, 0x40u, 1, 0);
}
