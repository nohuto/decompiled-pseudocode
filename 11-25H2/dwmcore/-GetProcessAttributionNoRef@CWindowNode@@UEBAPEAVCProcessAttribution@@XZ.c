/*
 * XREFs of ?GetProcessAttributionNoRef@CWindowNode@@UEBAPEAVCProcessAttribution@@XZ @ 0x1800E5570
 * Callers:
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800E3DC0 (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800E433C (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z @ 0x1800E4780 (-ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18010A1B4 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x1801D983C (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 * Callees:
 *     <none>
 */

struct CProcessAttribution *__fastcall CWindowNode::GetProcessAttributionNoRef(CWindowNode *this)
{
  return (struct CProcessAttribution *)*((_QWORD *)this + 102);
}
