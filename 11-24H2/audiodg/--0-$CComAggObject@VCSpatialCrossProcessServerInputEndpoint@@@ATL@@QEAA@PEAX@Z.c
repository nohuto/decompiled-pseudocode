/*
 * XREFs of ??0?$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140088898
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14008A38C (-CreateInstance@-$CComCreator@V-$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@.c)
 * Callees:
 *     ??0CSpatialCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x140088E34 (--0CSpatialCrossProcessServerInputEndpoint@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComAggObject<CSpatialCrossProcessServerInputEndpoint>::CComAggObject<CSpatialCrossProcessServerInputEndpoint>(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CSpatialCrossProcessServerInputEndpoint>::`vftable';
  CSpatialCrossProcessServerInputEndpoint::CSpatialCrossProcessServerInputEndpoint((CSpatialCrossProcessServerInputEndpoint *)(a1 + 24));
  *(_QWORD *)(a1 + 1472) = a2;
  *(_QWORD *)(a1 + 24) = &ATL::CComContainedObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpoint'};
  *(_QWORD *)(a1 + 32) = &ATL::CComContainedObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  *(_QWORD *)(a1 + 40) = &ATL::CComContainedObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *(_QWORD *)(a1 + 48) = &ATL::CComContainedObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  *(_QWORD *)(a1 + 1352) = &ATL::CComContainedObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `IAudioCrossProcessServerEndpoint'};
  *(_QWORD *)(a1 + 1360) = &ATL::CComContainedObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `ISpatialAudioCrossProcessServerEndpoint'};
  *(_QWORD *)(a1 + 1464) = &ATL::CComContainedObject<CSpatialCrossProcessServerInputEndpoint>::`vftable';
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
