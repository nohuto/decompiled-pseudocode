/*
 * XREFs of ?IsOfType@CSharedSectionBase@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180250540
 * Callers:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180036D70 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z @ 0x1800BF2C0 (-ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSharedSectionBase::IsOfType(__int64 a1, int a2)
{
  return a2 == 158;
}
