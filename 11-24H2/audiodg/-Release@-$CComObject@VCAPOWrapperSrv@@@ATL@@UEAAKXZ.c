/*
 * XREFs of ?Release@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ @ 0x140036FA0
 * Callers:
 *     ?Release@?$CComObject@VCAPOWrapperSrv@@@ATL@@W7EAAKXZ @ 0x14005DBD0 (-Release@-$CComObject@VCAPOWrapperSrv@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAKXZ @ 0x14005DBE0 (-Release@-$CComObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAKXZ @ 0x14005DBF0 (-Release@-$CComObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z @ 0x140053B50 (-SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComObject<CAPOWrapperSrv>::Release(volatile int *a1)
{
  unsigned int v2; // edi

  v2 = ATL::SafeDecrementReferenceMultiThread(a1 + 8);
  if ( !v2 )
  {
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
      (*(void (__fastcall **)(volatile int *, __int64))(*(_QWORD *)a1 + 120LL))(a1, 1LL);
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
