/*
 * XREFs of ??0?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x1400887D4
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14008A2B4 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@.c)
 * Callees:
 *     ??0CSpatialCrossProcessClientOutputEndpoint@@QEAA@XZ @ 0x140088CE0 (--0CSpatialCrossProcessClientOutputEndpoint@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComAggObject<CSpatialCrossProcessClientOutputEndpoint>::CComAggObject<CSpatialCrossProcessClientOutputEndpoint>(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable';
  CSpatialCrossProcessClientOutputEndpoint::CSpatialCrossProcessClientOutputEndpoint((CSpatialCrossProcessClientOutputEndpoint *)(a1 + 24));
  *(_QWORD *)(a1 + 1432) = a2;
  *(_QWORD *)(a1 + 24) = &ATL::CComContainedObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioEndpoint'};
  *(_QWORD *)(a1 + 32) = &ATL::CComContainedObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  *(_QWORD *)(a1 + 40) = &ATL::CComContainedObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *(_QWORD *)(a1 + 48) = &ATL::CComContainedObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  *(_QWORD *)(a1 + 1352) = &ATL::CComContainedObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `ISpatialAudioCrossProcessClientEndpoint'};
  *(_QWORD *)(a1 + 1360) = &ATL::CComContainedObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioClock'};
  *(_QWORD *)(a1 + 1368) = &ATL::CComContainedObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioClock2'};
  *(_QWORD *)(a1 + 1416) = &ATL::CComContainedObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable';
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
