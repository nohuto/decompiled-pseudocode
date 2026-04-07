/*
 * XREFs of ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x180006DF8
 * Callers:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180006D78 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 * Callees:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x18001AA30 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x180098C50 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@details@wil@@QEAA_NXZ @ 0x1800BB690 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@.c)
 *     ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x1800D0234 (-Show@CProjectionBorderVisual@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTopLevelWindow::SetWindowOffscreen(CTopLevelWindow *this, char a2)
{
  CTopLevelWindow *v2; // rdi
  bool v3; // bl
  char v4; // cl
  __int64 v5; // r8
  void *v6; // rdx
  CProjectionBorderVisual *v7; // rcx
  __int64 v8; // rax
  char IsEnabled; // al
  __int64 v10; // rdx

  v2 = this;
  v3 = 1;
  v4 = *((_BYTE *)this + 201);
  if ( (v4 & 1) == a2 )
    return;
  v5 = *((_QWORD *)v2 + 89);
  LOBYTE(this) = a2 | v4 & 0xFE;
  *((_BYTE *)v2 + 201) = (_BYTE)this;
  if ( v5 )
  {
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        v6 = &UdwmSystemAnimation_MoveOffscreen_Start;
LABEL_8:
        McTemplateU0p_EtwEventWriteTransfer(this, v6, *(_QWORD *)(v5 + 40));
      }
    }
    else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v6 = &UdwmSystemAnimation_MoveOffscreen_Stop;
      goto LABEL_8;
    }
  }
  v7 = *(CProjectionBorderVisual **)(*((_QWORD *)v2 + 89) + 464LL);
  if ( v7 )
  {
    v8 = *((_QWORD *)v2 + 28);
    if ( (*(_BYTE *)(v8 + 36) & 4) == 0
      || *(_DWORD *)(v8 + 40)
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(double *)(v8 + 120)) & _xmm) < 0.0000011920929
      || (*((_BYTE *)v2 + 201) & 1) != 0 )
    {
      v3 = 0;
    }
    CProjectionBorderVisual::Show(v7, v3);
  }
  CWindowList::OnPositionChange(
    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
    *((struct CWindowData **)v2 + 89),
    0);
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::GetImpl'::`2'::impl);
  v10 = *((_QWORD *)v2 + 89);
  if ( IsEnabled )
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 59) + 200LL))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59),
      v10);
  else
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 58) + 208LL))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
      v10);
}
