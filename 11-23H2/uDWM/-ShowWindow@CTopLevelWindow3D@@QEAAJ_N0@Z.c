/*
 * XREFs of ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18004BD84
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800482A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x18001DB30 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x18001DB64 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180037364 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18004C100 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18004C860 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x18004DF3C (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x18004DFF4 (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A14C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800C85EC (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800E73A0 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     McTemplateU0pq_EtwEventWriteTransfer @ 0x1800E7648 (McTemplateU0pq_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CTopLevelWindow3D::ShowWindow(CTopLevelWindow3D *this, bool a2, char a3)
{
  unsigned int v3; // ebx
  const struct CWindowData **v4; // rsi
  const struct CWindowData *v7; // r11
  CLivePreview *v8; // rcx
  int v9; // eax
  const struct CWindowData *v10; // rdx
  int v11; // eax
  int v12; // eax
  int v14; // eax
  int SnapshotIndex; // eax
  CTransitionVisualController *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  int started; // eax
  unsigned int v22; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CTransitionWindowSnapshot *v24; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v4 = (const struct CWindowData **)((char *)this + 336);
  if ( !a2 || (*((_BYTE *)*v4 + 676) & 1) != 0 )
  {
    v10 = *v4;
    if ( (*((_BYTE *)*v4 + 676) & 1) != 0
      || (*((_DWORD *)v10 + 170) & 0xFFF) == 0xFFF
      || (SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(
                            *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
                            *((HWND *)v10 + 5)),
          (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v16, SnapshotIndex, &v24) < 0) )
    {
      if ( !*((_QWORD *)this + 46) || *((_DWORD *)this + 96) != 3 )
      {
        v11 = CTopLevelWindow3D::StopAnimation(this);
        v3 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x185u, 0LL);
        }
        else
        {
          v12 = CTopLevelWindow::ShowWindow(*((CTopLevelWindow **)*v4 + 55), 0);
          v3 = v12;
          if ( v12 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x187u, 0LL);
        }
      }
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0pq_EtwEventWriteTransfer(v18, v17, *((_QWORD *)*v4 + 5), 0LL);
      started = CTopLevelWindow3D::StartDelayHideAnimation(this);
      v3 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x17Cu, 0LL);
    }
  }
  else if ( CTopLevelWindow3D::ShouldDelayTransition(this, a2) )
  {
    v19 = CTopLevelWindow3D::StartAnimation((__int64)this, 7);
    v3 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x165u, 0LL);
  }
  else
  {
    if ( !CTopLevelWindow3D::ShouldShowTransition(this) )
    {
LABEL_5:
      if ( !*((_QWORD *)this + 46) )
      {
        v7 = *v4;
        v8 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57);
        if ( !*((_BYTE *)v8 + 288) || !v7 || !CLivePreview::_IsInLivePreview(v8, *v4) )
        {
          v9 = CTopLevelWindow::ShowWindow(*((CTopLevelWindow **)v7 + 55), 1);
          v3 = v9;
          if ( v9 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x174u, 0LL);
        }
      }
      return v3;
    }
    if ( !a3 )
    {
      if ( *((_DWORD *)*v4 + 170) != 93 )
        goto LABEL_5;
      *((_DWORD *)*v4 + 170) = 4095;
    }
    if ( *((_QWORD *)this + 46) )
    {
      v20 = CTopLevelWindow3D::StopAnimation(this);
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x16C,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
          (const char *)(unsigned int)v20,
          v22);
    }
    v14 = CTopLevelWindow3D::StartAnimation((__int64)this, 1);
    v3 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x16Eu, 0LL);
  }
  return v3;
}
