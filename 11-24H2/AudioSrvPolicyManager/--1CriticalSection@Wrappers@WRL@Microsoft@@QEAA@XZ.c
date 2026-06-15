/*
 * XREFs of ??1CriticalSection@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18001FBD0
 * Callers:
 *     _CDuckingManager::CDuckingManager_::_1_::dtor$1 @ 0x18004A4C1 (_CDuckingManager--CDuckingManager_--_1_--dtor$1.c)
 *     _CDuckingManager::CDuckingManager_::_1_::dtor$4 @ 0x18004A503 (_CDuckingManager--CDuckingManager_--_1_--dtor$4.c)
 *     _ApplicationSpecificEndpointInfo::ApplicationSpecificEndpointInfo_::_1_::dtor$1 @ 0x18004AB4A (_ApplicationSpecificEndpointInfo--ApplicationSpecificEndpointInfo_--_1_--dtor$1.c)
 *     _CEndpointVolumeStateManager::CEndpointVolumeStateManager_::_1_::dtor$1 @ 0x18004ABE9 (_CEndpointVolumeStateManager--CEndpointVolumeStateManager_--_1_--dtor$1.c)
 *     _CApplication::CApplication_::_1_::dtor$2 @ 0x18004AF29 (_CApplication--CApplication_--_1_--dtor$2.c)
 *     _CApplication::CApplication_::_1_::dtor$5 @ 0x18004AF6B (_CApplication--CApplication_--_1_--dtor$5.c)
 *     _CApplication::CApplication_::_1_::dtor$6 @ 0x18004AF84 (_CApplication--CApplication_--_1_--dtor$6.c)
 *     _CApplication::CApplication_::_1_::dtor$7 @ 0x18004AF9D (_CApplication--CApplication_--_1_--dtor$7.c)
 *     _CApplication::CApplication_::_1_::dtor$8 @ 0x18004AFB6 (_CApplication--CApplication_--_1_--dtor$8.c)
 *     _CApplication::CApplication_::_1_::dtor$9 @ 0x18004AFCF (_CApplication--CApplication_--_1_--dtor$9.c)
 *     _CApplication::CApplication_::_1_::dtor$10 @ 0x18004AFE8 (_CApplication--CApplication_--_1_--dtor$10.c)
 *     _CApplication::CApplication_::_1_::dtor$11 @ 0x18004B001 (_CApplication--CApplication_--_1_--dtor$11.c)
 *     _CProcess::CProcess_::_1_::dtor$1 @ 0x18004B045 (_CProcess--CProcess_--_1_--dtor$1.c)
 *     _CStreamClassPolicyGains::CStreamClassPolicyGains_::_1_::dtor$0 @ 0x18004B19C (_CStreamClassPolicyGains--CStreamClassPolicyGains_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
