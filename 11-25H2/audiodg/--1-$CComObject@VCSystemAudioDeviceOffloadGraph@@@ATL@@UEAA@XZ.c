/*
 * XREFs of ??1?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ @ 0x140072834
 * Callers:
 *     ??_E?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAPEAXI@Z @ 0x140072A50 (--_E-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CComObject<CSystemAudioDeviceOffloadGraph>::~CComObject<CSystemAudioDeviceOffloadGraph>(
        CSystemAudioDeviceOffloadGraph *this)
{
  *((_DWORD *)this + 62) = -1073741823;
  *(_QWORD *)this = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 3) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `ISubmix'};
  *((_QWORD *)this + 19) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `ISaDeviceCallback'};
  *((_QWORD *)this + 20) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `ISubmixInternal'};
  *((_QWORD *)this + 28) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioVolume'};
  *((_QWORD *)this + 29) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioMuteAPO'};
  *((_QWORD *)this + 30) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioMeter'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSystemAudioDeviceOffloadGraph::~CSystemAudioDeviceOffloadGraph(this);
}
