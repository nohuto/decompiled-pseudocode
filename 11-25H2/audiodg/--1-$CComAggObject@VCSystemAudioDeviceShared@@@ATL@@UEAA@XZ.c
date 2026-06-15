/*
 * XREFs of ??1?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ @ 0x14007383C
 * Callers:
 *     ??_E?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z @ 0x140073880 (--_E-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CComAggObject<CSystemAudioDeviceShared>::~CComAggObject<CSystemAudioDeviceShared>(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = -1073741823;
  *(_QWORD *)a1 = &ATL::CComAggObject<CSystemAudioDeviceShared>::`vftable';
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSystemAudioDeviceShared::~CSystemAudioDeviceShared((CSystemAudioDeviceShared *)(a1 + 24));
}
