/*
 * XREFs of ??1?$CComObject@VCAudioPump@@@ATL@@UEAA@XZ @ 0x140042EEC
 * Callers:
 *     ??_G?$CComObject@VCAudioPump@@@ATL@@UEAAPEAXI@Z @ 0x140042EA0 (--_G-$CComObject@VCAudioPump@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CComObject<CAudioPump>::~CComObject<CAudioPump>(CAudioPump *this)
{
  *((_DWORD *)this + 4) = -1073741823;
  *(_QWORD *)this = &ATL::CComObject<CAudioPump>::`vftable'{for `IAudioPump'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CAudioPump>::`vftable'{for `IAudioPumpLogging'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CAudioPump::~CAudioPump(this);
}
