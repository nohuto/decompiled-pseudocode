/*
 * XREFs of ??0?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z @ 0x140073794
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140073A04 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEB.c)
 * Callees:
 *     ??0CSystemAudioDeviceShared@@QEAA@XZ @ 0x1400424EC (--0CSystemAudioDeviceShared@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComAggObject<CSystemAudioDeviceShared>::CComAggObject<CSystemAudioDeviceShared>(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CSystemAudioDeviceShared>::`vftable';
  CSystemAudioDeviceShared::CSystemAudioDeviceShared((CSystemAudioDeviceShared *)(a1 + 24));
  *(_QWORD *)(a1 + 248) = a2;
  *(_QWORD *)(a1 + 24) = &ATL::CComContainedObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioDeviceGraph'};
  *(_QWORD *)(a1 + 32) = &ATL::CComContainedObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioGraphCallback'};
  *(_QWORD *)(a1 + 40) = &ATL::CComContainedObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioProtectedOutput'};
  *(_QWORD *)(a1 + 48) = &ATL::CComContainedObject<CSystemAudioDeviceShared>::`vftable'{for `ISubmix'};
  *(_QWORD *)(a1 + 176) = &ATL::CComContainedObject<CSystemAudioDeviceShared>::`vftable'{for `ISaDeviceCallback'};
  *(_QWORD *)(a1 + 184) = &ATL::CComContainedObject<CSystemAudioDeviceShared>::`vftable'{for `ISubmixInternal'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
