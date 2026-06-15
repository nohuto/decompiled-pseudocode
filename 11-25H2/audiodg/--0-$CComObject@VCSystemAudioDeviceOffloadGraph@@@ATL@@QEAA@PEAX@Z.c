/*
 * XREFs of ??0?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z @ 0x1400726E4
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140072E24 (-CreateInstance@-$CComCreator@V-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@ATL@@SAJPEAX.c)
 * Callees:
 *     ??0CSystemAudioDeviceOffloadGraph@@QEAA@XZ @ 0x140072788 (--0CSystemAudioDeviceOffloadGraph@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CSystemAudioDeviceOffloadGraph *__fastcall ATL::CComObject<CSystemAudioDeviceOffloadGraph>::CComObject<CSystemAudioDeviceOffloadGraph>(
        CSystemAudioDeviceOffloadGraph *a1)
{
  CSystemAudioDeviceOffloadGraph::CSystemAudioDeviceOffloadGraph(a1);
  *(_QWORD *)a1 = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)a1 + 1) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)a1 + 2) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)a1 + 3) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `ISubmix'};
  *((_QWORD *)a1 + 19) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `ISaDeviceCallback'};
  *((_QWORD *)a1 + 20) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `ISubmixInternal'};
  *((_QWORD *)a1 + 28) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioVolume'};
  *((_QWORD *)a1 + 29) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioMuteAPO'};
  *((_QWORD *)a1 + 30) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioMeter'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
