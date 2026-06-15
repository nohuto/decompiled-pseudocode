/*
 * XREFs of ??1?$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAA@XZ @ 0x140045058
 * Callers:
 *     _CAudioProcessor::CAudioProcessor_::_1_::dtor$0 @ 0x140093EA6 (_CAudioProcessor--CAudioProcessor_--_1_--dtor$0.c)
 *     _ATL::CComObject_CCrossProcessServerInputEndpoint_StaticControlData_V1_VolatileControlData_V0_ControlData_V1___::CComObject_CCrossProcessServerInputEndpoint_StaticControlData_V1_VolatileControlData_V0_ControlData_V1____::_1_::dtor$1 @ 0x1400944B1 (_ATL--CComObject_CCrossProcessServerInputEndpoint_StaticControlData_V1_VolatileControlData_V0_Co.c)
 *     _CCrossProcessServerOutputEndpoint_StaticControlData_V1_VolatileControlData_V0_ControlData_V1_::CCrossProcessServerOutputEndpoint_StaticControlData_V1_VolatileControlData_V0_ControlData_V1__::_1_::dtor$0 @ 0x1400944CA (_CCrossProcessServerOutputEndpoint_StaticControlData_V1_VolatileControlData_V0_ControlData_V1_--.c)
 *     _CAudioPump::CAudioPump_::_1_::dtor$0 @ 0x1400953C8 (_CAudioPump--CAudioPump_--_1_--dtor$0.c)
 *     _ATL::CComObject_CCrossProcessClientOutputEndpoint_StaticControlData_V1_VolatileControlData_V0_ControlData_V1___::CComObject_CCrossProcessClientOutputEndpoint_StaticControlData_V1_VolatileControlData_V0_ControlData_V1____::_1_::dtor$1 @ 0x140096C57 (_ATL--CComObject_CCrossProcessClientOutputEndpoint_StaticControlData_V1_VolatileControlData_V0_C.c)
 *     _CSpatialCrossProcessClientOutputEndpoint::CSpatialCrossProcessClientOutputEndpoint_::_1_::dtor$0 @ 0x140096CD1 (_CSpatialCrossProcessClientOutputEndpoint--CSpatialCrossProcessClientOutputEndpoint_--_1_--dtor$.c)
 *     _CSpatialCrossProcessServerInputEndpoint::CSpatialCrossProcessServerInputEndpoint_::_1_::dtor$0 @ 0x140096CEA (_CSpatialCrossProcessServerInputEndpoint--CSpatialCrossProcessServerInputEndpoint_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::~CComObjectRootEx<ATL::CComMultiThreadModel>(
        __int64 a1)
{
  ATL::CComSafeDeleteCriticalSection::~CComSafeDeleteCriticalSection((ATL::CComSafeDeleteCriticalSection *)(a1 + 8));
}
