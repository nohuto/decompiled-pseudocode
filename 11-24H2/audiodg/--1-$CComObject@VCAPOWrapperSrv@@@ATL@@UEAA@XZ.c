/*
 * XREFs of ??1?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ @ 0x14003B62C
 * Callers:
 *     ??_G?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z @ 0x14003B5F0 (--_G-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CComObject<CAPOWrapperSrv>::~CComObject<CAPOWrapperSrv>(CAPOWrapperSrv *this)
{
  *((_DWORD *)this + 8) = -1073741823;
  *(_QWORD *)this = &ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAPOWrapperSrv'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAudioProcessingObject'};
  *((_QWORD *)this + 2) = &ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAudioSystemEffects2'};
  *((_QWORD *)this + 3) = &ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAudioProcessingObjectInternal'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CAPOWrapperSrv::~CAPOWrapperSrv(this);
}
