/*
 * XREFs of ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x180004E14
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x180004E74 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18004232C (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800991E4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ @ 0x1800076C4 (-GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ.c)
 */

__int64 __fastcall CTransitionVisualController::_FindClone(CTransitionVisualController *this, struct CWindowData *a2)
{
  unsigned int v2; // r11d
  unsigned int v3; // r10d
  __int64 v4; // r9
  struct CWindowData *WindowData; // rax
  char v7; // r8
  __int64 v8; // rdx

  v2 = *((_DWORD *)this + 12);
  v3 = 0;
  if ( v2 )
  {
    v4 = *((_QWORD *)this + 3);
    do
    {
      if ( *(_QWORD *)(*(_QWORD *)(v4 + 8) + 24LL) )
      {
        WindowData = CTopLevelWindow::GetWindowData(*(CTopLevelWindow **)v4);
        if ( *((_QWORD *)WindowData + 5) == *(_QWORD *)(v8 + 40) && (!v7 || *(_BYTE *)(v4 + 16)) )
          break;
      }
      ++v3;
      v4 += 24LL;
    }
    while ( v3 < v2 );
  }
  return v3;
}
