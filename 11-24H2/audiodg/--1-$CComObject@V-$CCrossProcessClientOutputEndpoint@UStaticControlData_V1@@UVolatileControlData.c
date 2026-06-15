/*
 * XREFs of ??1?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAA@XZ @ 0x140080C90
 * Callers:
 *     ??_E?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAAPEAXI@Z @ 0x140081110 (--_E-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlDat.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComObject<CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::~CComObject<CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 520) = -1073741823;
  *(_QWORD *)a1 = &ATL::CComObject<CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `IAudioEndpoint'};
  *(_QWORD *)(a1 + 8) = &ATL::CComObject<CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `IAudioEndpointRT'};
  *(_QWORD *)(a1 + 424) = &ATL::CComObject<CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `IAudioCrossProcessClientEndpoint'};
  *(_QWORD *)(a1 + 432) = &ATL::CComObject<CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `IAudioClock'};
  *(_QWORD *)(a1 + 440) = &ATL::CComObject<CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `IAudioClock2'};
  *(_QWORD *)(a1 + 472) = &ATL::CComObject<CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `CCrossProcessOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>'};
  *(_QWORD *)(a1 + 496) = &ATL::CComObject<CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `CCrossProcessControl<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>'};
  *(_QWORD *)(a1 + 512) = &ATL::CComObject<CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `IAudioCrossProcessClientEndpointInternal'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  return CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::~CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>(a1);
}
