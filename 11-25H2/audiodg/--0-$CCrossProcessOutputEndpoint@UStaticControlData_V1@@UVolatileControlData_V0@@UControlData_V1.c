/*
 * XREFs of ??0?$CCrossProcessOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@QEAA@PEAV?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@Z @ 0x140054C3C
 * Callers:
 *     ??0?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@QEAA@XZ @ 0x140054A80 (--0-$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlD.c)
 *     ??0?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@QEAA@PEAX@Z @ 0x1400825AC (--0-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData.c)
 *     ??0?$CComObject@V?$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@@ATL@@QEAA@PEAX@Z @ 0x140082758 (--0-$CComObject@V-$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossProcessOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::CCrossProcessOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 20) = 0;
  *(_QWORD *)a1 = &CCrossProcessInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::`vftable';
  result = a1;
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 16) = 3;
  return result;
}
