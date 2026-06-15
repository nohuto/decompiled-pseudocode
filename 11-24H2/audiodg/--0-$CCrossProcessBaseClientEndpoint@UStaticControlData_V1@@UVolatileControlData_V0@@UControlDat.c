/*
 * XREFs of ??0?$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@QEAA@XZ @ 0x140080A38
 * Callers:
 *     ??0?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@QEAA@PEAX@Z @ 0x14008070C (--0-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_.c)
 *     ??0?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@QEAA@PEAX@Z @ 0x1400807DC (--0-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData.c)
 * Callees:
 *     ??0?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAA@XZ @ 0x140053960 (--0-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::CCrossProcessBaseClientEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>(
        __int64 a1)
{
  CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>(a1);
  *(_QWORD *)a1 = &CCrossProcessBaseClientEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::`vftable'{for `IAudioEndpoint'};
  *(_QWORD *)(a1 + 8) = &CCrossProcessBaseClientEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::`vftable'{for `IAudioEndpointRT'};
  *(_QWORD *)(a1 + 424) = &CCrossProcessBaseClientEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::`vftable'{for `IAudioCrossProcessClientEndpoint'};
  *(_QWORD *)(a1 + 432) = &CCrossProcessBaseClientEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::`vftable'{for `IAudioClock'};
  *(_QWORD *)(a1 + 440) = &Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>::`vftable';
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_DWORD *)(a1 + 464) = 0;
  return a1;
}
