/*
 * XREFs of ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180250AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x1801EBEA0 (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 *     ?ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x180218784 (-ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x180227834 (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@@@Z @ 0x180250D38 (-ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@.c)
 *     ??$ShowCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180463EF8 (--$ShowCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4Inte.c)
 *     ?IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x18046583C (-IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?IsShowOrToggleBlocked@XamlLauncherState@@AEBA_NXZ @ 0x1804658D0 (-IsShowOrToggleBlocked@XamlLauncherState@@AEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::Show(XamlLauncherState *this, HSTRING a2)
{
  XamlLauncherState *v4; // rbx
  int v6; // edx
  unsigned int v7; // esi
  int v8; // edi
  int v9; // eax
  unsigned int v10; // esi
  int v11; // eax
  const wchar_t *StringRawBuffer; // rax
  int v13; // eax
  int v14; // [rsp+20h] [rbp-28h] BYREF
  XamlLauncherState *v15; // [rsp+28h] [rbp-20h]
  char v16; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v18; // [rsp+50h] [rbp+8h] BYREF

  v4 = (XamlLauncherState *)((char *)this - 32);
  if ( XamlLauncherState::IsShowOrToggleBlocked((XamlLauncherState *)((char *)this - 32)) )
    return 0LL;
  if ( XamlLauncherState::IsSearchDisabledByPolicy(v4) )
    return 2147942487LL;
  *((_WORD *)this + 521) = 0;
  v6 = *((_DWORD *)this + 8);
  v14 = v6;
  v15 = v4;
  v7 = 1;
  v16 = 1;
  if ( v6 )
  {
    if ( v6 == 5 )
    {
      if ( a2 )
      {
        StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
        if ( StringRawBuffer )
        {
          if ( wcsstr(StringRawBuffer, L"QuerySource=StartSearchBox") )
            v7 = 2;
        }
      }
      v13 = XamlLauncherState::ShowSearchFromOpenStart(v4, a2, v7);
      goto LABEL_32;
    }
    if ( v6 == 6 || v6 == 7 || v6 == 12 || v6 == 13 || v6 == 14 )
      goto LABEL_18;
    if ( v6 != 16 )
    {
      if ( v6 != 22 )
      {
LABEL_14:
        v8 = 0;
LABEL_15:
        v16 = 0;
        StartWindowTelemetry::ShowCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
          &v14,
          (char *)v4 + 64);
        return (unsigned int)v8;
      }
LABEL_18:
      if ( v6 == 7 )
      {
        v18 = 0;
        v11 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 7) + 480LL))(*((_QWORD *)this + 7), &v18);
        if ( v11 >= 0 )
        {
          if ( v18 )
          {
            XamlLauncherState::PostCortanaOrSearchVisibility(v4, 0, *((_QWORD *)this + 131));
            v7 = 7;
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x52B,
            (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v11);
        }
      }
      v8 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, _QWORD))(**((_QWORD **)this + 7) + 56LL))(
             *((_QWORD *)this + 7),
             a2,
             v7);
      if ( v8 < 0 )
        goto LABEL_15;
      goto LABEL_14;
    }
    XamlLauncherState::BeginCortanaTelemetryTimeout((char *)v4);
    *((_DWORD *)this + 8) = 17;
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 64LL))(*((_QWORD *)this + 6), 8LL);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x51B,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v9);
      goto LABEL_34;
    }
  }
  else
  {
    XamlLauncherState::BeginCortanaTelemetryTimeout((char *)v4);
    *((_BYTE *)this + 1044) = 0;
  }
  *((_DWORD *)this + 8) = 6;
  v13 = XamlLauncherState::ShowSearch(v4, a2);
LABEL_32:
  if ( v13 >= 0 )
    goto LABEL_14;
  v10 = v13;
LABEL_34:
  v16 = 0;
  StartWindowTelemetry::ShowCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v14,
    (char *)v4 + 64);
  return v10;
}
