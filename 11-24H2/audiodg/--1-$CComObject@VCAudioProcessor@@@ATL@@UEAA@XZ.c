/*
 * XREFs of ??1?$CComObject@VCAudioProcessor@@@ATL@@UEAA@XZ @ 0x1400454EC
 * Callers:
 *     ??_G?$CComObject@VCAudioProcessor@@@ATL@@UEAAPEAXI@Z @ 0x1400454A0 (--_G-$CComObject@VCAudioProcessor@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CComObject<CAudioProcessor>::~CComObject<CAudioProcessor>(CAudioProcessor *this)
{
  *((_DWORD *)this + 6) = -1073741823;
  *(_QWORD *)this = &ATL::CComObject<CAudioProcessor>::`vftable'{for `IAudioProcessor'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CAudioProcessor>::`vftable'{for `IAudioProcessRT'};
  *((_QWORD *)this + 2) = &ATL::CComObject<CAudioProcessor>::`vftable'{for `IAudioLogging'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CAudioProcessor::~CAudioProcessor(this);
}
