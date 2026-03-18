/*
 * XREFs of ?GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ @ 0x1800BE8A0
 * Callers:
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18003A664 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800BD9C0 (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800BDF3C (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z @ 0x1800BE380 (-ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z.c)
 *     ?SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x1801A43A8 (-SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x1801CB59C (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 * Callees:
 *     <none>
 */

struct CProcessAttribution *__fastcall CResource::GetProcessAttributionNoRef(CResource *this)
{
  struct CProcessAttribution *result; // rax

  result = (struct CProcessAttribution *)*((_QWORD *)this + 7);
  if ( result )
    return (struct CProcessAttribution *)*((_QWORD *)result + 8);
  return result;
}
