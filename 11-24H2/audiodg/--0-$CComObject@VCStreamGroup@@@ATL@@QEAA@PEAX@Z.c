/*
 * XREFs of ??0?$CComObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z @ 0x14003B0C0
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14003AFD4 (-CreateInstance@-$CComCreator@V-$CComObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX.c)
 * Callees:
 *     ??0CStreamGroup@@QEAA@XZ @ 0x14003B11C (--0CStreamGroup@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CStreamGroup *__fastcall ATL::CComObject<CStreamGroup>::CComObject<CStreamGroup>(CStreamGroup *a1)
{
  CStreamGroup::CStreamGroup(a1);
  *(_QWORD *)a1 = &ATL::CComObject<CStreamGroup>::`vftable'{for `IStreamGroup'};
  *((_QWORD *)a1 + 1) = &ATL::CComObject<CStreamGroup>::`vftable'{for `IStreamGroupInternal'};
  *((_QWORD *)a1 + 2) = &ATL::CComObject<CStreamGroup>::`vftable'{for `IFastRundown'};
  *((_QWORD *)a1 + 3) = &ATL::CComObject<CStreamGroup>::`vftable'{for `CSubmixImpl'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
