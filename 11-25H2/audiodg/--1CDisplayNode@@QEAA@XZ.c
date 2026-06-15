/*
 * XREFs of ??1CDisplayNode@@QEAA@XZ @ 0x140069D3C
 * Callers:
 *     ??_GCDisplayNode@@QEAAPEAXI@Z @ 0x140069DE8 (--_GCDisplayNode@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAXXZ @ 0x140029B40 (-RemoveAll@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAXXZ.c)
 */

void __fastcall CDisplayNode::~CDisplayNode(CDisplayNode *this)
{
  ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::RemoveAll((__int64 *)this + 7);
  ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::RemoveAll((__int64 *)this + 1);
}
