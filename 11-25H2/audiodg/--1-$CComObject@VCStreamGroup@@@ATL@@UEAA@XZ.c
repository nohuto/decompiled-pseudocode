/*
 * XREFs of ??1?$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x1400456AC
 * Callers:
 *     ??_E?$CComObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z @ 0x140045670 (--_E-$CComObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CComObject<CStreamGroup>::~CComObject<CStreamGroup>(CStreamGroup *this)
{
  *((_DWORD *)this + 86) = -1073741823;
  *(_QWORD *)this = &ATL::CComObject<CStreamGroup>::`vftable'{for `IStreamGroup'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CStreamGroup>::`vftable'{for `IStreamGroupInternal'};
  *((_QWORD *)this + 2) = &ATL::CComObject<CStreamGroup>::`vftable'{for `IFastRundown'};
  *((_QWORD *)this + 3) = &ATL::CComObject<CStreamGroup>::`vftable'{for `CSubmixImpl'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CStreamGroup::~CStreamGroup(this);
}
