/*
 * XREFs of ??1?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18004CA84
 * Callers:
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$2 @ 0x18016A972 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$2.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$6 @ 0x18016A9A8 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$6.c)
 *     __lambda_0d142282e693a5da8305741b2fcbdc74_::operator()_::_1_::dtor$2 @ 0x18016BD78 (__lambda_0d142282e693a5da8305741b2fcbdc74_--operator()_--_1_--dtor$2.c)
 *     __lambda_0d142282e693a5da8305741b2fcbdc74_::operator()_::_1_::dtor$0 @ 0x18016BD8A (__lambda_0d142282e693a5da8305741b2fcbdc74_--operator()_--_1_--dtor$0.c)
 *     _CAudioSessionManager::Disconnect_::_1_::dtor$0 @ 0x18016BD9C (_CAudioSessionManager--Disconnect_--_1_--dtor$0.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$7 @ 0x18016C79B (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$7.c)
 *     _GetConnectorTypeForStream_::_1_::dtor$1 @ 0x18016C9BC (_GetConnectorTypeForStream_--_1_--dtor$1.c)
 *     _CDeviceGraphObjectsStore::FindPreferredStreamGroup_::_1_::dtor$1 @ 0x18016D4D2 (_CDeviceGraphObjectsStore--FindPreferredStreamGroup_--_1_--dtor$1.c)
 *     _CAudioResourceManager::CreateStream_::_1_::dtor$25 @ 0x18016D832 (_CAudioResourceManager--CreateStream_--_1_--dtor$25.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$0 @ 0x18016DBB4 (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$0.c)
 *     _UseSupportedConnectorMode_::_1_::dtor$2 @ 0x18016E7D0 (_UseSupportedConnectorMode_--_1_--dtor$2.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups_::_1_::dtor$8 @ 0x18016EBAE (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroups_--_1_--dtor$8.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups_::_1_::dtor$9 @ 0x18016EBC0 (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroups_--_1_--dtor$9.c)
 *     __lambda_0d142282e693a5da8305741b2fcbdc74_::operator()_::_1_::dtor$1 @ 0x18016FEC4 (__lambda_0d142282e693a5da8305741b2fcbdc74_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180016BF4 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>(
        __int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>((__int64)v2, *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(
      *(char **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
