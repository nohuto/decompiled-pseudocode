/*
 * XREFs of ??0?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@QEAA@PEAX@Z @ 0x1400825AC
 * Callers:
 *     ??$CreateCrossProcessEndpointInstance@VCCrossProcessClientOutputEndpoint@@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@YAJU_GUID@@AEBU0@PEAPEAX@Z @ 0x140082240 (--$CreateCrossProcessEndpointInstance@VCCrossProcessClientOutputEndpoint@@UStaticControlData_V1@.c)
 * Callees:
 *     ??0?$CCrossProcessOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@QEAA@PEAV?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@Z @ 0x140054C3C (--0-$CCrossProcessOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1.c)
 *     ??0?$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@QEAA@XZ @ 0x140082808 (--0-$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlDat.c)
 *     ??0?$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@QEAA@PEAV?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@Z @ 0x1400829B0 (--0-$CCrossProcessControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@QEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComObject<CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::CComObject<CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>(
        __int64 a1)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rcx

  *(_DWORD *)(a1 + 520) = 0;
  *(_OWORD *)(a1 + 528) = 0LL;
  *(_OWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 560) = 0LL;
  *(_BYTE *)(a1 + 568) = 0;
  CCrossProcessBaseClientEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::CCrossProcessBaseClientEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>();
  CCrossProcessOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::CCrossProcessOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>(
    a1 + 472,
    a1);
  CCrossProcessControl<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::CCrossProcessControl<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>(a1 + 496);
  *(_QWORD *)(a1 + 576) = 0LL;
  *(_QWORD *)a1 = &ATL::CComObject<CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `IAudioEndpoint'};
  *(_QWORD *)(a1 + 8) = &ATL::CComObject<CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `IAudioEndpointRT'};
  *(_QWORD *)(a1 + 424) = &ATL::CComObject<CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `IAudioCrossProcessClientEndpoint'};
  *(_QWORD *)(a1 + 432) = &ATL::CComObject<CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `IAudioClock'};
  *(_QWORD *)(a1 + 440) = &ATL::CComObject<CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `IAudioClock2'};
  *v2 = &ATL::CComObject<CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `CCrossProcessOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>'};
  *v3 = &ATL::CComObject<CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `CCrossProcessControl<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>'};
  *(_QWORD *)(a1 + 512) = &ATL::CComObject<CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::`vftable'{for `IAudioCrossProcessClientEndpointInternal'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
