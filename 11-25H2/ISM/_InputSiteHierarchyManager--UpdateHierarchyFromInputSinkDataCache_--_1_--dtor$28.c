/*
 * XREFs of _InputSiteHierarchyManager::UpdateHierarchyFromInputSinkDataCache_::_1_::dtor$28 @ 0x1801C9080
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180076A64 (--1-$vector@V-$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@.c)
 */

void __fastcall InputSiteHierarchyManager::UpdateHierarchyFromInputSinkDataCache_::_1_::dtor_28(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 80) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 80) &= ~4u;
    std::vector<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate>>::~vector<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate>>(a2 + 104);
  }
}
