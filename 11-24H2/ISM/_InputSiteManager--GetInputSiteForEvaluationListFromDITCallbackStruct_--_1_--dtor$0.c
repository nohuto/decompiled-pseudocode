/*
 * XREFs of _InputSiteManager::GetInputSiteForEvaluationListFromDITCallbackStruct_::_1_::dtor$0 @ 0x1801D02D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180052F28 (--1-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Micros.c)
 */

void __fastcall InputSiteManager::GetInputSiteForEvaluationListFromDITCallbackStruct_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::vector<Microsoft::WRL::ComPtr<InputSite>>::~vector<Microsoft::WRL::ComPtr<InputSite>>(*(_QWORD *)(a2 + 120));
  }
}
