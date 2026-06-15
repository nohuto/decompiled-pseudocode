/*
 * XREFs of ??1?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA@XZ @ 0x14005553C
 * Callers:
 *     ??1?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAA@XZ @ 0x1400551AC (--1-$CComObject@V-$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_.c)
 * Callees:
 *     ??1?$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA@XZ @ 0x140055564 (--1-$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlDat.c)
 */

void __fastcall CCrossProcessServerInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::~CCrossProcessServerInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>(
        __int64 a1)
{
  CCrossProcessBaseServerEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::~CCrossProcessBaseServerEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>();
  ATL::CComSafeDeleteCriticalSection::~CComSafeDeleteCriticalSection((ATL::CComSafeDeleteCriticalSection *)(a1 + 512));
}
