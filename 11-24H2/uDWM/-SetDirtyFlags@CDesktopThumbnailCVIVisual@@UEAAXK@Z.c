/*
 * XREFs of ?SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z @ 0x180067AC0
 * Callers:
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001B030 (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x1800951B0 (-Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z.c)
 * Callees:
 *     ?NotifyOfDirtyDCompThumbnail@CTopLevelWindow@@QEAAXXZ @ 0x180067BE8 (-NotifyOfDirtyDCompThumbnail@CTopLevelWindow@@QEAAXXZ.c)
 */

void __fastcall CDesktopThumbnailCVIVisual::SetDirtyFlags(CDesktopThumbnailCVIVisual *this, int a2)
{
  __int64 v4; // rax
  CTopLevelWindow *v5; // rcx

  if ( *((_BYTE *)this + 297) )
  {
    v4 = *((_QWORD *)this + 34);
    if ( v4 )
    {
      v5 = *(CTopLevelWindow **)(v4 + 440);
      if ( v5 )
        CTopLevelWindow::NotifyOfDirtyDCompThumbnail(v5);
    }
  }
  CVisual::SetDirtyFlags(this, a2);
}
