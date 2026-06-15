/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x18006A92C
 * Callers:
 *     _CResourcePriorityTracker::CResourcePriorityTracker_::_1_::dtor$0 @ 0x18016A3A7 (_CResourcePriorityTracker--CResourcePriorityTracker_--_1_--dtor$0.c)
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$2 @ 0x18016C0FC (_AtmosCheck--AtmosCheck_--_1_--dtor$2.c)
 *     _CDeviceGraphObjectsStore::CDeviceGraphObjectsStore_::_1_::dtor$2 @ 0x18016C838 (_CDeviceGraphObjectsStore--CDeviceGraphObjectsStore_--_1_--dtor$2.c)
 *     _CVolumeControlBase::CVolumeControlBase_::_1_::dtor$0 @ 0x18016C888 (_CVolumeControlBase--CVolumeControlBase_--_1_--dtor$0.c)
 *     _CAudioHealthMonitor::CAudioHealthMonitor_::_1_::dtor$0 @ 0x18016D36C (_CAudioHealthMonitor--CAudioHealthMonitor_--_1_--dtor$0.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$0 @ 0x18016F78B (_CMonitorManager--CMonitorManager_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::CExclusiveModeListener_::_1_::dtor$2 @ 0x18016F7B7 (_CExclusiveModeListener--CExclusiveModeListener_--_1_--dtor$2.c)
 *     _CBtAudioResourceManagerBase::CBtAudioResourceManagerBase_::_1_::dtor$6 @ 0x18016FABF (_CBtAudioResourceManagerBase--CBtAudioResourceManagerBase_--_1_--dtor$6.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$4 @ 0x18016FAEE (_CMonitorManager--CMonitorManager_--_1_--dtor$4.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$2 @ 0x180170C6C (_CMonitorManager--CMonitorManager_--_1_--dtor$2.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$1 @ 0x18017112F (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$1.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$2 @ 0x180171145 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
