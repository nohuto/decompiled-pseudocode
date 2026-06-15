/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x18007C7DC
 * Callers:
 *     _CResourcePriorityTracker::CResourcePriorityTracker_::_1_::dtor$0 @ 0x18015FBE9 (_CResourcePriorityTracker--CResourcePriorityTracker_--_1_--dtor$0.c)
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$2 @ 0x180162E65 (_AtmosCheck--AtmosCheck_--_1_--dtor$2.c)
 *     _CDeviceGraphObjectsStore::CDeviceGraphObjectsStore_::_1_::dtor$2 @ 0x180163544 (_CDeviceGraphObjectsStore--CDeviceGraphObjectsStore_--_1_--dtor$2.c)
 *     _CAudioSessionManager::CAudioSessionManager_::_1_::dtor$0 @ 0x1801637F8 (_CAudioSessionManager--CAudioSessionManager_--_1_--dtor$0.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$0 @ 0x180166101 (_CMonitorManager--CMonitorManager_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::CExclusiveModeListener_::_1_::dtor$2 @ 0x18016612D (_CExclusiveModeListener--CExclusiveModeListener_--_1_--dtor$2.c)
 *     _CBtAudioResourceManagerBase::CBtAudioResourceManagerBase_::_1_::dtor$6 @ 0x18016646F (_CBtAudioResourceManagerBase--CBtAudioResourceManagerBase_--_1_--dtor$6.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$4 @ 0x18016649E (_CMonitorManager--CMonitorManager_--_1_--dtor$4.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$2 @ 0x1801676CA (_CMonitorManager--CMonitorManager_--_1_--dtor$2.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$1 @ 0x180167BD5 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$1.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$2 @ 0x180167BEB (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
