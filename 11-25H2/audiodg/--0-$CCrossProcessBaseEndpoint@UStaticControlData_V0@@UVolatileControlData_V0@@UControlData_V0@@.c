/*
 * XREFs of ??0?$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@IEAA@XZ @ 0x14008287C
 * Callers:
 *     ??0?$CCrossProcessBaseServerEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x140082938 (--0-$CCrossProcessBaseServerEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlDat.c)
 * Callees:
 *     ??0CCrossProcessEndpointTraceLogger@@QEAA@XZ @ 0x14003C510 (--0CCrossProcessEndpointTraceLogger@@QEAA@XZ.c)
 */

__int64 __fastcall CCrossProcessBaseEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::CCrossProcessBaseEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>(
        __int64 a1)
{
  *(_QWORD *)a1 = &CCrossProcessBaseEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::`vftable'{for `IAudioEndpoint'};
  *(_QWORD *)(a1 + 8) = &CCrossProcessBaseEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::`vftable'{for `IAudioEndpointRT'};
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
