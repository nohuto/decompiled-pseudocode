/*
 * XREFs of ?LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ @ 0x180074118
 * Callers:
 *     ?UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ @ 0x180029540 (-UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180023A5C (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18002D8B0 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 */

__int64 __fastcall CTopLevelWindow::LivePreviewAnimation_Flipped(CTopLevelWindow *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v4; // rax
  int v6; // eax
  int v7; // eax

  v1 = *((_DWORD *)this + 52);
  v2 = 0;
  if ( v1 == 1 )
  {
    v6 = CTopLevelWindow::ShowWindow(this, 0);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x11BEu, 0LL);
      return v2;
    }
    goto LABEL_7;
  }
  if ( v1 == 2 )
  {
    v4 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57);
    if ( v4 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v4 + 392) + 72LL) )
      {
        v7 = CTopLevelWindow::ShowWindow(this, 1);
        v2 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x11C6u, 0LL);
          return v2;
        }
LABEL_7:
        CTopLevelWindow::StopLivePreviewAnimation(this);
      }
    }
  }
  return v2;
}
