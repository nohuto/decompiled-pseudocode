/*
 * XREFs of ?ProcessSetOpacity@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPACITY@@@Z @ 0x18020F108
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x18000D6B0 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetOpacity(
        struct CSparseStorage::AllocatedStorage **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETOPACITY *a3)
{
  CVisual::SetOpacity(this, COERCE_DOUBLE((unsigned __int64)*((_DWORD *)a3 + 2)));
  return 0LL;
}
