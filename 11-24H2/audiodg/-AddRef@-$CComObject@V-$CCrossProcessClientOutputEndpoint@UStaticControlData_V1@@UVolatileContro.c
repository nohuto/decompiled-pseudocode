/*
 * XREFs of ?AddRef@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAAKXZ @ 0x140081440
 * Callers:
 *     ?AddRef@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@W7EAAKXZ @ 0x140081460 (-AddRef@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UV_ea_140081460.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBKI@EAAKXZ @ 0x140081470 (-AddRef@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UV_ea_140081470.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBLA@EAAKXZ @ 0x140081490 (-AddRef@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UV_ea_140081490.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBLI@EAAKXZ @ 0x1400814B0 (-AddRef@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UV_ea_1400814B0.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBNI@EAAKXZ @ 0x1400814D0 (-AddRef@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UV_ea_1400814D0.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBPA@EAAKXZ @ 0x1400814F0 (-AddRef@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UV_ea_1400814F0.c)
 *     ?AddRef@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WCAA@EAAKXZ @ 0x140081510 (-AddRef@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UV_ea_140081510.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::AddRef(
        __int64 a1)
{
  return ATL::SafeIncrementReferenceMultiThread((volatile int *)(a1 + 520));
}
