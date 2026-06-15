/*
 * XREFs of ??1?$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAA@XZ @ 0x140045358
 * Callers:
 *     _CAudioProcessor::CAudioProcessor_::_1_::dtor$0 @ 0x140094434 (_CAudioProcessor--CAudioProcessor_--_1_--dtor$0.c)
 *     _ATL::CComObject_CCrossProcessServerInputEndpoint_StaticControlData_V1_VolatileControlData_V0_ControlData_V1___::CComObject_CCrossProcessServerInputEndpoint_StaticControlData_V1_VolatileControlData_V0_ControlData_V1____::_1_::dtor$1 @ 0x140094A3F (_ATL--CComObject_CCrossProcessServerInputEndpoint_StaticControlData_V1_VolatileControlData_V0_Co.c)
 *     _CCrossProcessServerOutputEndpoint_StaticControlData_V1_VolatileControlData_V0_ControlData_V1_::CCrossProcessServerOutputEndpoint_StaticControlData_V1_VolatileControlData_V0_ControlData_V1__::_1_::dtor$0 @ 0x140094A58 (_CCrossProcessServerOutputEndpoint_StaticControlData_V1_VolatileControlData_V0_ControlData_V1_--.c)
 *     _CAudioPump::CAudioPump_::_1_::dtor$0 @ 0x140095956 (_CAudioPump--CAudioPump_--_1_--dtor$0.c)
 *     _ATL::CComObject_CCrossProcessClientOutputEndpoint_StaticControlData_V1_VolatileControlData_V0_ControlData_V1___::CComObject_CCrossProcessClientOutputEndpoint_StaticControlData_V1_VolatileControlData_V0_ControlData_V1____::_1_::dtor$1 @ 0x1400971D3 (_ATL--CComObject_CCrossProcessClientOutputEndpoint_StaticControlData_V1_VolatileControlData_V0_C.c)
 *     _CSpatialCrossProcessClientOutputEndpoint::CSpatialCrossProcessClientOutputEndpoint_::_1_::dtor$0 @ 0x14009724D (_CSpatialCrossProcessClientOutputEndpoint--CSpatialCrossProcessClientOutputEndpoint_--_1_--dtor$.c)
 *     _CSpatialCrossProcessServerInputEndpoint::CSpatialCrossProcessServerInputEndpoint_::_1_::dtor$0 @ 0x140097266 (_CSpatialCrossProcessServerInputEndpoint--CSpatialCrossProcessServerInputEndpoint_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::~CComObjectRootEx<ATL::CComMultiThreadModel>(
        __int64 a1)
{
  ATL::CComSafeDeleteCriticalSection::~CComSafeDeleteCriticalSection((ATL::CComSafeDeleteCriticalSection *)(a1 + 8));
}
