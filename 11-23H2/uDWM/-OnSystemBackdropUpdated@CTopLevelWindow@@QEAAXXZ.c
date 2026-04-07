/*
 * XREFs of ?OnSystemBackdropUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180009638
 * Callers:
 *     ?SetSystemBackdropType@CWindowList@@UEAAJPEAUIDwmWindow@@W4SYSTEMBACKDROP_TYPE@@@Z @ 0x180009590 (-SetSystemBackdropType@CWindowList@@UEAAJPEAUIDwmWindow@@W4SYSTEMBACKDROP_TYPE@@@Z.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18001DCB4 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 */

void __fastcall CTopLevelWindow::OnSystemBackdropUpdated(CTopLevelWindow *this)
{
  int v1; // eax
  int v3; // eax
  struct CVisual *v4; // rdx

  v1 = *((_DWORD *)this + 22);
  if ( (v1 & 0x4000) == 0 )
  {
    *((_DWORD *)this + 22) = v1 | 0x4000;
    CVisual::PropagateDirtyChildren(this);
  }
  v3 = *((_DWORD *)this + 22);
  if ( (v3 & 0x100000) == 0 )
  {
    *((_DWORD *)this + 22) = v3 | 0x100000;
    CVisual::PropagateDirtyChildren(this);
  }
  v4 = (struct CVisual *)*((_QWORD *)this + 40);
  if ( v4 )
  {
    VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 36) + 32LL), v4);
    Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease((char *)this + 320);
  }
}
