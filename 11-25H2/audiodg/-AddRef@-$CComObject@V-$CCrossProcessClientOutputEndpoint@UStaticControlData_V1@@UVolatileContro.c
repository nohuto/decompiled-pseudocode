/*
 * XREFs of ?AddRef@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAAKXZ @ 0x140083210
 * Callers:
 *     ?AddRef@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@W7EAAKXZ @ 0x140083230 (-AddRef@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UV_ea_140083230.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBKI@EAAKXZ @ 0x140083240 (-AddRef@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UV_ea_140083240.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBLA@EAAKXZ @ 0x140083260 (-AddRef@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UV_ea_140083260.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBLI@EAAKXZ @ 0x140083280 (-AddRef@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UV_ea_140083280.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBNI@EAAKXZ @ 0x1400832A0 (-AddRef@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UV_ea_1400832A0.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBPA@EAAKXZ @ 0x1400832C0 (-AddRef@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UV_ea_1400832C0.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WCAA@EAAKXZ @ 0x1400832E0 (-AddRef@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UV_ea_1400832E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::AddRef(
        __int64 a1)
{
  return ATL::SafeIncrementReferenceMultiThread((volatile int *)(a1 + 520));
}
