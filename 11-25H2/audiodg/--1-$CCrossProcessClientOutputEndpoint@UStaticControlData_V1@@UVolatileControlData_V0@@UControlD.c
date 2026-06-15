/*
 * XREFs of ??1?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA@XZ @ 0x140082DE4
 * Callers:
 *     ??1?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAA@XZ @ 0x140082A60 (--1-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData.c)
 * Callees:
 *     ??1?$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA@XZ @ 0x140082C60 (--1-$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlDat.c)
 */

void __fastcall CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::~CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>(
        __int64 a1)
{
  CCrossProcessBaseClientEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::~CCrossProcessBaseClientEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>(a1);
  ATL::CComSafeDeleteCriticalSection::~CComSafeDeleteCriticalSection((ATL::CComSafeDeleteCriticalSection *)(a1 + 528));
}
