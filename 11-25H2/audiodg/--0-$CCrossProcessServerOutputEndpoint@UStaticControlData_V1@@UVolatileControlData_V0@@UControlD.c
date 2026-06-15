/*
 * XREFs of ??0?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@QEAA@XZ @ 0x140054A80
 * Callers:
 *     ??0?$CComObject@V?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@QEAA@PEAX@Z @ 0x140054A10 (--0-$CComObject@V-$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData.c)
 * Callees:
 *     ??0?$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x140054B08 (--0-$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlDat.c)
 *     ??0?$CCrossProcessOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@QEAA@PEAV?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@Z @ 0x140054C3C (--0-$CCrossProcessOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCrossProcessServerOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::CCrossProcessServerOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 512) = 0;
  *(_OWORD *)(a1 + 520) = 0LL;
  *(_OWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_BYTE *)(a1 + 560) = 0;
  CCrossProcessBaseServerEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::CCrossProcessBaseServerEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>(
    a1,
    1LL);
  CCrossProcessOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::CCrossProcessOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>(
    a1 + 480,
    a1);
  *(_DWORD *)(a1 + 568) = 0;
  return a1;
}
