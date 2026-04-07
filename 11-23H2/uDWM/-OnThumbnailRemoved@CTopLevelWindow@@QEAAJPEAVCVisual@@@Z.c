/*
 * XREFs of ?OnThumbnailRemoved@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x18006D9D6
 * Callers:
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x180005598 (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18004E40C (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow::OnThumbnailRemoved(CTopLevelWindow *this, struct CVisual *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax

  v3 = 0;
  v4 = *((_QWORD *)this + 73);
  if ( v4 )
  {
    v5 = VisualCollection::Remove((VisualCollection *)(v4 + 32), a2);
    v3 = v5;
    if ( v5 >= 0 )
    {
      if ( *(_DWORD *)(*((_QWORD *)this + 73) + 72LL) == (*((_QWORD *)this + 65) != 0LL) )
      {
        v6 = CWindowData::NotifyRepresentationChanged(*((CWindowData **)this + 94));
        v3 = v6;
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x763u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x75Cu);
    }
  }
  return v3;
}
