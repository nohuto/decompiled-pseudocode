/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x14004B0CC
 * Callers:
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$0 @ 0x140093951 (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$0.c)
 *     _CAPOProcessingHost::CAPOProcessingHost_::_1_::dtor$4 @ 0x14009397D (_CAPOProcessingHost--CAPOProcessingHost_--_1_--dtor$4.c)
 *     _CAPOProcessingHost::CAPOProcessingHost_::_1_::dtor$6 @ 0x1400939AF (_CAPOProcessingHost--CAPOProcessingHost_--_1_--dtor$6.c)
 *     _CAPOProcessingHost::CAPOProcessingHost_::_1_::dtor$9 @ 0x1400939FA (_CAPOProcessingHost--CAPOProcessingHost_--_1_--dtor$9.c)
 *     _CAPOProcessingHost::CAPOProcessingHost_::_1_::dtor$11 @ 0x140093A2C (_CAPOProcessingHost--CAPOProcessingHost_--_1_--dtor$11.c)
 *     _CAudioProcessor::CAudioProcessor_::_1_::dtor$1 @ 0x140093EBC (_CAudioProcessor--CAudioProcessor_--_1_--dtor$1.c)
 *     _CCrossProcessBaseEndpoint_StaticControlData_V1_VolatileControlData_V0_ControlData_V1_::CCrossProcessBaseEndpoint_StaticControlData_V1_VolatileControlData_V0_ControlData_V1__::_1_::dtor$0 @ 0x1400944E3 (_CCrossProcessBaseEndpoint_StaticControlData_V1_VolatileControlData_V0_ControlData_V1_--CCrossPr.c)
 *     _CRTThreadManager::CRTThreadManager_::_1_::dtor$2 @ 0x140094BF3 (_CRTThreadManager--CRTThreadManager_--_1_--dtor$2.c)
 *     _CAudioPump::CAudioPump_::_1_::dtor$3 @ 0x14009540A (_CAudioPump--CAudioPump_--_1_--dtor$3.c)
 *     _CAudioPump::CAudioPump_::_1_::dtor$4 @ 0x140095423 (_CAudioPump--CAudioPump_--_1_--dtor$4.c)
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$3 @ 0x140096C9F (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
