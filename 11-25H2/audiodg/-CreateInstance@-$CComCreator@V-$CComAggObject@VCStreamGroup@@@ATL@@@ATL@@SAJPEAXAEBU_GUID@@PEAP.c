/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComAggObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14006541C
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCStreamGroup@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCStreamGroup@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14003B2A0 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCStreamGroup@@@ATL@@@ATL@@V-$CComCr.c)
 * Callees:
 *     ?Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ @ 0x140005C48 (-Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ.c)
 *     ??0CStreamGroup@@QEAA@XZ @ 0x14003B41C (--0CStreamGroup@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x140058E04 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComCreator<ATL::CComAggObject<CStreamGroup>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  _DWORD *v7; // rdi
  int v8; // esi
  _DWORD *v9; // [rsp+20h] [rbp-38h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  try
  {
    *a3 = 0LL;
    v8 = -2147024882;
    v7 = operator new(0x1A8uLL);
    v7[2] = 0;
    *(_QWORD *)v7 = &ATL::CComAggObject<CStreamGroup>::`vftable';
    CStreamGroup::CStreamGroup((CStreamGroup *)(v7 + 6));
    *((_QWORD *)v7 + 3) = &ATL::CComContainedObject<CStreamGroup>::`vftable'{for `IStreamGroup'};
    *((_QWORD *)v7 + 4) = &ATL::CComContainedObject<CStreamGroup>::`vftable'{for `IStreamGroupInternal'};
    *((_QWORD *)v7 + 5) = &ATL::CComContainedObject<CStreamGroup>::`vftable'{for `IFastRundown'};
    *((_QWORD *)v7 + 6) = &ATL::CComContainedObject<CStreamGroup>::`vftable'{for `CSubmixImpl'};
    *((_QWORD *)v7 + 46) = a1;
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    v9 = v7;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v8 = -2147024882;
    v7 = v9;
  }
  if ( v7 )
  {
    v8 = ATL::CComSafeDeleteCriticalSection::Init((ATL::CComSafeDeleteCriticalSection *)(v7 + 94));
    if ( v8 < 0 || (v8 = (**(__int64 (__fastcall ***)(void *, __int64, _QWORD *))v7)(v7, v4, v3)) != 0 )
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v7 + 24LL))(v7, 1LL);
  }
  return (unsigned int)v8;
}
