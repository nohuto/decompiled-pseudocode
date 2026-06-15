/*
 * XREFs of ??1?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x14004EA28
 * Callers:
 *     ??_G?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140089850 (--_G-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::~CComObject<CSpatialCrossProcessServerInputEndpoint>(
        CSpatialCrossProcessServerInputEndpoint *this)
{
  *((_DWORD *)this + 362) = -1073741823;
  *(_QWORD *)this = &ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *((_QWORD *)this + 3) = &ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  *((_QWORD *)this + 166) = &ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `IAudioCrossProcessServerEndpoint'};
  *((_QWORD *)this + 167) = &ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `ISpatialAudioCrossProcessServerEndpoint'};
  *((_QWORD *)this + 180) = &ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::`vftable';
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSpatialCrossProcessServerInputEndpoint::~CSpatialCrossProcessServerInputEndpoint(this);
}
