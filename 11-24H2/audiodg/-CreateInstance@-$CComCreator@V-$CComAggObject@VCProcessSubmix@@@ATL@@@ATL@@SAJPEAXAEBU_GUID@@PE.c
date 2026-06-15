/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComAggObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14006CAA0
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCProcessSubmix@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCProcessSubmix@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14003AFC0 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCProcessSubmix@@@ATL@@@ATL@@V-$CCom.c)
 * Callees:
 *     ?Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ @ 0x140005C78 (-Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ.c)
 *     ??0CProcessSubmix@@QEAA@XZ @ 0x14003B288 (--0CProcessSubmix@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x140058D14 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComCreator<ATL::CComAggObject<CProcessSubmix>>::CreateInstance(
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
    v7 = operator new(0x1A0uLL);
    v7[2] = 0;
    *(_QWORD *)v7 = &ATL::CComAggObject<CProcessSubmix>::`vftable';
    CProcessSubmix::CProcessSubmix((CProcessSubmix *)(v7 + 6));
    *((_QWORD *)v7 + 3) = &ATL::CComContainedObject<CProcessSubmix>::`vftable'{for `IProcessSubmix'};
    *((_QWORD *)v7 + 4) = &ATL::CComContainedObject<CProcessSubmix>::`vftable'{for `IFastRundown'};
    *((_QWORD *)v7 + 5) = &ATL::CComContainedObject<CProcessSubmix>::`vftable'{for `CSubmixImpl'};
    *((_QWORD *)v7 + 45) = a1;
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
    v8 = ATL::CComSafeDeleteCriticalSection::Init((ATL::CComSafeDeleteCriticalSection *)(v7 + 92));
    if ( v8 < 0 || (v8 = (**(__int64 (__fastcall ***)(void *, __int64, _QWORD *))v7)(v7, v4, v3)) != 0 )
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v7 + 24LL))(v7, 1LL);
  }
  return (unsigned int)v8;
}
