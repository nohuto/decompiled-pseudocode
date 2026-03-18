/*
 * XREFs of ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x140067B0C
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x14022C22C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140048AF4 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z @ 0x140067BBC (-CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z.c)
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140067F70 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z @ 0x140067FA4 (-IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x14006809C (-BehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     IsImmersiveApplicationBandId @ 0x1400680D4 (IsImmersiveApplicationBandId.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1402C1030 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     _anonymous_namespace_::WindowSizingUpdate @ 0x1402C134C (_anonymous_namespace_--WindowSizingUpdate.c)
 */

void __fastcall NotifyShell::PositioningChanged(NotifyShell *this, struct tagWND *a2, const struct tagCVR *a3)
{
  int v5; // eax
  unsigned int v6; // edx
  bool v7; // r8

  if ( (*((_DWORD *)a2 + 8) & 0x80u) != 0 )
    NotifyShell::CuratedWindowHidden(this, a2, a3);
  v5 = *((_DWORD *)a2 + 8);
  if ( (v5 & 0x1000C0) == 0
    && (v5 & 3) != 3
    && (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 0x10) != 0
    && !IsWindowCloaked(this) )
  {
    if ( ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)0x10, v6)
      && (*(_DWORD *)(*((_QWORD *)this + 5) + 236LL) == 1 || (unsigned int)IsImmersiveApplicationBandId()) )
    {
      if ( IsTrayWindow(this, 2LL) )
        NotifyShell::TrackedWindowPosChanged(this, 0LL, v7);
    }
    if ( IsShellParticipatesInSizing(this) )
      anonymous_namespace_::WindowSizingUpdate(this);
  }
}
