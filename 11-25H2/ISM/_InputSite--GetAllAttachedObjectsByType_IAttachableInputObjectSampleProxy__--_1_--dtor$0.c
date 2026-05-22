/*
 * XREFs of _InputSite::GetAllAttachedObjectsByType_IAttachableInputObjectSampleProxy__::_1_::dtor$0 @ 0x1801D1574
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180095B7C (--1-$vector@V-$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr.c)
 */

void __fastcall InputSite::GetAllAttachedObjectsByType_IAttachableInputObjectSampleProxy__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::vector<Microsoft::WRL::ComPtr<IAttachableInputObjectSampleProxy>>::~vector<Microsoft::WRL::ComPtr<IAttachableInputObjectSampleProxy>>(*(_QWORD *)(a2 + 72));
  }
}
