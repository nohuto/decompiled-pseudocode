/*
 * XREFs of ?AddRef@?$CComObject@VCStreamInstance@@@ATL@@W7EAAKXZ @ 0x14005C8E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CStreamInstance>::AddRef(__int64 a1)
{
  return ATL::CComObject<CStreamInstance>::AddRef(a1 - 8);
}
