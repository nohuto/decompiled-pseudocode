/*
 * XREFs of ?AddRef@?$CComObject@V?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAAKXZ @ 0x140058560
 * Callers:
 *     ?AddRef@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@W7EAAKXZ @ 0x140083160 (-AddRef@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControl.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@@ATL@@WBKI@EAAKXZ @ 0x140083170 (-AddRef@-$CComObject@V-$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileContro.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBLA@EAAKXZ @ 0x140083190 (-AddRef@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVo_ea_140083190.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBLI@EAAKXZ @ 0x1400831B0 (-AddRef@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVo_ea_1400831B0.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBNI@EAAKXZ @ 0x1400831D0 (-AddRef@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVo_ea_1400831D0.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBPA@EAAKXZ @ 0x1400831F0 (-AddRef@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVo_ea_1400831F0.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@@ATL@@WBOA@EAAKXZ @ 0x140083350 (-AddRef@-$CComObject@V-$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UV_ea_140083350.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@@ATL@@WBPI@EAAKXZ @ 0x140083370 (-AddRef@-$CComObject@V-$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UV_ea_140083370.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CCrossProcessServerOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::AddRef(
        __int64 a1)
{
  return ATL::SafeIncrementReferenceMultiThread((volatile int *)(a1 + 512));
}
