/*
 * XREFs of ?CreateNullProcessAttribution@CProcessAttributionManager@@AEAAPEAVCProcessAttribution@@XZ @ 0x1801E6B70
 * Callers:
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x180087DA0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000D968 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
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
  *((_QWORD *)v1 + 2) = qword_180407030;
  *(_OWORD *)(v1 + 24) = xmmword_180407038;
  *((_DWORD *)v1 + 10) = dword_180407048;
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v1 + 8));
  return (struct CProcessAttribution *)v2;
}
