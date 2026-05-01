/*
 * XREFs of ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180466F30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x180218784 (-ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x180227834 (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@@@Z @ 0x180250D38 (-ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@.c)
 *     ??$ToggleCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1804643B8 (--$ToggleCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4In.c)
 *     ?IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x18046583C (-IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?IsShowOrToggleBlocked@XamlLauncherState@@AEBA_NXZ @ 0x1804658D0 (-IsShowOrToggleBlocked@XamlLauncherState@@AEBA_NXZ.c)
 *     ?MinimizeCortanaToBoxMode@XamlLauncherState@@UEAAXXZ @ 0x1804659C0 (-MinimizeCortanaToBoxMode@XamlLauncherState@@UEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall XamlLauncherState::Toggle(XamlLauncherState *this, HSTRING a2)
{
  int *v4; // rdi
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // esi
  int v11; // eax
  int v12; // [rsp+20h] [rbp-38h] BYREF
  int v13; // [rsp+28h] [rbp-30h] BYREF
  int *v14; // [rsp+30h] [rbp-28h]
  char v15; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = (int *)((char *)this - 32);
  if ( XamlLauncherState::IsShowOrToggleBlocked((XamlLauncherState *)((char *)this - 32)) )
    return 0LL;
  if ( XamlLauncherState::IsSearchDisabledByPolicy((XamlLauncherState *)v4) )
    return 2147942487LL;
  v6 = *((_DWORD *)this + 8);
  v13 = v6;
  v14 = v4;
  v15 = 1;
  if ( v6 )
  {
    if ( v6 != 5 )
    {
      if ( v6 == 7 )
      {
        *((_DWORD *)this + 8) = 8;
        v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 96LL))(*((_QWORD *)this + 7));
        v8 = v7;
        if ( v7 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5C1,
            (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v7);
LABEL_15:
          v15 = 0;
          StartWindowTelemetry::ToggleCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
            &v13,
            v4 + 16);
          return v8;
        }
      }
LABEL_14:
      v8 = 0;
      goto LABEL_15;
    }
    LOBYTE(v12) = 0;
    v9 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 7) + 168LL))(*((_QWORD *)this + 7), &v12);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5C8,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v9);
      goto LABEL_20;
    }
    if ( (_BYTE)v12 )
    {
      XamlLauncherState::MinimizeCortanaToBoxMode((XamlLauncherState *)((char *)this - 8));
      goto LABEL_14;
    }
    v11 = XamlLauncherState::ShowSearchFromOpenStart((__int64)v4, a2, 1);
  }
  else
  {
    XamlLauncherState::BeginCortanaTelemetryTimeout((char *)v4);
    *((_WORD *)this + 521) = 0;
    *((_BYTE *)this + 1044) = 0;
    *((_DWORD *)this + 8) = 6;
    v11 = XamlLauncherState::ShowSearch((XamlLauncherState *)v4, a2);
  }
  if ( v11 >= 0 )
    goto LABEL_14;
  v10 = v11;
LABEL_20:
  v15 = 0;
  StartWindowTelemetry::ToggleCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v13,
    v4 + 16);
  return v10;
}
