/*
 * XREFs of ??0?$CCrossProcessInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@QEAA@PEAV?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@Z @ 0x140054AE4
 * Callers:
 *     ??0?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@QEAA@PEAX@Z @ 0x140054840 (--0-$CComObject@V-$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_.c)
 *     ??0?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@QEAA@PEAX@Z @ 0x1400824DC (--0-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_.c)
 *     ??0?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@@ATL@@QEAA@PEAX@Z @ 0x140082690 (--0-$CComObject@V-$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlData_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossProcessInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::CCrossProcessInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 20) = 0;
  *(_QWORD *)a1 = &CCrossProcessInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::`vftable';
  result = a1;
  *(_DWORD *)(a1 + 16) = 3;
  *(_QWORD *)(a1 + 8) = a2;
  return result;
}
