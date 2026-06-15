/*
 * XREFs of ??0?$CCrossProcessBaseServerEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x140080B68
 * Callers:
 *     ??0?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@@ATL@@QEAA@PEAX@Z @ 0x1400808C0 (--0-$CComObject@V-$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlData_.c)
 *     ??0?$CComObject@V?$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@@ATL@@QEAA@PEAX@Z @ 0x140080988 (--0-$CComObject@V-$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData.c)
 * Callees:
 *     ??0?$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@IEAA@XZ @ 0x140080AAC (--0-$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@.c)
 */

__int64 __fastcall CCrossProcessBaseServerEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::CCrossProcessBaseServerEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>(
        __int64 a1,
        int a2)
{
  __int64 result; // rax

  CCrossProcessBaseEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::CCrossProcessBaseEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>(a1);
  *(_QWORD *)a1 = &CCrossProcessBaseServerEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::`vftable'{for `IAudioEndpoint'};
  *(_QWORD *)(a1 + 8) = &CCrossProcessBaseServerEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::`vftable'{for `IAudioEndpointRT'};
  *(_QWORD *)(a1 + 424) = &CCrossProcessBaseServerEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::`vftable';
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  result = a1;
  *(_DWORD *)(a1 + 472) = a2;
  return result;
}
