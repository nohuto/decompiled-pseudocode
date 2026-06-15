/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCVpoContext@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140073B3C
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCVpoContext@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCVpoContext@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140073A10 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCVpoContext@@@ATL@@@ATL@@V-$CComCre.c)
 * Callees:
 *     ?Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ @ 0x140005C78 (-Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z @ 0x140053B50 (-SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140058D14 (--2@YAPEAX_K@Z.c)
 *     ?SafeIncrementReferenceMultiThread@ATL@@YAKPECJ@Z @ 0x14005DFE0 (-SafeIncrementReferenceMultiThread@ATL@@YAKPECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComCreator<ATL::CComObject<CVpoContext>>::CreateInstance(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // r15
  __int64 v4; // r12
  char *v6; // rdi
  int v7; // eax
  unsigned int v8; // r14d
  char *v11; // [rsp+68h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  try
  {
    *a3 = 0LL;
    v8 = -2147024882;
    v6 = (char *)operator new(0x60uLL);
    *((_DWORD *)v6 + 4) = 0;
    *(_OWORD *)(v6 + 24) = 0LL;
    *(_OWORD *)(v6 + 40) = 0LL;
    *((_QWORD *)v6 + 7) = 0LL;
    v6[64] = 0;
    *((_QWORD *)v6 + 9) = 0LL;
    *((_QWORD *)v6 + 10) = 0LL;
    *(_QWORD *)v6 = &ATL::CComObject<CVpoContext>::`vftable'{for `IFastRundown'};
    *((_QWORD *)v6 + 1) = &ATL::CComObject<CVpoContext>::`vftable'{for `IVpoContext'};
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    v11 = v6;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v8 = -2147024882;
    v6 = v11;
  }
  if ( v6 )
  {
    ATL::SafeIncrementReferenceMultiThread((volatile int *)v6 + 4);
    v7 = ATL::CComSafeDeleteCriticalSection::Init((ATL::CComSafeDeleteCriticalSection *)(v6 + 24));
    v8 = 0;
    if ( v7 < 0 )
      v8 = v7;
    ATL::SafeDecrementReferenceMultiThread((volatile int *)v6 + 4);
    if ( v8 || (v8 = (**(__int64 (__fastcall ***)(void *, __int64, _QWORD *))v6)(v6, v4, v3)) != 0 )
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v6 + 24LL))(v6, 1LL);
  }
  return v8;
}
