/*
 * XREFs of ?OnCortanaDismissRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1801F0F40
 * Callers:
 *     <none>
 * Callees:
 *     ??$OnCortanaDismissRequested@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1801F0FB4 (--$OnCortanaDismissRequested@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry.c)
 *     ?MinimizeCortanaToBoxMode@XamlLauncherState@@UEAAXXZ @ 0x1804659C0 (-MinimizeCortanaToBoxMode@XamlLauncherState@@UEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnCortanaDismissRequested(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  _DWORD *v3; // rbx
  int v4; // edx
  int v6; // [rsp+20h] [rbp-28h] BYREF
  XamlLauncherState *v7; // [rsp+28h] [rbp-20h]
  char v8; // [rsp+30h] [rbp-18h]

  v3 = (_DWORD *)((char *)this + 64);
  v4 = *((_DWORD *)this + 16);
  v6 = v4;
  v7 = this;
  v8 = 1;
  if ( v4 == 5 )
  {
    XamlLauncherState::MinimizeCortanaToBoxMode((XamlLauncherState *)((char *)this + 24));
  }
  else if ( v4 == 7 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, struct IInspectable *))(**((_QWORD **)this + 12) + 24LL))(
      *((_QWORD *)this + 12),
      3LL,
      a3);
    *v3 = 8;
  }
  v8 = 0;
  StartWindowTelemetry::OnCortanaDismissRequested<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v6,
    v3);
  return 0LL;
}
