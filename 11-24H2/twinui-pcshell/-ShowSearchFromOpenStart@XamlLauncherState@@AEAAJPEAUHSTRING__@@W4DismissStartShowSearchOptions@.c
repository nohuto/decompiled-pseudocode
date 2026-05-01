/*
 * XREFs of ?ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@@@Z @ 0x180250D38
 * Callers:
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1801458C0 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     ?OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1802503A0 (-OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@S.c)
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180250AF0 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?BeginStartToFindInStartAnimation@XamlLauncherState@@UEAAXXZ @ 0x180464F30 (-BeginStartToFindInStartAnimation@XamlLauncherState@@UEAAXXZ.c)
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x180466060 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180466F30 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x1801B5750 (-IsStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1801BFA80 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x1801EBEA0 (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 *     ?ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x180218784 (-ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x1802A1A28 (CortanaHelpers--AllowCortanaAboveLock.c)
 *     ??$ShowCortanaFromOpenStart@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180463F70 (--$ShowCortanaFromOpenStart@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@.c)
 *     ?IsSessionIdle@XamlLauncherState@@AEBA_NXZ @ 0x180465874 (-IsSessionIdle@XamlLauncherState@@AEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::ShowSearchFromOpenStart(__int64 a1, HSTRING a2, int a3)
{
  _DWORD *v6; // r15
  char v7; // r14
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v11; // eax
  int v13; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+28h] [rbp-18h]
  char v15; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  char v17; // [rsp+80h] [rbp+40h] BYREF
  HSTRING v18; // [rsp+88h] [rbp+48h] BYREF
  char v19; // [rsp+98h] [rbp+58h] BYREF

  v18 = a2;
  v6 = (_DWORD *)(a1 + 64);
  v13 = *(_DWORD *)(a1 + 64);
  v14 = a1;
  v7 = 1;
  v15 = 1;
  v17 = 0;
  v8 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 80) + 136LL))(*(_QWORD *)(a1 + 80), &v17);
  v9 = v8;
  if ( v8 >= 0 )
  {
    if ( !XamlLauncherState::IsSessionIdle((XamlLauncherState *)a1)
      || !(unsigned __int8)CortanaHelpers::AllowCortanaAboveLock()
      || !XamlLauncherState::IsStartVisible((XamlLauncherState *)(a1 + 24)) )
    {
      v7 = 0;
    }
    WindowsGetStringRawBuffer(a2, 0LL);
    if ( v17 || v7 )
    {
      v11 = XamlLauncherState::ShowSearch((XamlLauncherState *)a1, a2);
      if ( v11 < 0 )
        goto LABEL_28;
      if ( v7 )
      {
LABEL_31:
        v9 = 0;
        goto LABEL_32;
      }
    }
    else
    {
      v19 = 0;
      v8 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 88) + 136LL))(*(_QWORD *)(a1 + 88), &v19);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 2730LL;
        goto LABEL_11;
      }
      if ( v19 )
      {
        if ( a2 )
        {
          v8 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)(a1 + 1096), &v18);
          v9 = v8;
          if ( v8 < 0 )
          {
            v10 = 2802LL;
            goto LABEL_11;
          }
        }
        *v6 = 12;
        v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 128LL))(*(_QWORD *)(a1 + 88), 2LL);
        v9 = v8;
        if ( v8 < 0 )
        {
          v10 = 2805LL;
          goto LABEL_11;
        }
        v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 112LL))(*(_QWORD *)(a1 + 80));
        v9 = v8;
        if ( v8 < 0 )
        {
          v10 = 2806LL;
          goto LABEL_11;
        }
      }
      else if ( a3 == 2 )
      {
        *v6 = 22;
        v11 = XamlLauncherState::ShowSearch((XamlLauncherState *)a1, a2);
        if ( v11 < 0 )
          goto LABEL_28;
      }
      else
      {
        *v6 = 14;
        v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 80) + 64LL))(*(_QWORD *)(a1 + 80), 7LL);
        v9 = v8;
        if ( v8 < 0 )
        {
          v10 = 2833LL;
          goto LABEL_11;
        }
        XamlLauncherState::PostCortanaOrSearchVisibility((XamlLauncherState *)a1, 0, *(_QWORD *)(a1 + 1080));
        v8 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64))(**(_QWORD **)(a1 + 88) + 56LL))(
               *(_QWORD *)(a1 + 88),
               a2,
               7LL);
        v9 = v8;
        if ( v8 < 0 )
        {
          v10 = 2835LL;
          goto LABEL_11;
        }
      }
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 120LL))(*(_QWORD *)(a1 + 88));
    if ( v11 >= 0 )
      goto LABEL_31;
LABEL_28:
    v9 = v11;
    goto LABEL_32;
  }
  v10 = 2713LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v8);
LABEL_32:
  v15 = 0;
  StartWindowTelemetry::ShowCortanaFromOpenStart<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v13,
    v6);
  return v9;
}
