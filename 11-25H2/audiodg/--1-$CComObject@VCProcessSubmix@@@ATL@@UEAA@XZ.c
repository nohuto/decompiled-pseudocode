/*
 * XREFs of ??1?$CComObject@VCProcessSubmix@@@ATL@@UEAA@XZ @ 0x1400420CC
 * Callers:
 *     ??_G?$CComObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z @ 0x140042090 (--_G-$CComObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CComObject<CProcessSubmix>::~CComObject<CProcessSubmix>(CProcessSubmix *this)
{
  *((_DWORD *)this + 84) = -1073741823;
  *(_QWORD *)this = &ATL::CComObject<CProcessSubmix>::`vftable'{for `IProcessSubmix'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CProcessSubmix>::`vftable'{for `IFastRundown'};
  *((_QWORD *)this + 2) = &ATL::CComObject<CProcessSubmix>::`vftable'{for `CSubmixImpl'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CProcessSubmix::~CProcessSubmix(this);
}
