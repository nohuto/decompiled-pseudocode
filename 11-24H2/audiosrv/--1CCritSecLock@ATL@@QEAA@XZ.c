/*
 * XREFs of ??1CCritSecLock@ATL@@QEAA@XZ @ 0x180008BA8
 * Callers:
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x180008BD8 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ @ 0x18000A9BC (-ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x18006950C (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z @ 0x1800697D0 (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z.c)
 *     ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x18007AC9C (-DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleI.c)
 *     ?ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x18007B2E0 (-ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z.c)
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x1800EB570 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescri.c)
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800EBC28 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU.c)
 *     ?DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800EC56C (-DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo.c)
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z @ 0x1800ED3A8 (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z.c)
 *     ?MarkWorkItemReleased@CConstraintModelResourceManager@@AEAAXAEAUResourceHandleInfo@@@Z @ 0x1800EE408 (-MarkWorkItemReleased@CConstraintModelResourceManager@@AEAAXAEAUResourceHandleInfo@@@Z.c)
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800EE628 (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?ReleaseAllResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800EEE50 (-ReleaseAllResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@@Z @ 0x1800EF23C (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@@Z.c)
 *     ?RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z @ 0x1800EF364 (-RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z.c)
 *     ?Shutdown@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800EF770 (-Shutdown@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x180117B04 (-CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ.c)
 *     ?Continue@CMonitorManager@@QEAAXXZ @ 0x180117C50 (-Continue@CMonitorManager@@QEAAXXZ.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1801181F0 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x18011892C (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18011952C (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?InitializeMonitorRestartTimer@CMonitorManager@@AEAAJK_KPEBK@Z @ 0x18011A184 (-InitializeMonitorRestartTimer@CMonitorManager@@AEAAJK_KPEBK@Z.c)
 *     ?OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ @ 0x18011A978 (-OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ.c)
 *     ?Pause@CMonitorManager@@QEAAXXZ @ 0x18011AF00 (-Pause@CMonitorManager@@QEAAXXZ.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x18011B424 (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 *     ?ScheduleMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x18011B5B0 (-ScheduleMonitorRestartTimer@CMonitorManager@@AEAAXXZ.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x18011B8D0 (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 *     ?StopIfRunning@CMonitor@@QEAAXXZ @ 0x18011BA64 (-StopIfRunning@CMonitor@@QEAAXXZ.c)
 *     ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x18011BAF4 (-UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z @ 0x18011CA10 (-HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z.c)
 *     ?OnDeviceDescriptionChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x18011CE74 (-OnDeviceDescriptionChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?OnDeviceIconChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x18011CFD4 (-OnDeviceIconChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x18011D224 (-OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x18011D984 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x18011DCE0 (-Stop@CMonitor@@QEAAXXZ.c)
 *     ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x18014E8AC (-GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z.c)
 *     _CMonitorManager::DoHandleDefaultDeviceChanged_::_1_::dtor$0 @ 0x180167FC0 (_CMonitorManager--DoHandleDefaultDeviceChanged_--_1_--dtor$0.c)
 *     _CMonitorManager::DoHandleDefaultDeviceChanged_::_1_::dtor$1 @ 0x180167FD2 (_CMonitorManager--DoHandleDefaultDeviceChanged_--_1_--dtor$1.c)
 *     _CMonitor::Terminate_::_1_::dtor$0 @ 0x180168186 (_CMonitor--Terminate_--_1_--dtor$0.c)
 *     _CMonitor::OnPauseOnBatteryChanged_::_1_::dtor$1 @ 0x180168198 (_CMonitor--OnPauseOnBatteryChanged_--_1_--dtor$1.c)
 *     _CMonitorManager::QueueDeviceStateChanged_::_1_::dtor$2 @ 0x1801682F2 (_CMonitorManager--QueueDeviceStateChanged_--_1_--dtor$2.c)
 *     _CConstraintModelResourceManager::AddWorkItemToQueue_::_1_::dtor$0 @ 0x18016BA93 (_CConstraintModelResourceManager--AddWorkItemToQueue_--_1_--dtor$0.c)
 *     _CMonitor::Initialize_::_1_::dtor$1 @ 0x18016C076 (_CMonitor--Initialize_--_1_--dtor$1.c)
 *     _CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate_::_1_::dtor$2 @ 0x18016F8BC (_CMonitorManager--DoCreateMonitorForCaptureDeviceIfAppropriate_--_1_--dtor$2.c)
 *     _CConstraintModelResourceManager::ProcessRevokedResources_::_1_::dtor$1 @ 0x18016F916 (_CConstraintModelResourceManager--ProcessRevokedResources_--_1_--dtor$1.c)
 *     _CConstraintModelResourceManager::DoReacquireSaDeviceResource_::_1_::dtor$4 @ 0x18016F93A (_CConstraintModelResourceManager--DoReacquireSaDeviceResource_--_1_--dtor$4.c)
 *     _CConstraintModelResourceManager::DoReacquireSaDeviceResource_::_1_::dtor$8 @ 0x18016F94C (_CConstraintModelResourceManager--DoReacquireSaDeviceResource_--_1_--dtor$8.c)
 *     _CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate_::_1_::dtor$5 @ 0x180170DD8 (_CMonitorManager--DoCreateMonitorForCaptureDeviceIfAppropriate_--_1_--dtor$5.c)
 *     _CMonitorManager::Initialize_::_1_::dtor$3 @ 0x180170F14 (_CMonitorManager--Initialize_--_1_--dtor$3.c)
 *     _CMonitor::Start_::_1_::dtor$0 @ 0x18017106A (_CMonitor--Start_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CCritSecLock::~CCritSecLock(LPCRITICAL_SECTION *this)
{
  if ( *((_BYTE *)this + 8) )
  {
    LeaveCriticalSection(*this);
    *((_BYTE *)this + 8) = 0;
  }
}
