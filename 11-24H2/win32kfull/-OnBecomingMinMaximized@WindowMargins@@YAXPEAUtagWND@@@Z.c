/*
 * XREFs of ?OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z @ 0x14014C0EC
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 * Callees:
 *     ?GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z @ 0x140049924 (-GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x14014C28C (WindowMargins--_anonymous_namespace_--GetWindowMargins.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x14019AC0C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 */

void __fastcall WindowMargins::OnBecomingMinMaximized(WindowMargins *this, struct tagWND *a2)
{
  __int64 v3; // rdx
  struct WindowMargins::CWindowMarginProp *v4; // rax
  __int64 v5; // rdx
  char v6; // r14
  char v7; // bp
  __int64 v8; // rdi
  char v9; // bl
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // r9
  const char *v14; // rax

  if ( IsTopLevelWindow((__int64)this) )
  {
    v4 = WindowMargins::CWindowMarginProp::GetOrCreate(this, v3);
    if ( v4 )
    {
      if ( !*((_BYTE *)v4 + 24) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100000) == 0
          || (v6 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v6 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v7 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v7 = 0;
        }
        if ( v6 || v7 )
        {
          v8 = *(_QWORD *)this;
          v9 = *(_BYTE *)(*((_QWORD *)this + 5) + 31LL);
          UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
          LOBYTE(v11) = v7;
          LOBYTE(v12) = v6;
          v13 = *(_QWORD *)(UserSessionState + 69416);
          v14 = "Maximized";
          if ( (v9 & 1) == 0 )
            v14 = "Minimized";
          WPP_RECORDER_AND_TRACE_SF_qs(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v12,
            v11,
            v13,
            5,
            21,
            30,
            (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
            v8,
            (__int64)v14);
        }
        WindowMargins::_anonymous_namespace_::GetWindowMargins(this, 0LL);
      }
    }
  }
}
