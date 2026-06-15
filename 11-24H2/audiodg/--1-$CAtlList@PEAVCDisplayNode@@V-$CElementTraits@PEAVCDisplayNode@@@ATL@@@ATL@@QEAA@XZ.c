/*
 * XREFs of ??1?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAA@XZ @ 0x140048C98
 * Callers:
 *     _PublishDeviceGraphWnfState_::_1_::dtor$0 @ 0x140093236 (_PublishDeviceGraphWnfState_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::~CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>(
        __int64 *a1)
{
  ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::RemoveAll(a1);
}
