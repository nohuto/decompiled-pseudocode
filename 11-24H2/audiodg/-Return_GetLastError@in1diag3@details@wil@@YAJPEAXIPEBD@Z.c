/*
 * XREFs of ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14005738C
 * Callers:
 *     ?ShutdownWorkQueue@CAPOProcessingHostObject@@AEAAJXZ @ 0x14001A11C (-ShutdownWorkQueue@CAPOProcessingHostObject@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x14001B8B8 (-RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 *     _lambda_d1a8b950306abda3aed68804ea97f7ae_::operator() @ 0x14001D40C (_lambda_d1a8b950306abda3aed68804ea97f7ae_--operator().c)
 *     ?EventHandlerBufferComplete@CAudioPump@@AEAAXPEA_K@Z @ 0x140021220 (-EventHandlerBufferComplete@CAudioPump@@AEAAXPEA_K@Z.c)
 *     ?Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z @ 0x1400217F0 (-Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z.c)
 *     ?SerializeForRPC@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z @ 0x140021DF0 (-SerializeForRPC@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z.c)
 *     ?Allocate@CCrossProcessMemoryManager@@UEAAJIPEAPEAUICrossProcessMemory@@@Z @ 0x140021F00 (-Allocate@CCrossProcessMemoryManager@@UEAAJIPEAPEAUICrossProcessMemory@@@Z.c)
 *     ?Initialize@CAudioPump@@UEAAJIKPEAUIAudioProcessRT@@PEAUIAudioEndpointRT@@PEAUICrossProcessEventManager@@@Z @ 0x1400278E0 (-Initialize@CAudioPump@@UEAAJIKPEAUIAudioProcessRT@@PEAUIAudioEndpointRT@@PEAUICrossProcessEvent.c)
 *     ?SetTimer@CAudioPump@@AEAAJPEAX_J_N@Z @ 0x14002BEE0 (-SetTimer@CAudioPump@@AEAAJPEAX_J_N@Z.c)
 *     ?GetMemory@CCrossProcessServerMemory@@UEAAJPEAIPEAPEAX@Z @ 0x1400430B0 (-GetMemory@CCrossProcessServerMemory@@UEAAJPEAIPEAPEAX@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x140045F14 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?InitializeEvents@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x14004BFBC (-InitializeEvents@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x140057148 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?SerializeForRpc@CStandardEvent@@UEAAJPEAUCP_EVENT_METADATA_BLOB@@@Z @ 0x140064E90 (-SerializeForRpc@CStandardEvent@@UEAAJPEAUCP_EVENT_METADATA_BLOB@@@Z.c)
 *     ?DisengageClientDrivenMode@CAudioPump@@UEAAJXZ @ 0x1400667D0 (-DisengageClientDrivenMode@CAudioPump@@UEAAJXZ.c)
 *     ?RuntimeClassInitialize@?$CCPAudioHistoryControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@QEAAJPEAUICrossProcessMemory@@@Z @ 0x14007FFA4 (-RuntimeClassInitialize@-$CCPAudioHistoryControl@UStaticControlData_V1@@UVolatileControlData_V0@.c)
 * Callees:
 *     ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x140046468 (--$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  int v5; // [rsp+20h] [rbp-18h]
  const char *retaddr; // [rsp+38h] [rbp+0h]

  return wil::details::ReportFailure_GetLastErrorHr<1>(this, a2, a3, a4, v5, retaddr);
}
