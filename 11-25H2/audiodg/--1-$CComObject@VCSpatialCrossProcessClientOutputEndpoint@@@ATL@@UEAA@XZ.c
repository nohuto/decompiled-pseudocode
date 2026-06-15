/*
 * XREFs of ??1?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x1400894D0
 * Callers:
 *     ??_E?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140089800 (--_E-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::~CComObject<CSpatialCrossProcessClientOutputEndpoint>(
        CSpatialCrossProcessClientOutputEndpoint *this)
{
  *((_DWORD *)this + 352) = -1073741823;
  *(_QWORD *)this = &ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *((_QWORD *)this + 3) = &ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  *((_QWORD *)this + 166) = &ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `ISpatialAudioCrossProcessClientEndpoint'};
  *((_QWORD *)this + 167) = &ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioClock'};
  *((_QWORD *)this + 168) = &ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioClock2'};
  *((_QWORD *)this + 174) = &ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable';
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSpatialCrossProcessClientOutputEndpoint::~CSpatialCrossProcessClientOutputEndpoint(this);
}
