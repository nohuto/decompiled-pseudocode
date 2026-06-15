/*
 * XREFs of ??0?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@QEAA@PEAX@Z @ 0x1400824DC
 * Callers:
 *     ??$CreateCrossProcessEndpointInstance@VCCrossProcessClientInputEndpoint@@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@YAJU_GUID@@AEBU0@PEAPEAX@Z @ 0x140082160 (--$CreateCrossProcessEndpointInstance@VCCrossProcessClientInputEndpoint@@UStaticControlData_V1@@.c)
 * Callees:
 *     ??0?$CCrossProcessInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@QEAA@PEAV?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@Z @ 0x140054AE4 (--0-$CCrossProcessInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@.c)
 *     ??0?$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@QEAA@XZ @ 0x140082808 (--0-$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlDat.c)
 *     ??0?$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@QEAA@PEAV?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@Z @ 0x1400829B0 (--0-$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@QEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComObject<CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::CComObject<CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>(
        __int64 a1)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rcx

  *(_DWORD *)(a1 + 512) = 0;
  *(_OWORD *)(a1 + 520) = 0LL;
  *(_OWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_BYTE *)(a1 + 560) = 0;
  CCrossProcessBaseClientEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::CCrossProcessBaseClientEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>();
  CCrossProcessInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::CCrossProcessInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>(
    a1 + 472,
    a1);
  CCrossProcessControl<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::CCrossProcessControl<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>(a1 + 496);
  *(_QWORD *)a1 = &ATL::CComObject<CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `IAudioEndpoint'};
  *(_QWORD *)(a1 + 8) = &ATL::CComObject<CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `IAudioEndpointRT'};
  *(_QWORD *)(a1 + 424) = &ATL::CComObject<CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `IAudioCrossProcessClientEndpoint'};
  *(_QWORD *)(a1 + 432) = &ATL::CComObject<CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `IAudioClock'};
  *(_QWORD *)(a1 + 440) = &ATL::CComObject<CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `IAudioClock2'};
  *v2 = &ATL::CComObject<CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `CCrossProcessInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>'};
  *v3 = &ATL::CComObject<CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `CCrossProcessControl<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
