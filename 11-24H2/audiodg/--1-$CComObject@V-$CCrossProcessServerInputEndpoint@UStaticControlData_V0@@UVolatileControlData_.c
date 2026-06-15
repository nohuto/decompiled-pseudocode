/*
 * XREFs of ??1?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@@ATL@@UEAA@XZ @ 0x140080D34
 * Callers:
 *     ??_E?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@@ATL@@UEAAPEAXI@Z @ 0x140081160 (--_E-$CComObject@V-$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlData.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComObject<CCrossProcessServerInputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>>::~CComObject<CCrossProcessServerInputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 504) = -1073741823;
  *(_QWORD *)a1 = &ATL::CComObject<CCrossProcessServerInputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>>::`vftable'{for `IAudioEndpoint'};
  *(_QWORD *)(a1 + 8) = &ATL::CComObject<CCrossProcessServerInputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>>::`vftable'{for `IAudioEndpointRT'};
  *(_QWORD *)(a1 + 424) = &ATL::CComObject<CCrossProcessServerInputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>>::`vftable'{for `CCrossProcessBaseServerEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>'};
  *(_QWORD *)(a1 + 480) = &ATL::CComObject<CCrossProcessServerInputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>>::`vftable'{for `CCrossProcessInputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  return CCrossProcessServerInputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::~CCrossProcessServerInputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>(a1);
}
