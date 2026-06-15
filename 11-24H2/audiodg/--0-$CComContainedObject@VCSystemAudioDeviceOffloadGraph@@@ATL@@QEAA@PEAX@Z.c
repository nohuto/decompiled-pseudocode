/*
 * XREFs of ??0?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z @ 0x1400700D0
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400707C4 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@ATL@@SAJP.c)
 * Callees:
 *     ??0CSystemAudioDeviceOffloadGraph@@QEAA@XZ @ 0x140070218 (--0CSystemAudioDeviceOffloadGraph@@QEAA@XZ.c)
 */

CSystemAudioDeviceOffloadGraph *__fastcall ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::CComContainedObject<CSystemAudioDeviceOffloadGraph>(
        CSystemAudioDeviceOffloadGraph *a1,
        __int64 a2)
{
  CSystemAudioDeviceOffloadGraph::CSystemAudioDeviceOffloadGraph(a1);
  *((_QWORD *)a1 + 31) = a2;
  *(_QWORD *)a1 = &ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)a1 + 1) = &ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)a1 + 2) = &ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)a1 + 3) = &ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `ISubmix'};
  *((_QWORD *)a1 + 19) = &ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `ISaDeviceCallback'};
  *((_QWORD *)a1 + 20) = &ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `ISubmixInternal'};
  *((_QWORD *)a1 + 28) = &ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioVolume'};
  *((_QWORD *)a1 + 29) = &ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioMuteAPO'};
  *((_QWORD *)a1 + 30) = &ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioMeter'};
  return a1;
}
