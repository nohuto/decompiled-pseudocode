/*
 * XREFs of ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180023F34
 * Callers:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18007230C (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?GetAllStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18009FAE0 (-GetAllStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@W.c)
 *     _lambda_a5b05a19d77442a7b86c350de8e12946_::operator() @ 0x1800B7A24 (_lambda_a5b05a19d77442a7b86c350de8e12946_--operator().c)
 *     _lambda_ad0db6eea65a131797ab646398125e78_::operator() @ 0x1800B7CD4 (_lambda_ad0db6eea65a131797ab646398125e78_--operator().c)
 *     ?ReevaluateStreamGroups@CAudioResourceManager@@IEAAJPEBGU_GUID@@@Z @ 0x1800BF6A0 (-ReevaluateStreamGroups@CAudioResourceManager@@IEAAJPEBGU_GUID@@@Z.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_3640aac1012d9f944c7183fa6cd164a8___ @ 0x1800C6560 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--WeakRef__.c)
 *     ?MoveDisplacedPrimaryProfileStreamGroupsToSaDevice@CBtAudioResourceManagerBase@@IEAAJPEAUISaDeviceProxy@@@Z @ 0x1800D93CC (-MoveDisplacedPrimaryProfileStreamGroupsToSaDevice@CBtAudioResourceManagerBase@@IEAAJPEAUISaDevi.c)
 *     ?ReconnectStreamGroupsToNewSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@AEAV?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@W4ReconnectSaDeviceOptions@1@@Z @ 0x1800D9920 (-ReconnectStreamGroupsToNewSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristi.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800DB3BC (-RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups_Old@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800DC2E0 (-RestoreDisplacedPrimaryProfileStreamGroups_Old@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 *     _lambda_be69e1ba3195fa9d17e767510f2d9f3f_::operator() @ 0x1800F4460 (_lambda_be69e1ba3195fa9d17e767510f2d9f3f_--operator().c)
 *     ?FindStreamGroups@CDeviceGraphObjectsStore@@UEAAJPEBGU_GUID@@AEAV?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F4F50 (-FindStreamGroups@CDeviceGraphObjectsStore@@UEAAJPEBGU_GUID@@AEAV-$vector@VWeakRef@WRL@Microsoft.c)
 *     ?GetConnectedStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F51C0 (-GetConnectedStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupPro.c)
 *     ?GetOffloadStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F54C0 (-GetOffloadStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(a2);
  return v4(v3, &GUID_040fc393_aad6_453d_9a52_2ea63773235d, a2);
}
