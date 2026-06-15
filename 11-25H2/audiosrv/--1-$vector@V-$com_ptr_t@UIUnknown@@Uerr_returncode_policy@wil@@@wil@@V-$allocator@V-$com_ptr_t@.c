/*
 * XREFs of ??1?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1800A7320
 * Callers:
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$3 @ 0x1801624B9 (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$3.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$10 @ 0x1801641D2 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$10.c)
 *     _CAudioResourceManager::CreateStream_::_1_::dtor$0 @ 0x1801642AA (_CAudioResourceManager--CreateStream_--_1_--dtor$0.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$6 @ 0x1801646E0 (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$6.c)
 *     _CBtAudioResourceManagerBase::CreateSaDeviceOnMicrophoneEndpoint_::_1_::dtor$4 @ 0x180164FAB (_CBtAudioResourceManagerBase--CreateSaDeviceOnMicrophoneEndpoint_--_1_--dtor$4.c)
 *     _CBtAudioResourceManagerBase::FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups_::_1_::dtor$8 @ 0x180165104 (_CBtAudioResourceManagerBase--FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStre_ea_180165104.c)
 *     _CBtAudioResourceManagerBase::GetSaDeviceForSharedStream_::_1_::dtor$1 @ 0x1801651EE (_CBtAudioResourceManagerBase--GetSaDeviceForSharedStream_--_1_--dtor$1.c)
 *     _CBtAudioResourceManagerBase::GetSaDeviceForOffloadStream_::_1_::dtor$1 @ 0x18016523F (_CBtAudioResourceManagerBase--GetSaDeviceForOffloadStream_--_1_--dtor$1.c)
 *     _CBtAudioResourceManagerBase::ReleaseSaDevices_::_1_::dtor$8 @ 0x18016545E (_CBtAudioResourceManagerBase--ReleaseSaDevices_--_1_--dtor$8.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups_::_1_::dtor$11 @ 0x180165500 (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroups_--_1_--dtor$11.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups_Old_::_1_::dtor$10 @ 0x18016555A (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroups_Old_--_1_--dtor$10.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>>(
        __int64 a1)
{
  std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>(a1);
}
