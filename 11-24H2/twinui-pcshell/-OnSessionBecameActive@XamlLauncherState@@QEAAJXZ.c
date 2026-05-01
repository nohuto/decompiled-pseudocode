/*
 * XREFs of ?OnSessionBecameActive@XamlLauncherState@@QEAAJXZ @ 0x1801DB544
 * Callers:
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x1801DB3E0 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??$OnSessionBecameActive@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1801F5198 (--$OnSessionBecameActive@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SA.c)
 *     ?ShowSearchWithStart@XamlLauncherState@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180250F78 (-ShowSearchWithStart@XamlLauncherState@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnSessionBecameActive(XamlLauncherState *this)
{
  char *v1; // rbx
  int v3; // [rsp+20h] [rbp-28h] BYREF
  XamlLauncherState *v4; // [rsp+28h] [rbp-20h]
  char v5; // [rsp+30h] [rbp-18h]

  v1 = (char *)this + 64;
  v3 = *((_DWORD *)this + 16);
  v4 = this;
  v5 = 1;
  if ( v3 == 5 )
    XamlLauncherState::ShowSearchWithStart(this, 8LL);
  v5 = 0;
  StartWindowTelemetry::OnSessionBecameActive<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v3,
    v1);
  return 0LL;
}
