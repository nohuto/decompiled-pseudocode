/*
 * XREFs of ?AddRef@?$CComObject@V?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAAKXZ @ 0x140058420
 * Callers:
 *     ?AddRef@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@W7EAAKXZ @ 0x140081390 (-AddRef@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControl.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@@ATL@@WBKI@EAAKXZ @ 0x1400813A0 (-AddRef@-$CComObject@V-$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileContro.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBLA@EAAKXZ @ 0x1400813C0 (-AddRef@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVo_ea_1400813C0.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBLI@EAAKXZ @ 0x1400813E0 (-AddRef@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVo_ea_1400813E0.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBNI@EAAKXZ @ 0x140081400 (-AddRef@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVo_ea_140081400.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBPA@EAAKXZ @ 0x140081420 (-AddRef@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVo_ea_140081420.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@@ATL@@WBOA@EAAKXZ @ 0x140081580 (-AddRef@-$CComObject@V-$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UV_ea_140081580.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@@ATL@@WBPI@EAAKXZ @ 0x1400815A0 (-AddRef@-$CComObject@V-$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UV_ea_1400815A0.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CCrossProcessServerOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::AddRef(
        __int64 a1)
{
  return ATL::SafeIncrementReferenceMultiThread((volatile int *)(a1 + 512));
}
