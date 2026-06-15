/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComAggObject@VCStreamInstance@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14005CD74
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCStreamInstance@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCStreamInstance@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14003AE50 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCStreamInstance@@@ATL@@@ATL@@V-$CCo.c)
 * Callees:
 *     ?Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ @ 0x140005C48 (-Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ.c)
 *     ??0CStreamInstance@@QEAA@XZ @ 0x14003AF80 (--0CStreamInstance@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x140058E04 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComCreator<ATL::CComAggObject<CStreamInstance>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  int v7; // esi
  _DWORD *v8; // rdi

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v7 = -2147024882;
  v8 = operator new(0x130uLL);
  v8[2] = 0;
  *(_QWORD *)v8 = &ATL::CComAggObject<CStreamInstance>::`vftable';
  CStreamInstance::CStreamInstance((CStreamInstance *)(v8 + 6));
  *((_QWORD *)v8 + 3) = &ATL::CComContainedObject<CStreamInstance>::`vftable'{for `IStreamInstanceInternal'};
  *((_QWORD *)v8 + 4) = &ATL::CComContainedObject<CStreamInstance>::`vftable'{for `IStreamInstance'};
  *((_QWORD *)v8 + 5) = &ATL::CComContainedObject<CStreamInstance>::`vftable'{for `IFastRundown'};
  *((_QWORD *)v8 + 6) = a1;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  if ( v8 )
  {
    v7 = ATL::CComSafeDeleteCriticalSection::Init((ATL::CComSafeDeleteCriticalSection *)(v8 + 14));
    if ( v7 < 0 || (v7 = (**(__int64 (__fastcall ***)(void *, __int64, _QWORD *))v8)(v8, a2, a3)) != 0 )
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
  }
  return (unsigned int)v7;
}
