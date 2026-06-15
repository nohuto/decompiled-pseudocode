/*
 * XREFs of ??0?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAA@XZ @ 0x140054B80
 * Callers:
 *     ??0?$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x140054B08 (--0-$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlDat.c)
 *     ??0?$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@QEAA@XZ @ 0x140082808 (--0-$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlDat.c)
 * Callees:
 *     ??0CCrossProcessEndpointTraceLogger@@QEAA@XZ @ 0x14003C510 (--0CCrossProcessEndpointTraceLogger@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>(
        __int64 a1)
{
  *(_QWORD *)a1 = &CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::`vftable'{for `IAudioEndpoint'};
  *(_QWORD *)(a1 + 8) = &CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::`vftable'{for `IAudioEndpointRT'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 16), 0, 0);
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  CCrossProcessEndpointTraceLogger::CCrossProcessEndpointTraceLogger((CCrossProcessEndpointTraceLogger *)(a1 + 216));
  *(_BYTE *)(a1 + 416) = 1;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_DWORD *)(a1 + 176) = 1;
  *(_DWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  return a1;
}
