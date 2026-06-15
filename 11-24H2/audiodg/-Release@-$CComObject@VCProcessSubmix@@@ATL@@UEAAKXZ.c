/*
 * XREFs of ?Release@?$CComObject@VCProcessSubmix@@@ATL@@UEAAKXZ @ 0x14003A2B0
 * Callers:
 *     ?Release@?$CComObject@VCProcessSubmix@@@ATL@@W7EAAKXZ @ 0x14006CCF0 (-Release@-$CComObject@VCProcessSubmix@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ @ 0x14006CD00 (-Release@-$CComObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z @ 0x140053B50 (-SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComObject<CProcessSubmix>::Release(volatile int *a1)
{
  unsigned int v2; // edi

  v2 = ATL::SafeDecrementReferenceMultiThread(a1 + 84);
  if ( !v2 )
  {
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
      (*(void (__fastcall **)(volatile int *, __int64))(*(_QWORD *)a1 + 56LL))(a1, 1LL);
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
