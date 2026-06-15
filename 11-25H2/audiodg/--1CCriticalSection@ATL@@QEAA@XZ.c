/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x14004B56C
 * Callers:
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$0 @ 0x140093EDF (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$0.c)
 *     _CAPOProcessingHost::CAPOProcessingHost_::_1_::dtor$4 @ 0x140093F0B (_CAPOProcessingHost--CAPOProcessingHost_--_1_--dtor$4.c)
 *     _CAPOProcessingHost::CAPOProcessingHost_::_1_::dtor$6 @ 0x140093F3D (_CAPOProcessingHost--CAPOProcessingHost_--_1_--dtor$6.c)
 *     _CAPOProcessingHost::CAPOProcessingHost_::_1_::dtor$9 @ 0x140093F88 (_CAPOProcessingHost--CAPOProcessingHost_--_1_--dtor$9.c)
 *     _CAPOProcessingHost::CAPOProcessingHost_::_1_::dtor$11 @ 0x140093FBA (_CAPOProcessingHost--CAPOProcessingHost_--_1_--dtor$11.c)
 *     _CAudioProcessor::CAudioProcessor_::_1_::dtor$1 @ 0x14009444A (_CAudioProcessor--CAudioProcessor_--_1_--dtor$1.c)
 *     _CCrossProcessBaseEndpoint_StaticControlData_V1_VolatileControlData_V0_ControlData_V1_::CCrossProcessBaseEndpoint_StaticControlData_V1_VolatileControlData_V0_ControlData_V1__::_1_::dtor$0 @ 0x140094A71 (_CCrossProcessBaseEndpoint_StaticControlData_V1_VolatileControlData_V0_ControlData_V1_--CCrossPr.c)
 *     _CRTThreadManager::CRTThreadManager_::_1_::dtor$2 @ 0x140095181 (_CRTThreadManager--CRTThreadManager_--_1_--dtor$2.c)
 *     _CAudioPump::CAudioPump_::_1_::dtor$3 @ 0x140095998 (_CAudioPump--CAudioPump_--_1_--dtor$3.c)
 *     _CAudioPump::CAudioPump_::_1_::dtor$4 @ 0x1400959B1 (_CAudioPump--CAudioPump_--_1_--dtor$4.c)
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$3 @ 0x14009721B (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
