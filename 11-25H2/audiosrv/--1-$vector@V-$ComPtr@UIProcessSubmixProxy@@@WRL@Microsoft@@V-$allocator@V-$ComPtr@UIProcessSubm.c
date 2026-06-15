/*
 * XREFs of ??1?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180022E6C
 * Callers:
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$2 @ 0x180160E28 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$2.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups_Old_::_1_::dtor$8 @ 0x180160E5E (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroups_Old_--_1_--dtor$8.c)
 *     __lambda_fad069bbea6c73c856a21cdaadf497a4_::operator()_::_1_::dtor$2 @ 0x1801628B7 (__lambda_fad069bbea6c73c856a21cdaadf497a4_--operator()_--_1_--dtor$2.c)
 *     __lambda_fad069bbea6c73c856a21cdaadf497a4_::operator()_::_1_::dtor$0 @ 0x1801628C9 (__lambda_fad069bbea6c73c856a21cdaadf497a4_--operator()_--_1_--dtor$0.c)
 *     _CAudioSessionManager::Disconnect_::_1_::dtor$0 @ 0x1801628DB (_CAudioSessionManager--Disconnect_--_1_--dtor$0.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$7 @ 0x1801634A7 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$7.c)
 *     _GetConnectorTypeForStream_::_1_::dtor$1 @ 0x180163669 (_GetConnectorTypeForStream_--_1_--dtor$1.c)
 *     _CDeviceGraphObjectsStore::FindPreferredStreamGroup_::_1_::dtor$1 @ 0x1801640D6 (_CDeviceGraphObjectsStore--FindPreferredStreamGroup_--_1_--dtor$1.c)
 *     _CAudioResourceManager::CreateStream_::_1_::dtor$24 @ 0x180164412 (_CAudioResourceManager--CreateStream_--_1_--dtor$24.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$0 @ 0x1801646AA (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$0.c)
 *     _UseSupportedConnectorMode_::_1_::dtor$2 @ 0x1801650BC (_UseSupportedConnectorMode_--_1_--dtor$2.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups_::_1_::dtor$8 @ 0x1801654CA (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroups_--_1_--dtor$8.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups_::_1_::dtor$9 @ 0x1801654DC (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroups_--_1_--dtor$9.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups_Old_::_1_::dtor$7 @ 0x180165548 (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroups_Old_--_1_--dtor$7.c)
 *     __lambda_fad069bbea6c73c856a21cdaadf497a4_::operator()_::_1_::dtor$1 @ 0x180166813 (__lambda_fad069bbea6c73c856a21cdaadf497a4_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x18002368C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 result; // rax

  v5 = *a1;
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v5, a1[1], a3, a4);
    result = std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
