/*
 * XREFs of ??1?$CAtlList@_KV?$CElementTraits@_K@ATL@@@ATL@@QEAA@XZ @ 0x1800E6540
 * Callers:
 *     _CConstraintModelResourceManager::ProcessRevokedResources_::_1_::dtor$0 @ 0x18016631C (_CConstraintModelResourceManager--ProcessRevokedResources_--_1_--dtor$0.c)
 *     _CConstraintModel::Initialize_::_1_::dtor$9 @ 0x1801691CD (_CConstraintModel--Initialize_--_1_--dtor$9.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 ATL::CAtlList<unsigned __int64,ATL::CElementTraits<unsigned __int64>>::~CAtlList<unsigned __int64,ATL::CElementTraits<unsigned __int64>>()
{
  return ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::RemoveAll();
}
