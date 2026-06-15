/*
 * XREFs of ??0?$CComObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z @ 0x140042474
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140042384 (-CreateInstance@-$CComCreator@V-$CComObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEBU_G.c)
 * Callees:
 *     ??0CSystemAudioDeviceShared@@QEAA@XZ @ 0x1400424EC (--0CSystemAudioDeviceShared@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CSystemAudioDeviceShared *__fastcall ATL::CComObject<CSystemAudioDeviceShared>::CComObject<CSystemAudioDeviceShared>(
        CSystemAudioDeviceShared *a1)
{
  CSystemAudioDeviceShared::CSystemAudioDeviceShared(a1);
  *(_QWORD *)a1 = &ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)a1 + 1) = &ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)a1 + 2) = &ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)a1 + 3) = &ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `ISubmix'};
  *((_QWORD *)a1 + 19) = &ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `ISaDeviceCallback'};
  *((_QWORD *)a1 + 20) = &ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `ISubmixInternal'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
