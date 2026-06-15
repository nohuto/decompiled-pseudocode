/*
 * XREFs of ?Release@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ @ 0x14008BD50
 * Callers:
 *     ?Release@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@W7EAAKXZ @ 0x14008BDC0 (-Release@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBA@EAAKXZ @ 0x14008BDD0 (-Release@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBI@EAAKXZ @ 0x14008BDE0 (-Release@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFDA@EAAKXZ @ 0x14008BDF0 (-Release@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFDA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFDI@EAAKXZ @ 0x14008BE10 (-Release@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFDI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFEA@EAAKXZ @ 0x14008BE30 (-Release@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFEA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFHA@EAAKXZ @ 0x14008BE50 (-Release@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFHA@EAAKXZ.c)
 * Callees:
 *     ??0ModuleLockHelper@ATL@@QEAA@XZ @ 0x14003E1EC (--0ModuleLockHelper@ATL@@QEAA@XZ.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z @ 0x140053B50 (-SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::Release(volatile int *a1)
{
  unsigned int v2; // edi
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = ATL::SafeDecrementReferenceMultiThread(a1 + 352);
  if ( !v2 )
  {
    ATL::ModuleLockHelper::ModuleLockHelper((ATL::ModuleLockHelper *)&v4);
    if ( a1 )
      (*(void (__fastcall **)(volatile int *, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, v2 + 1);
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
