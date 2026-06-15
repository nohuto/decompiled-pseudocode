/*
 * XREFs of ?AddRef@?$CComObject@VCProcessSubmix@@@ATL@@UEAAKXZ @ 0x140044FE0
 * Callers:
 *     ?AddRef@?$CComObject@VCProcessSubmix@@@ATL@@W7EAAKXZ @ 0x14006CAF0 (-AddRef@-$CComObject@VCProcessSubmix@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ @ 0x14006CB00 (-AddRef@-$CComObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CProcessSubmix>::AddRef(__int64 a1)
{
  return ATL::SafeIncrementReferenceMultiThread((volatile int *)(a1 + 336));
}
