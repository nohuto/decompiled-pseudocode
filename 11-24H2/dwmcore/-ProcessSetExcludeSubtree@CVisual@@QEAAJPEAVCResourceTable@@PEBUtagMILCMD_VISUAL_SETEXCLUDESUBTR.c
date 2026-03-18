/*
 * XREFs of ?ProcessSetExcludeSubtree@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEXCLUDESUBTREE@@@Z @ 0x180211664
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetExcludeSubtree(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETEXCLUDESUBTREE *a3)
{
  char v3; // r8
  char v4; // dl

  v3 = *((_BYTE *)a3 + 8) != 0;
  v4 = *((_BYTE *)this + 106) & 1;
  *((_BYTE *)this + 106) = v3 | *((_BYTE *)this + 106) & 0xFE;
  if ( v4 != v3 )
    CVisual::PropagateFlags((__int64)this, 4u);
  return 0LL;
}
