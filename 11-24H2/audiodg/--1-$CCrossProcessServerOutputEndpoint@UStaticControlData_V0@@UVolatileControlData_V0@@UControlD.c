/*
 * XREFs of ??1?$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAA@XZ @ 0x140081064
 * Callers:
 *     ??1?$CComObject@V?$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@@ATL@@UEAA@XZ @ 0x140080DA0 (--1-$CComObject@V-$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData.c)
 * Callees:
 *     ??1?$CCrossProcessBaseServerEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAA@XZ @ 0x140080F68 (--1-$CCrossProcessBaseServerEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlDat.c)
 */

void __fastcall CCrossProcessServerOutputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::~CCrossProcessServerOutputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>(
        _QWORD *a1)
{
  CCrossProcessBaseServerEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::~CCrossProcessBaseServerEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>(a1);
  ATL::CComSafeDeleteCriticalSection::~CComSafeDeleteCriticalSection((ATL::CComSafeDeleteCriticalSection *)(a1 + 65));
}
