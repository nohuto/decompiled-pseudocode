/*
 * XREFs of ??0?$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1400538E8
 * Callers:
 *     ??0?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@QEAA@PEAX@Z @ 0x140053620 (--0-$CComObject@V-$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_.c)
 *     ??0?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@QEAA@XZ @ 0x140053860 (--0-$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlD.c)
 * Callees:
 *     ??0?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAA@XZ @ 0x140053960 (--0-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@.c)
 */

__int64 __fastcall CCrossProcessBaseServerEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::CCrossProcessBaseServerEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>(
        __int64 a1,
        int a2)
{
  __int64 result; // rax

  CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>();
  *(_QWORD *)a1 = &CCrossProcessBaseServerEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::`vftable'{for `IAudioEndpoint'};
  *(_QWORD *)(a1 + 8) = &CCrossProcessBaseServerEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::`vftable'{for `IAudioEndpointRT'};
  *(_QWORD *)(a1 + 424) = &CCrossProcessBaseServerEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::`vftable';
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  result = a1;
  *(_DWORD *)(a1 + 472) = a2;
  return result;
}
