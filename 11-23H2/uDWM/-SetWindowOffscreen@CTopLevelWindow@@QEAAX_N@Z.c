/*
 * XREFs of ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x180012130
 * Callers:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x1800123B8 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 * Callees:
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x18000EC8C (McTemplateU0p_EtwEventWriteTransfer.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180045E04 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x1800D57C4 (-Show@CProjectionBorderVisual@@QEAAX_N@Z.c)
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

  v2 = this;
  v3 = 1;
  v4 = *((_BYTE *)this + 249);
  if ( (v4 & 1) == a2 )
    return;
  v5 = *((_QWORD *)v2 + 94);
  LOBYTE(this) = a2 | v4 & 0xFE;
  *((_BYTE *)v2 + 249) = (_BYTE)this;
  if ( v5 )
  {
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_7;
      v6 = &UdwmSystemAnimation_MoveOffscreen_Stop;
      goto LABEL_6;
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v6 = &UdwmSystemAnimation_MoveOffscreen_Start;
LABEL_6:
      McTemplateU0p_EtwEventWriteTransfer((__int64)this, (int)v6, *(_QWORD *)(v5 + 40));
    }
  }
LABEL_7:
  v7 = *(CProjectionBorderVisual **)(*((_QWORD *)v2 + 94) + 464LL);
  if ( v7 )
  {
    v8 = *((_QWORD *)v2 + 34);
    if ( (*(_BYTE *)(v8 + 92) & 4) == 0
      || *(_DWORD *)(v8 + 96)
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(double *)(v8 + 192)) & _xmm) < 0.0000011920929
      || (*((_BYTE *)v2 + 249) & 1) != 0 )
    {
      v3 = 0;
    }
    CProjectionBorderVisual::Show(v7, v3);
  }
  CWindowList::OnPositionChange(
    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
    *((struct CWindowData **)v2 + 94),
    0);
}
