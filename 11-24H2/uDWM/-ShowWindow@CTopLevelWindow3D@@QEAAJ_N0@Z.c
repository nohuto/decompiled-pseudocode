/*
 * XREFs of ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18001A6A4
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001B770 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800136A4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x1800187EC (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x18001B208 (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180023A5C (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180024708 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180098420 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?_GetAndClearAnimatedWhenUncloaked@CTopLevelWindow3D@@AEAA_NXZ @ 0x18009B34C (-_GetAndClearAnimatedWhenUncloaked@CTopLevelWindow3D@@AEAA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1838 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800C7E88 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::ShowWindow(CTopLevelWindow3D *this, bool a2, char a3)
{
  unsigned int v3; // ebx
  const struct CWindowData **v4; // rsi
  int v7; // eax
  int v8; // eax
  int started; // eax
  const struct CWindowData *v11; // r11
  CLivePreview *v12; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  unsigned int v17; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  v4 = (const struct CWindowData **)((char *)this + 288);
  if ( !a2 || (*((_BYTE *)*v4 + 740) & 1) != 0 )
  {
    if ( CTopLevelWindow3D::ShouldDelayTransition(this, 0) )
    {
      started = CTopLevelWindow3D::StartDelayHideAnimation(this);
      v3 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x147u, 0LL);
    }
    else if ( !*((_QWORD *)this + 40) || *((_DWORD *)this + 84) != 3 )
    {
      v7 = CTopLevelWindow3D::StopAnimation(this);
      v3 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x150u, 0LL);
      }
      else
      {
        v8 = CTopLevelWindow::ShowWindow(*((CTopLevelWindow **)*v4 + 55), 0);
        v3 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x152u, 0LL);
      }
    }
  }
  else if ( CTopLevelWindow3D::ShouldDelayTransition(this, a2) )
  {
    v14 = CTopLevelWindow3D::StartAnimation((__int64)this, 7u);
    v3 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x130u, 0LL);
  }
  else if ( CTopLevelWindow3D::ShouldShowTransition(this)
         && (a3 || CTopLevelWindow3D::_GetAndClearAnimatedWhenUncloaked(this)) )
  {
    if ( *((_QWORD *)this + 40) )
    {
      v16 = CTopLevelWindow3D::StopAnimation(this);
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x137,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
          (const char *)(unsigned int)v16,
          v17);
    }
    v15 = CTopLevelWindow3D::StartAnimation((__int64)this, 1u);
    v3 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x139u, 0LL);
  }
  else if ( !*((_QWORD *)this + 40) )
  {
    v11 = *v4;
    v12 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57);
    if ( !*((_BYTE *)v12 + 240) || !v11 || !CLivePreview::_IsInLivePreview(v12, *v4) )
    {
      v13 = CTopLevelWindow::ShowWindow(*((CTopLevelWindow **)v11 + 55), 1);
      v3 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x13Fu, 0LL);
    }
  }
  return v3;
}
