/*
 * XREFs of ?OnStartHidden@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1800E7AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$LauncherClosed@AEAW4IMMERSIVELAUNCHERDISMISSMETHOD@@@CommonStartTelemetry@@SAXAEAW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x1800E7B44 (--$LauncherClosed@AEAW4IMMERSIVELAUNCHERDISMISSMETHOD@@@CommonStartTelemetry@@SAXAEAW4IMMERSIVEL.c)
 *     ??$OnStartHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1800E7BB8 (--$OnStartHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4In.c)
 *     ?CompleteAutoInvokeTestIfNecessary@XamlLauncherState@@AEAAXXZ @ 0x1800E8FC0 (-CompleteAutoInvokeTestIfNecessary@XamlLauncherState@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnStartHidden(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        struct IInspectable *a3)
{
  _DWORD *v4; // rbx
  int v6; // [rsp+20h] [rbp-28h] BYREF
  XamlLauncherState *v7; // [rsp+28h] [rbp-20h]
  char v8; // [rsp+30h] [rbp-18h]

  v4 = (_DWORD *)((char *)this + 64);
  v6 = *((_DWORD *)this + 16);
  v7 = this;
  v8 = 1;
  (*(void (__fastcall **)(_QWORD, struct Windows::Internal::Shell::Experience::IStartExperienceManager *, struct IInspectable *))(**((_QWORD **)this + 16) + 32LL))(
    *((_QWORD *)this + 16),
    a2,
    a3);
  switch ( *v4 )
  {
    case 0x11:
      goto LABEL_7;
    case 9:
      *v4 = 10;
      break;
    case 0xB:
LABEL_7:
      *v4 = 0;
      break;
    case 0xE:
      *v4 = 7;
      break;
  }
  XamlLauncherState::CompleteAutoInvokeTestIfNecessary(this);
  CommonStartTelemetry::LauncherClosed<enum IMMERSIVELAUNCHERDISMISSMETHOD &>((char *)this + 304);
  v8 = 0;
  StartWindowTelemetry::OnStartHidden<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v6,
    v4);
  return 0LL;
}
