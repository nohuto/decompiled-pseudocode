/*
 * XREFs of ?OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z @ 0x1C005F7F8
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C005E99C (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 * Callees:
 *     WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x1C005F890 (WindowMargins--_anonymous_namespace_--GetWindowMargins.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1C00A623C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     ?GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z @ 0x1C00EBFF8 (-GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C0122A20 (_IsTopLevelWindow.c)
 */

void __fastcall WindowMargins::OnBecomingMinMaximized(WindowMargins *this, struct tagWND *a2)
{
  struct tagWND *v3; // rcx
  struct WindowMargins::CWindowMarginProp *v4; // rax
  int v5; // edx
  int v6; // r8d
  const char *v7; // rax

  if ( (unsigned int)IsTopLevelWindow(this) )
  {
    v4 = WindowMargins::CWindowMarginProp::GetOrCreate(v3);
    if ( v4 )
    {
      if ( !*((_BYTE *)v4 + 24) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
          || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v5) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (LOBYTE(v6) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v6) = 0;
        }
        if ( (_BYTE)v5 || (_BYTE)v6 )
        {
          v7 = "Maximized";
          if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 1) == 0 )
            v7 = "Minimized";
          WPP_RECORDER_AND_TRACE_SF_qs(
            WPP_GLOBAL_Control->AttachedDevice,
            v5,
            v6,
            (_DWORD)gFullLog,
            5,
            21,
            25,
            (__int64)&WPP_96908661ae193f2a313f40ac3be36134_Traceguids,
            *(_QWORD *)this,
            (__int64)v7);
        }
        WindowMargins::_anonymous_namespace_::GetWindowMargins(this, 0LL);
      }
    }
  }
}
