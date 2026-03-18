/*
 * XREFs of ?SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z @ 0x140035D18
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1402929F8 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x140297470 (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall ADAPTER_DISPLAY::SavePointerInfo(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        char a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  __int64 v10; // rdi
  __int64 v11; // rdx

  v10 = a2;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6128;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"VidPnSourceId < m_NumVidPnSources",
      6128LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v11 = 4024 * v10;
  *(_BYTE *)(*((_QWORD *)this + 16) + 4024 * v10 + 766) = a3;
  if ( a3 )
  {
    *(_DWORD *)(*((_QWORD *)this + 16) + v11 + 768) = a4;
    *(_DWORD *)(*((_QWORD *)this + 16) + v11 + 772) = a5;
    *(_DWORD *)(*((_QWORD *)this + 16) + v11 + 716) = a6;
    *(_DWORD *)(*((_QWORD *)this + 16) + v11 + 720) = a7;
  }
}
