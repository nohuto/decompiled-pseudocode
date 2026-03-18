/*
 * XREFs of ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@KW4ShellWindowManagementStates@@W4AdditionalWindowCheck@1@@Z @ 0x140068010
 * Callers:
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x140048130 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1401AF278 (xxxHandleNCMouseGuys.c)
 *     NtUserSetWindowPos @ 0x140247430 (NtUserSetWindowPos.c)
 *     ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x140254CA4 (-xxxGetShellShowWindowCommand@@YA-AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@.c)
 *     NtUserGetWindowTrackInfoAsync @ 0x140298120 (NtUserGetWindowTrackInfoAsync.c)
 *     ?IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z @ 0x1402A5FF0 (-IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402A9B34 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1402C1030 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 * Callees:
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140048AF4 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x14006809C (-BehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     IsImmersiveApplicationBandId @ 0x1400680D4 (IsImmersiveApplicationBandId.c)
 */

char __fastcall ShellWindowManagement::WindowSubjectToBehavior(__int64 a1, unsigned int a2, int a3, int a4)
{
  if ( !ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)a2, a2) )
    return 0;
  if ( a4 == 1 )
  {
    if ( a3 && (a3 & *(_DWORD *)(a1 + 388)) == a3 )
      return 1;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) == 1 || (unsigned int)IsImmersiveApplicationBandId() )
      return IsTrayWindow((_QWORD *)a1, 2LL);
    return 0;
  }
  return (a3 & *(_DWORD *)(a1 + 388)) == a3;
}
