/*
 * XREFs of ??0?$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@QEAA@PEAV?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@Z @ 0x1400829B0
 * Callers:
 *     ??0?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@QEAA@PEAX@Z @ 0x1400824DC (--0-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_.c)
 *     ??0?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@QEAA@PEAX@Z @ 0x1400825AC (--0-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CCrossProcessControl<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::CCrossProcessControl<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>(
        _QWORD *a1,
        __int64 a2)
{
  a1[1] = a2;
  *a1 = &CCrossProcessControl<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::`vftable';
  return a1;
}
