/*
 * XREFs of ?AddRef@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ @ 0x14003FC60
 * Callers:
 *     ?AddRef@?$CComObject@VCAPOWrapperSrv@@@ATL@@W7EAAKXZ @ 0x14005C7C0 (-AddRef@-$CComObject@VCAPOWrapperSrv@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAKXZ @ 0x14005C7D0 (-AddRef@-$CComObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAKXZ @ 0x14005C7E0 (-AddRef@-$CComObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CAPOWrapperSrv>::AddRef(__int64 a1)
{
  return ATL::SafeIncrementReferenceMultiThread((volatile int *)(a1 + 32));
}
