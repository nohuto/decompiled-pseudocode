/*
 * XREFs of ?SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z @ 0x180006310
 * Callers:
 *     ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x18000626C (-Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z.c)
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180047554 (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 */

void __fastcall CDesktopThumbnailCVIVisual::SetDirtyFlags(CDesktopThumbnailCVIVisual *this, int a2)
{
  __int64 v4; // rcx
  CVisual *v5; // rcx
  int v6; // eax

  if ( *((_BYTE *)this + 345) )
  {
    v4 = *((_QWORD *)this + 40);
    if ( v4 )
    {
      v5 = *(CVisual **)(v4 + 440);
      if ( v5 )
      {
        v6 = *((_DWORD *)v5 + 22);
        if ( (v6 & 0x8000000) == 0 )
        {
          *((_DWORD *)v5 + 22) = v6 | 0x8000000;
          CVisual::PropagateDirtyChildren(v5);
        }
      }
    }
  }
  if ( (a2 & *((_DWORD *)this + 22)) != a2 )
  {
    *((_DWORD *)this + 22) |= a2;
    CVisual::PropagateDirtyChildren(this);
  }
}
