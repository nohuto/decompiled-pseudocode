/*
 * XREFs of ?Release@?$CComObject@VCStreamInstance@@@ATL@@UEAAKXZ @ 0x140038D80
 * Callers:
 *     ?Release@?$CComObject@VCStreamInstance@@@ATL@@W7EAAKXZ @ 0x14005DC20 (-Release@-$CComObject@VCStreamInstance@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCStreamInstance@@@ATL@@WBA@EAAKXZ @ 0x14005DC30 (-Release@-$CComObject@VCStreamInstance@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z @ 0x140053B50 (-SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComObject<CStreamInstance>::Release(volatile int *a1)
{
  unsigned int v2; // edi

  v2 = ATL::SafeDecrementReferenceMultiThread(a1 + 6);
  if ( !v2 )
  {
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
      (*(void (__fastcall **)(volatile int *, __int64))(*(_QWORD *)a1 + 160LL))(a1, 1LL);
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
