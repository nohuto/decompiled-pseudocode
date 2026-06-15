/*
 * XREFs of ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180051CB8
 * Callers:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800625BC (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?FindStreamGroups@CDeviceGraphObjectsStore@@IEAAJPEBUStreamGroupParams@@AEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18007C710 (-FindStreamGroups@CDeviceGraphObjectsStore@@IEAAJPEBUStreamGroupParams@@AEAV-$vector@V-$ComPtr@U.c)
 *     ?GetAllStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18009C3E0 (-GetAllStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@W.c)
 *     _lambda_27af74114ee4e9d8e8865818d8d3377d_::operator() @ 0x1800B6AA0 (_lambda_27af74114ee4e9d8e8865818d8d3377d_--operator().c)
 *     _lambda_73ada75428367bd29c5c2dda60bd7903_::operator() @ 0x1800B72B0 (_lambda_73ada75428367bd29c5c2dda60bd7903_--operator().c)
 *     ?ReevaluateStreamGroups@CAudioResourceManager@@IEAAJPEBGU_GUID@@@Z @ 0x1800BE720 (-ReevaluateStreamGroups@CAudioResourceManager@@IEAAJPEBGU_GUID@@@Z.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_3640aac1012d9f944c7183fa6cd164a8___ @ 0x1800C5A44 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--WeakRef__.c)
 *     ?MoveDisplacedPrimaryProfileStreamGroupsToSaDevice@CBtAudioResourceManagerBase@@IEAAJPEAUISaDeviceProxy@@@Z @ 0x1800DEFDC (-MoveDisplacedPrimaryProfileStreamGroupsToSaDevice@CBtAudioResourceManagerBase@@IEAAJPEAUISaDevi.c)
 *     ?ReconnectStreamGroupsToNewSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@AEAV?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@W4ReconnectSaDeviceOptions@1@@Z @ 0x1800DF6BC (-ReconnectStreamGroupsToNewSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristi.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800E0B04 (-RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 *     _lambda_be69e1ba3195fa9d17e767510f2d9f3f_::operator() @ 0x1800F980C (_lambda_be69e1ba3195fa9d17e767510f2d9f3f_--operator().c)
 *     ?FindStreamGroups@CDeviceGraphObjectsStore@@UEAAJPEBGU_GUID@@AEAV?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F9FB0 (-FindStreamGroups@CDeviceGraphObjectsStore@@UEAAJPEBGU_GUID@@AEAV-$vector@VWeakRef@WRL@Microsoft.c)
 *     ?GetConnectedStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800FA220 (-GetConnectedStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupPro.c)
 *     ?GetOffloadStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800FA520 (-GetOffloadStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
