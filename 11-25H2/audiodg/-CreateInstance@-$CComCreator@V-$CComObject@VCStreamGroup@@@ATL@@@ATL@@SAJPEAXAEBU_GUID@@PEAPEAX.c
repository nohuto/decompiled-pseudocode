/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14003B2D4
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCStreamGroup@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCStreamGroup@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14003B2A0 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCStreamGroup@@@ATL@@@ATL@@V-$CComCr.c)
 * Callees:
 *     ?Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ @ 0x140005C48 (-Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ.c)
 *     ??0?$CComObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z @ 0x14003B3C0 (--0-$CComObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z @ 0x140054D70 (-SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140058E04 (--2@YAPEAX_K@Z.c)
 *     ?SafeIncrementReferenceMultiThread@ATL@@YAKPECJ@Z @ 0x14005E0D0 (-SafeIncrementReferenceMultiThread@ATL@@YAKPECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CStreamGroup>>::CreateInstance(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v5; // esi
  void *v6; // rax
  volatile int *v7; // rdi
  int v8; // eax

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v5 = -2147024882;
  v6 = operator new(0x190uLL);
  v7 = (volatile int *)ATL::CComObject<CStreamGroup>::CComObject<CStreamGroup>(v6);
  if ( v7 )
  {
    ATL::SafeIncrementReferenceMultiThread(v7 + 86);
    v8 = ATL::CComSafeDeleteCriticalSection::Init((ATL::CComSafeDeleteCriticalSection *)(v7 + 88));
    v5 = 0;
    if ( v8 < 0 )
      v5 = v8;
    ATL::SafeDecrementReferenceMultiThread(v7 + 86);
    if ( v5 || (v5 = (**(__int64 (__fastcall ***)(volatile int *, __int64, _QWORD *))v7)(v7, a2, a3)) != 0 )
      (*(void (__fastcall **)(volatile int *, __int64))(*(_QWORD *)v7 + 72LL))(v7, 1LL);
  }
  return v5;
}
