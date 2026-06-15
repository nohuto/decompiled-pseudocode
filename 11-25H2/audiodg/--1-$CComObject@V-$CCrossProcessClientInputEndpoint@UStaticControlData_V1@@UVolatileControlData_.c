/*
 * XREFs of ??1?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAA@XZ @ 0x1400829CC
 * Callers:
 *     ??_E?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAAPEAXI@Z @ 0x140082E90 (--_E-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComObject<CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::~CComObject<CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 512) = -1073741823;
  *(_QWORD *)a1 = &ATL::CComObject<CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `IAudioEndpoint'};
  *(_QWORD *)(a1 + 8) = &ATL::CComObject<CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `IAudioEndpointRT'};
  *(_QWORD *)(a1 + 424) = &ATL::CComObject<CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `IAudioCrossProcessClientEndpoint'};
  *(_QWORD *)(a1 + 432) = &ATL::CComObject<CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `IAudioClock'};
  *(_QWORD *)(a1 + 440) = &ATL::CComObject<CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `IAudioClock2'};
  *(_QWORD *)(a1 + 472) = &ATL::CComObject<CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `CCrossProcessInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>'};
  *(_QWORD *)(a1 + 496) = &ATL::CComObject<CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `CCrossProcessControl<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  return CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::~CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>(a1);
}
