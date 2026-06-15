/*
 * XREFs of ??1CriticalSection@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18001FB20
 * Callers:
 *     _CDuckingManager::CDuckingManager_::_1_::dtor$1 @ 0x18004CD41 (_CDuckingManager--CDuckingManager_--_1_--dtor$1.c)
 *     _CDuckingManager::CDuckingManager_::_1_::dtor$4 @ 0x18004CD83 (_CDuckingManager--CDuckingManager_--_1_--dtor$4.c)
 *     _ApplicationSpecificEndpointInfo::ApplicationSpecificEndpointInfo_::_1_::dtor$1 @ 0x18004D3CA (_ApplicationSpecificEndpointInfo--ApplicationSpecificEndpointInfo_--_1_--dtor$1.c)
 *     _CEndpointVolumeStateManager::CEndpointVolumeStateManager_::_1_::dtor$1 @ 0x18004D469 (_CEndpointVolumeStateManager--CEndpointVolumeStateManager_--_1_--dtor$1.c)
 *     _CApplication::CApplication_::_1_::dtor$2 @ 0x18004D797 (_CApplication--CApplication_--_1_--dtor$2.c)
 *     _CApplication::CApplication_::_1_::dtor$5 @ 0x18004D7D9 (_CApplication--CApplication_--_1_--dtor$5.c)
 *     _CApplication::CApplication_::_1_::dtor$6 @ 0x18004D7F2 (_CApplication--CApplication_--_1_--dtor$6.c)
 *     _CApplication::CApplication_::_1_::dtor$7 @ 0x18004D80B (_CApplication--CApplication_--_1_--dtor$7.c)
 *     _CApplication::CApplication_::_1_::dtor$8 @ 0x18004D824 (_CApplication--CApplication_--_1_--dtor$8.c)
 *     _CApplication::CApplication_::_1_::dtor$9 @ 0x18004D83D (_CApplication--CApplication_--_1_--dtor$9.c)
 *     _CApplication::CApplication_::_1_::dtor$10 @ 0x18004D856 (_CApplication--CApplication_--_1_--dtor$10.c)
 *     _CApplication::CApplication_::_1_::dtor$11 @ 0x18004D86F (_CApplication--CApplication_--_1_--dtor$11.c)
 *     _CProcess::CProcess_::_1_::dtor$1 @ 0x18004D8B3 (_CProcess--CProcess_--_1_--dtor$1.c)
 *     _CStreamClassPolicyGains::CStreamClassPolicyGains_::_1_::dtor$0 @ 0x18004DA0A (_CStreamClassPolicyGains--CStreamClassPolicyGains_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
