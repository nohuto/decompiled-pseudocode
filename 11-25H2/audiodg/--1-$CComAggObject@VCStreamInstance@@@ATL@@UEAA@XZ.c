/*
 * XREFs of ??1?$CComAggObject@VCStreamInstance@@@ATL@@UEAA@XZ @ 0x14005C114
 * Callers:
 *     ??_E?$CComAggObject@VCStreamInstance@@@ATL@@UEAAPEAXI@Z @ 0x14005C5E0 (--_E-$CComAggObject@VCStreamInstance@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CComAggObject<CStreamInstance>::~CComAggObject<CStreamInstance>(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = -1073741823;
  *(_QWORD *)a1 = &ATL::CComAggObject<CStreamInstance>::`vftable';
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CStreamInstance::~CStreamInstance((CStreamInstance *)(a1 + 24));
}
