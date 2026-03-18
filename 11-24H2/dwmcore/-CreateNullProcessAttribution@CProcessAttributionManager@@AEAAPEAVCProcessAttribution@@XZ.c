/*
 * XREFs of ?CreateNullProcessAttribution@CProcessAttributionManager@@AEAAPEAVCProcessAttribution@@XZ @ 0x1801DB6F4
 * Callers:
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800CF2C0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

struct CProcessAttribution *__fastcall CProcessAttributionManager::CreateNullProcessAttribution(
        CProcessAttributionManager *this)
{
  char *v1; // rax
  char *v2; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (char *)DefaultHeap::AllocClear(0x88uLL);
  v2 = v1;
  if ( !v1 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 32) = -1;
  *(_QWORD *)v1 = &CProcessAttribution::`vftable';
  *((_QWORD *)v1 + 2) = qword_1803FAF50;
  *(_OWORD *)(v1 + 24) = xmmword_1803FAF58;
  *((_DWORD *)v1 + 10) = dword_1803FAF68;
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v1 + 8));
  return (struct CProcessAttribution *)v2;
}
