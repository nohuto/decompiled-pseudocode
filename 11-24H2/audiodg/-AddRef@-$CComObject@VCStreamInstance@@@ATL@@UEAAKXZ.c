/*
 * XREFs of ?AddRef@?$CComObject@VCStreamInstance@@@ATL@@UEAAKXZ @ 0x140044F90
 * Callers:
 *     ?AddRef@?$CComObject@VCStreamInstance@@@ATL@@W7EAAKXZ @ 0x14005C7F0 (-AddRef@-$CComObject@VCStreamInstance@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCAudioProcessor@@@ATL@@WBA@EAAKXZ @ 0x14005C800 (-AddRef@-$CComObject@VCAudioProcessor@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CStreamInstance>::AddRef(__int64 a1)
{
  return ATL::SafeIncrementReferenceMultiThread((volatile int *)(a1 + 24));
}
