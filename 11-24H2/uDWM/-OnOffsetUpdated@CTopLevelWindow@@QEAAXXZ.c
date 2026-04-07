/*
 * XREFs of ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001B030
 * Callers:
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180005D7C (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x18001AA30 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180027EF8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z @ 0x180067AC0 (-SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1838 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@details@wil@@QEAA_NXZ @ 0x1800BB690 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTopLevelWindow::OnOffsetUpdated(CTopLevelWindow *this)
{
  __int64 v1; // r9
  char v3; // r10
  LONG v4; // edx
  LONG v5; // r8d
  __int64 v6; // rcx
  LONG v7; // eax
  __int64 v8; // rax
  LONG v9; // edx
  CDesktopThumbnailCVIVisual *v10; // rcx
  char IsEnabled; // al
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v17; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 89);
  v3 = *(_BYTE *)(v1 + 742);
  v4 = *(_DWORD *)(v1 + 48);
  v5 = *(_DWORD *)(v1 + 52);
  v17.x = v4;
  v17.y = v5;
  if ( (v3 & 1) != 0 )
  {
    v6 = *(_QWORD *)(v1 + 448);
    v4 += *(_DWORD *)(v6 + 600);
    v7 = v5 + HIDWORD(*(_QWORD *)(v6 + 600));
    v17.x = v4;
    v5 = v7;
    v17.y = v7;
  }
  if ( (*((_BYTE *)this + 201) & 1) != 0 )
  {
    v17.x = -32000;
    v17.y = -32000;
  }
  else if ( (v3 & 0x10) != 0 )
  {
    v8 = *(_QWORD *)(v1 + 600);
    v9 = v4 - *(_DWORD *)(v8 + 48);
    v17.y = v5 - *(_DWORD *)(v8 + 52);
    v17.x = v9;
  }
  CVisual::SetOffset(this, &v17);
  v10 = *(CDesktopThumbnailCVIVisual **)(*((_QWORD *)this + 89) + 640LL);
  if ( v10 )
    CDesktopThumbnailCVIVisual::SetDirtyFlags(v10, 0x1000u);
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::GetImpl'::`2'::impl);
  v12 = *((_QWORD *)this + 89);
  if ( IsEnabled )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 59)
                                                     + 176LL))(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59),
            v12);
    if ( v13 < 0 )
    {
      v14 = 1629LL;
LABEL_14:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v14,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v13,
        v15);
    }
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 58)
                                                     + 184LL))(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
            v12);
    if ( v13 < 0 )
    {
      v14 = 1633LL;
      goto LABEL_14;
    }
  }
  CTopLevelWindow::NotifyMouseLeave(this);
}
