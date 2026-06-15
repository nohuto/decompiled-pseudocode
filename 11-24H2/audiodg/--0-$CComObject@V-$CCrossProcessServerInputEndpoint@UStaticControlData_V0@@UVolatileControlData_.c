/*
 * XREFs of ??0?$CComObject@V?$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@@ATL@@QEAA@PEAX@Z @ 0x1400808C0
 * Callers:
 *     ??$CreateCrossProcessEndpointInstance@VCCrossProcessServerInputEndpoint@@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@YAJU_GUID@@AEBU0@PEAPEAX@Z @ 0x140080550 (--$CreateCrossProcessEndpointInstance@VCCrossProcessServerInputEndpoint@@UStaticControlData_V0@@.c)
 * Callees:
 *     ??0CFadeWindowLUT@@QEAA@XZ @ 0x1400376A4 (--0CFadeWindowLUT@@QEAA@XZ.c)
 *     ??0?$CCrossProcessInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@QEAA@PEAV?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@Z @ 0x1400538C4 (--0-$CCrossProcessInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@.c)
 *     ??0?$CCrossProcessBaseServerEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x140080B68 (--0-$CCrossProcessBaseServerEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlDat.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComObject<CCrossProcessServerInputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>>::CComObject<CCrossProcessServerInputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 504) = 0;
  *(_OWORD *)(a1 + 512) = 0LL;
  *(_OWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_BYTE *)(a1 + 552) = 0;
  CCrossProcessBaseServerEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::CCrossProcessBaseServerEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>(
    a1,
    0LL);
  CCrossProcessInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::CCrossProcessInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>(
    a1 + 480,
    a1);
  *(_BYTE *)(a1 + 564) = 0;
  CFadeWindowLUT::CFadeWindowLUT((CFadeWindowLUT *)(a1 + 572));
  *(_DWORD *)(a1 + 560) = 0;
  *(_DWORD *)(a1 + 568) = 0;
  *(_QWORD *)a1 = &ATL::CComObject<CCrossProcessServerInputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>>::`vftable'{for `IAudioEndpoint'};
  *(_QWORD *)(a1 + 8) = &ATL::CComObject<CCrossProcessServerInputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>>::`vftable'{for `IAudioEndpointRT'};
  *(_QWORD *)(a1 + 424) = &ATL::CComObject<CCrossProcessServerInputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>>::`vftable'{for `CCrossProcessBaseServerEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>'};
  *(_QWORD *)(a1 + 480) = &ATL::CComObject<CCrossProcessServerInputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>>::`vftable'{for `CCrossProcessInputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
